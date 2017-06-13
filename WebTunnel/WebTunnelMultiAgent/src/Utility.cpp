//
// Utility.cpp
//
// $Id: //my-devices.net/Main/gateway/src/Utility.cpp#1 $
//
// Copyright (c) 2010-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// This is unpublished proprietary source code of Applied Informatics.
// The contents of this file may not be disclosed to third parties, 
// copied or duplicated in any form, in whole or in part.
//


#include "Utility.h"
#include "Poco/Net/HTTPBasicCredentials.h"
#include "Poco/Util/Application.h"
#include "Poco/Mutex.h"
#include <set>
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>
#if POCO_OS == POCO_OS_LINUX
#include <shadow.h>
#endif


namespace MyDevices {


Poco::FastMutex Utility::_authMutex;


std::string Utility::htmlize(const std::string& str)
{
	std::string::const_iterator it(str.begin());
	std::string::const_iterator end(str.end());
	std::string html;
	for (; it != end; ++it)
	{
		switch (*it)
		{
		case '<': html += "&lt;"; break;
		case '>': html += "&gt;"; break;
		case '"': html += "&quot;"; break;
		case '&': html += "&amp;"; break;
		default:  html += *it; break;
		}
	}
	return html;
}


bool Utility::authenticate(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response)
{
	try
	{
		if (request.hasCredentials())
		{
			Poco::Net::HTTPBasicCredentials creds(request);
			Poco::Util::Application& app = Poco::Util::Application::instance();
			if (app.config().has("gateway.username"))
			{
				std::string username = app.config().getString("gateway.username");
				std::string password = app.config().getString("gateway.password", "");
				if (creds.getUsername() == username && creds.getPassword() == password)
				{
					return true;
				}
			}
			else if (authenticate(creds.getUsername(), creds.getPassword()))
			{
				return true;
			}
		}
	}
	catch (Poco::Exception&)
	{
	}
	response.requireAuthentication("my-devices.net Gateway");
	response.setChunkedTransferEncoding(true);
	response.setContentType("text/html");
	response.erase("Content-Encoding");
	response.send()
		<< "<html><head><title>Authentication Failed</title></head>"
		<< "<body><h1>Authentication Failed</h1>"
		<< "<p>The given username or password is invalid.</p></body></html>";
	return false;
}


bool Utility::authenticate(const std::string& username, const std::string& password)
{
	Poco::FastMutex::ScopedLock lock(_authMutex);

	std::string storedHash;
#if POCO_OS == POCO_OS_LINUX
	struct spwd* pSpwd = getspnam(username.c_str());
	if (pSpwd)
	{
		storedHash = pSpwd->sp_pwdp;
	}
	else
#endif
	{
		setpwent();
		struct passwd* pPwd = getpwent();
		while (pPwd && username != pPwd->pw_name)
		{
			pPwd = getpwent();
		}
		if (pPwd) 
		{
			storedHash = pPwd->pw_passwd;
			endpwent();
		}
		else
		{
			endpwent();
			return false;
		}
	}

	std::string salt;
	std::string::const_iterator it = storedHash.begin();
	std::string::const_iterator end = storedHash.end();
	if (it != end) salt += *it++;
	while (it != end && *it != '$') salt += *it++;
	if (it != end) salt += *it++;
	while (it != end && *it != '$') salt += *it++;
	if (it != end) salt += *it++;
	const char* credHash = crypt(password.c_str(), salt.c_str());

	bool authenticated = credHash && storedHash == credHash;
	return authenticated;
}


} // namespace MyDevices

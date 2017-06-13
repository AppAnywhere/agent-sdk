//
// Utility.h
//
// $Id: //my-devices.net/Main/gateway/src/Utility.h#1 $
//
// Copyright (c) 2010-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// This is unpublished proprietary source code of Applied Informatics.
// The contents of this file may not be disclosed to third parties, 
// copied or duplicated in any form, in whole or in part.
//


#ifndef MyDevices_Utility_INCLUDED
#define MyDevices_Utility_INCLUDED


#include "Poco/Poco.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Mutex.h"


namespace MyDevices {


class Utility
	/// This class contains various utility functions used by server pages.
{
public:
	static std::string htmlize(const std::string& str);
		/// Creates a copy of str with reserved HTML characters propery escaped.
		
	static bool authenticate(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
		/// Returns true if the given HTTP request is authenticated with a valid
		/// username and password, using HTTP Basic authentication.
		
	static bool authenticate(const std::string& username, const std::string& password);
		/// Returns true if the given username and password are valid, otherwise
		/// false.
		///
		/// Username and password are validated using the system's user database
		/// (/etc/passwd, etc.).

private:
	static Poco::FastMutex _authMutex;
};


// Shortcut, since it's needed so often.
typedef Utility U;


} // namespace MyDevices


#endif // MyDevices_Utility_INCLUDED

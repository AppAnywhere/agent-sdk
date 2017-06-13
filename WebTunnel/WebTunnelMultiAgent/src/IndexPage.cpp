//
// IndexPage.cpp
//
// This file has been generated from IndexPage.cpsp.
//


#include "IndexPage.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTMLForm.h"
#include "Poco/DeflatingStream.h"


#include "Utility.h"
#include "Poco/Net/NameValueCollection.h"
#include "Utility.h"


namespace MyDevices {


IndexPage::IndexPage(DeviceManager::Ptr context):
	_context(context)
{
}


void IndexPage::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response)
{
	response.setChunkedTransferEncoding(true);
	response.setContentType("text/html;charset=utf-8");
	bool _compressResponse(request.hasToken("Accept-Encoding", "gzip"));
	if (_compressResponse) response.set("Content-Encoding", "gzip");

	if (!(U::authenticate(request, response))) return;

	Poco::Net::HTMLForm form(request, request.stream());
#line 4 "/ws/my-devices.net/gateway/html/template.inc"

	Poco::Net::NameValueCollection pageTemplate;
#line 9 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"

pageTemplate.set("title", "Gateway");
std::string message;
DeviceManager::Ptr pDeviceManager = context();

std::string action = form.get("action", "");
std::string target = form.get("target", "");
try
{
	if (action == "add")
	{
		Poco::AutoPtr<Poco::Util::AbstractConfiguration> pDeviceConfig = pDeviceManager->createDevice();
		response.redirect("/device/" + pDeviceConfig->getString("webtunnel.deviceId"));
		return;
	}
	else if (action == "remove")
	{
		pDeviceManager->removeDevice(target);
		pDeviceManager->restartAgents();
	}
	else if (action == "update")
	{
		Poco::AutoPtr<Poco::Util::AbstractConfiguration> pDeviceConfig = pDeviceManager->deviceConfiguration(target);
		pDeviceConfig->setString("webtunnel.deviceName", form.get("deviceName"));
		pDeviceConfig->setString("webtunnel.host", form.get("host"));
		pDeviceConfig->setString("webtunnel.ports", form.get("ports"));
		pDeviceConfig->setString("webtunnel.httpPort", form.get("httpPort"));
		pDeviceConfig->setString("webtunnel.password", form.get("password"));
		pDeviceManager->updateDevice(pDeviceConfig);
		pDeviceManager->restartAgents();
	}
	else if (action == "cancel")
	{
		Poco::AutoPtr<Poco::Util::AbstractConfiguration> pDeviceConfig = pDeviceManager->deviceConfiguration(target);
		if (!pDeviceConfig->getBool("webtunnel.enable", true))
		{
			pDeviceManager->removeDevice(target);
		}
	}
}
catch (Poco::Exception& exc)
{
	message = exc.displayText();
}

std::vector<std::string> devices = pDeviceManager->enumerateDevices();
	std::ostream& _responseStream = response.send();
	Poco::DeflatingOutputStream _gzipStream(_responseStream, Poco::DeflatingStreamBuf::STREAM_GZIP, 1);
	std::ostream& responseStream = _compressResponse ? _gzipStream : _responseStream;
	responseStream << "<!DOCTYPE HTML>\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "";
	// begin include html/template.inc
	responseStream << "";
	responseStream << "\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "";
	// end include html/template.inc
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "";
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "";
	// begin include html/header.inc
	responseStream << "<html>\n";
	responseStream << "  <head>\n";
	responseStream << "    <meta http-equiv=\"content-type\" content=\"text/html; charset=utf-8\">\n";
	responseStream << "    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge,chrome=1\">\n";
	responseStream << "    <title>";
#line 5 "/ws/my-devices.net/gateway/html/header.inc"
	responseStream << ( U::htmlize(pageTemplate["title"]) );
	responseStream << "</title>\n";
	responseStream << "    <link rel=\"stylesheet\" href=\"/css/styles.css\" type=\"text/css\"/>\n";
	responseStream << "    <link rel=\"icon\" href=\"/images/favicon.ico\">\n";
	responseStream << "    <script type=\"text/javascript\" src=\"/jquery/jquery-1.8.3.min.js\"></script>\n";
	responseStream << "  </head>\n";
	responseStream << "  <body lang=\"en\">\n";
	responseStream << "    <header>\n";
	responseStream << "      <div class=\"headercontainer\">\n";
	responseStream << "        <div class=\"header\">  \n";
	responseStream << "\t\t  <h1>";
#line 14 "/ws/my-devices.net/gateway/html/header.inc"
	responseStream << ( U::htmlize(pageTemplate["title"]) );
	responseStream << "</h1>\n";
	responseStream << "        </div>\n";
	responseStream << "      </div>\n";
	responseStream << "    </header>\n";
	responseStream << "    <div class=\"contentcontainer\">\n";
	responseStream << "      <div class=\"content\">\n";
	responseStream << "";
	// end include html/header.inc
	responseStream << "\n";
	responseStream << "\n";
	responseStream << "<script>\n";
	responseStream << "function addDevice()\n";
	responseStream << "{\n";
	responseStream << "\tdocument.actionForm.action.value = \"add\";\n";
	responseStream << "\tdocument.actionForm.submit();\n";
	responseStream << "}\n";
	responseStream << "\n";
	responseStream << "function removeDevice(id)\n";
	responseStream << "{\n";
	responseStream << "\tif (confirm('Delete device \"' + id + '?'))\n";
	responseStream << "\t{\n";
	responseStream << "\t\tdocument.actionForm.target.value = id;\n";
	responseStream << "\t\tdocument.actionForm.action.value = \"remove\";\n";
	responseStream << "\t\tdocument.actionForm.submit();\n";
	responseStream << "\t}\n";
	responseStream << "}\n";
	responseStream << "</script>\n";
	responseStream << "\n";
	responseStream << "";
#line 77 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
 if (!message.empty()) { 	responseStream << "\n";
	responseStream << "<div class=\"error\">";
#line 78 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( message );
	responseStream << "</div>\n";
	responseStream << "";
#line 79 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
 } 	responseStream << "\n";
	responseStream << "\n";
	responseStream << "<form name=\"actionForm\" method=\"post\">\n";
	responseStream << "<input type=\"hidden\" name=\"action\" value=\"\">\n";
	responseStream << "<input type=\"hidden\" name=\"target\" value=\"\">\n";
	responseStream << "</form>\n";
	responseStream << "\n";
	responseStream << "<div class=\"groupbox\">\n";
	responseStream << "<h2>System Settings</h2>\n";
	responseStream << "\n";
	responseStream << "<table class=\"list\">\n";
	responseStream << "<tbody>\n";
	responseStream << "<tr>\n";
	responseStream << "<td>Reflector Server</td>\n";
	responseStream << "<td><a href=\"";
#line 93 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( pDeviceManager->config()->getString("webtunnel.reflectorURI", "") );
	responseStream << "\">";
#line 93 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceManager->config()->getString("webtunnel.reflectorURI", "")) );
	responseStream << "</a></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr>\n";
	responseStream << "<td>Domain</td>\n";
	responseStream << "<td>";
#line 97 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceManager->config()->getString("webtunnel.domain", "")) );
	responseStream << "</td>\n";
	responseStream << "</tr>\n";
	responseStream << "</tbody>\n";
	responseStream << "</table>\n";
	responseStream << "</div>\n";
	responseStream << "\n";
	responseStream << "<div class=\"groupbox\">\n";
	responseStream << "<h2>Devices</h2>\n";
	responseStream << "\n";
	responseStream << "<table class=\"list\">\n";
	responseStream << "<thead>\n";
	responseStream << "<tr>\n";
	responseStream << "<th>Name</th>\n";
	responseStream << "<th>ID</th>\n";
	responseStream << "<th>Host</th>\n";
	responseStream << "<th>Ports</th>\n";
	responseStream << "<th>&nbsp;</th>\n";
	responseStream << "</tr>\n";
	responseStream << "</tr>\n";
	responseStream << "</thead>\n";
	responseStream << "<tbody>\n";
	responseStream << "";
#line 118 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"

bool even = false;
for (std::vector<std::string>::const_iterator it = devices.begin(); it != devices.end(); ++it) 
{
	Poco::AutoPtr<Poco::Util::AbstractConfiguration> pDeviceConfig = pDeviceManager->deviceConfiguration(*it);	
	responseStream << "\n";
	responseStream << "<tr class=\"";
#line 124 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( even ? "even" : "odd" );
	responseStream << "\">\n";
	responseStream << "<td><a href=\"/device/";
#line 125 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( *it );
	responseStream << "\">";
#line 125 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.deviceName", "")) );
	responseStream << "</a></td>\n";
	responseStream << "<td>";
#line 126 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.deviceId", "")) );
	responseStream << "</td>\n";
	responseStream << "<td>";
#line 127 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.host", "")) );
	responseStream << "</td>\n";
	responseStream << "<td>";
#line 128 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.ports", "")) );
	responseStream << "</td>\n";
	responseStream << "<td><a href=\"#\" onclick=\"removeDevice('";
#line 129 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( *it );
	responseStream << "')\"><img src=\"/images/minusicon.png\" title=\"Remove Device\"></a></td>\n";
	responseStream << "</tr>\n";
	responseStream << "";
#line 131 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"

	even = !even; 
} 
	responseStream << "\n";
	responseStream << "<tr class=\"";
#line 135 "/ws/my-devices.net/gateway/src/IndexPage.cpsp"
	responseStream << ( even ? "even" : "odd" );
	responseStream << "\">\n";
	responseStream << "<td colspan=\"5\"><a href=\"#\" onclick=\"addDevice()\"><img src=\"/images/plusicon.png\" title=\"Add Device\"></a></td>\n";
	responseStream << "</tr>\n";
	responseStream << "</tbody>\n";
	responseStream << "</table>\n";
	responseStream << "</div>\n";
	responseStream << "\n";
	responseStream << "";
	// begin include html/footer.inc
	responseStream << "      </div>\n";
	responseStream << "    </div>\n";
	responseStream << "    <footer>\n";
	responseStream << "      <div class=\"footercontainer\">\n";
	responseStream << "        <div class=\"footer\">\n";
	responseStream << "          my-devices Gateway Version 1.0.0 | Copyright &copy; 2015, Applied Informatics Software Engineering GmbH.\n";
	responseStream << "        </div>\n";
	responseStream << "      </div>\n";
	responseStream << "    </footer>\n";
	responseStream << "  </body>\n";
	responseStream << "</html>\n";
	responseStream << "";
	// end include html/footer.inc
	responseStream << "\n";
	responseStream << "";
	if (_compressResponse) _gzipStream.close();
}


} // namespace MyDevices

//
// DevicePage.cpp
//
// This file has been generated from DevicePage.cpsp.
//


#include "DevicePage.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTMLForm.h"
#include "Poco/DeflatingStream.h"


#include "Utility.h"
#include "Poco/Path.h"
#include "Poco/Net/NameValueCollection.h"
#include "Utility.h"


namespace MyDevices {


DevicePage::DevicePage(DeviceManager::Ptr context):
	_context(context)
{
}


void DevicePage::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response)
{
	response.setChunkedTransferEncoding(true);
	response.setContentType("text/html;charset=utf-8");
	bool _compressResponse(request.hasToken("Accept-Encoding", "gzip"));
	if (_compressResponse) response.set("Content-Encoding", "gzip");

	if (!(U::authenticate(request, response))) return;

	Poco::Net::HTMLForm form(request, request.stream());
#line 4 "/ws/my-devices.net/gateway/html/template.inc"

	Poco::Net::NameValueCollection pageTemplate;
#line 10 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"

	std::string message;
	DeviceManager::Ptr pDeviceManager = context();
	
	Poco::Path p(request.getURI());
	std::string target = p.getFileName();

	Poco::AutoPtr<Poco::Util::AbstractConfiguration> pDeviceConfig = pDeviceManager->deviceConfiguration(target);	

	pageTemplate.set("title", "Gateway > " + pDeviceConfig->getString("webtunnel.deviceName"));
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
	responseStream << "function cancelUpdateDevice(id)\n";
	responseStream << "{\n";
	responseStream << "\tdocument.actionForm.action.value = \"cancel\";\n";
	responseStream << "\tdocument.actionForm.submit();\n";
	responseStream << "}\n";
	responseStream << "</script>\n";
	responseStream << "\n";
	responseStream << "";
#line 32 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
 if (!message.empty()) { 	responseStream << "\n";
	responseStream << "<div class=\"error\">";
#line 33 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( message );
	responseStream << "</div>\n";
	responseStream << "";
#line 34 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
 } 	responseStream << "\n";
	responseStream << "\n";
	responseStream << "<div class=\"groupbox\">\n";
	responseStream << "<h2>Device Settings</h2>\n";
	responseStream << "\n";
	responseStream << "<form name=\"actionForm\" method=\"post\" action=\"/\">\n";
	responseStream << "<input type=\"hidden\" name=\"action\" value=\"update\">\n";
	responseStream << "<input type=\"hidden\" name=\"target\" value=\"";
#line 41 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( pDeviceConfig->getString("webtunnel.deviceId") );
	responseStream << "\">\n";
	responseStream << "<table class=\"list\">\n";
	responseStream << "<tbody>\n";
	responseStream << "<tr class=\"even\">\n";
	responseStream << "<td class=\"basicProperty\">ID</td>\n";
	responseStream << "<td>";
#line 46 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.deviceId")) );
	responseStream << "</td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"odd\">\n";
	responseStream << "<td class=\"basicProperty\">Name</td>\n";
	responseStream << "<td><input name=\"deviceName\" value=\"";
#line 50 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.deviceName")) );
	responseStream << "\" size=\"64\" maxLength=\"64\"></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"even\">\n";
	responseStream << "<td class=\"basicProperty\">Device IP Address or Domain Name</td>\n";
	responseStream << "<td><input name=\"host\" value=\"";
#line 54 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.host")) );
	responseStream << "\" size=\"64\" maxLength=\"64\"></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"odd\">\n";
	responseStream << "<td class=\"basicProperty\">Forwarded TCP Ports</td>\n";
	responseStream << "<td><input name=\"ports\" value=\"";
#line 58 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.ports")) );
	responseStream << "\" size=\"40\" maxLength=\"40\"></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"even\">\n";
	responseStream << "<td class=\"basicProperty\">Device HTTP Server Port</td>\n";
	responseStream << "<td><input name=\"httpPort\" value=\"";
#line 62 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.httpPort")) );
	responseStream << "\" size=\"5\" maxLength=\"5\"></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"odd\">\n";
	responseStream << "<td>Device Password</td>\n";
	responseStream << "<td><input type=\"password\" name=\"password\" value=\"";
#line 66 "/ws/my-devices.net/gateway/src/DevicePage.cpsp"
	responseStream << ( U::htmlize(pDeviceConfig->getString("webtunnel.password")) );
	responseStream << "\" size=\"32\" maxLength=\"32\"></td>\n";
	responseStream << "</tr>\n";
	responseStream << "<tr class=\"even\">\n";
	responseStream << "<td colspan=\"2\" style=\"text-align: right\">\n";
	responseStream << "<a href=\"#\" onclick=\"cancelUpdateDevice()\">Cancel</a>\n";
	responseStream << "&nbsp;\n";
	responseStream << "<input type=\"submit\" value=\"Save\">\n";
	responseStream << "</td>\n";
	responseStream << "</tr>\n";
	responseStream << "</tbody>\n";
	responseStream << "</table>\n";
	responseStream << "</div>\n";
	responseStream << "</form>\n";
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

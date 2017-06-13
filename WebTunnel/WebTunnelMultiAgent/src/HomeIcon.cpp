//
// HomeIcon.cpp
//
// This file has been generated from HomeIcon.cpsp.
//


#include "HomeIcon.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTMLForm.h"


#include "Poco/DateTime.h"
#include "Poco/DateTimeParser.h"
#include "Poco/DateTimeFormatter.h"
#include "Poco/DateTimeFormat.h"
#line 9 "/ws/my-devices.net/gateway/src/HomeIcon.cpsp"


// res/HomeIcon.png
static const unsigned char data[] = {
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x08, 0x03, 0x00, 0x00, 0x00, 0x45, 0xD3, 0x2F, 0xA6, 0x00, 
	0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x41, 
	0x64, 0x6F, 0x62, 0x65, 0x20, 0x49, 0x6D, 0x61, 0x67, 0x65, 0x52, 0x65, 0x61, 0x64, 0x79, 0x71, 0xC9, 
	0x65, 0x3C, 0x00, 0x00, 0x00, 0x30, 0x50, 0x4C, 0x54, 0x45, 0x01, 0x83, 0xC8, 0x0C, 0x88, 0xCB, 0xE7, 
	0xED, 0xF0, 0x9E, 0xCD, 0xE6, 0x4B, 0xA7, 0xD7, 0xC8, 0xE0, 0xED, 0xDF, 0xEA, 0xF0, 0x70, 0xB8, 0xDE, 
	0x2D, 0x99, 0xD2, 0xED, 0xEF, 0xF0, 0x00, 0x7C, 0xC5, 0x00, 0x80, 0xC8, 0x07, 0x86, 0xCA, 0x1E, 0x90, 
	0xCE, 0x7D, 0xBE, 0xE1, 0xEE, 0xEE, 0xEE, 0x26, 0x97, 0x60, 0xD8, 0x00, 0x00, 0x00, 0x10, 0x74, 0x52, 
	0x4E, 0x53, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0x00, 0xE0, 0x23, 0x5D, 0x19, 0x00, 0x00, 0x00, 0xA9, 0x49, 0x44, 0x41, 0x54, 0x78, 0xDA, 0xCC, 0xD2, 
	0x4B, 0x12, 0x84, 0x20, 0x0C, 0x04, 0xD0, 0x4E, 0x94, 0x48, 0x0C, 0xEA, 0xFD, 0x6F, 0x3B, 0xF1, 0x83, 
	0x28, 0xA2, 0xEB, 0xE9, 0x55, 0xE0, 0x15, 0x04, 0x28, 0xB0, 0x7C, 0x04, 0xD7, 0x81, 0x86, 0xC0, 0xEF, 
	0x38, 0xCC, 0xFA, 0x86, 0x3A, 0x9B, 0x0D, 0xDA, 0x46, 0x1D, 0x40, 0x74, 0xD3, 0x82, 0xDA, 0xBB, 0x11, 
	0xA1, 0xD7, 0x27, 0x1E, 0x46, 0x94, 0x8A, 0x66, 0xE4, 0x6C, 0xEB, 0x5A, 0xBE, 0xE3, 0xC5, 0xBC, 0x6F, 
	0x56, 0x1C, 0x66, 0x74, 0x09, 0xA2, 0x16, 0x94, 0x78, 0x33, 0xEF, 0x1B, 0x25, 0xA3, 0x44, 0x50, 0x15, 
	0x6C, 0x8A, 0xA6, 0x1D, 0x8A, 0x45, 0xA6, 0x86, 0xB9, 0x4E, 0xB2, 0x20, 0x24, 0x43, 0x6B, 0x25, 0x2C, 
	0x05, 0xB0, 0x08, 0x87, 0x87, 0xA5, 0xB0, 0xCE, 0x6F, 0xA7, 0xD5, 0xF4, 0x40, 0x3D, 0xAF, 0xC2, 0x3B, 
	0x26, 0x33, 0xDF, 0x6C, 0x2F, 0xB9, 0x42, 0xCC, 0xE2, 0x99, 0xD1, 0x44, 0xEB, 0xD6, 0xBA, 0xFB, 0x44, 
	0xFB, 0x07, 0x84, 0x27, 0x8D, 0x3B, 0x8E, 0x48, 0x3E, 0x2A, 0xA8, 0xC2, 0x5B, 0xFC, 0x59, 0x94, 0xCF, 
	0xB2, 0xFA, 0xD4, 0x75, 0x7E, 0x02, 0x0C, 0x00, 0xCD, 0xD5, 0x1A, 0x58, 0xAA, 0x34, 0xC0, 0x29, 0x00, 
	0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};


static bool checkModified(Poco::Net::HTTPServerRequest& request)
{
	Poco::DateTime modified(2015, 4, 1, 18, 26, 56);
	request.response().setChunkedTransferEncoding(false);
	request.response().set("Last-Modified", Poco::DateTimeFormatter::format(modified, Poco::DateTimeFormat::HTTP_FORMAT));
	if (request.has("If-Modified-Since"))
	{
		Poco::DateTime modifiedSince;
		int tzd;
		Poco::DateTimeParser::parse(request.get("If-Modified-Since"), modifiedSince, tzd);
		if (modified <= modifiedSince)
		{
			request.response().setContentLength(0);
			request.response().setStatusAndReason(Poco::Net::HTTPResponse::HTTP_NOT_MODIFIED);
			request.response().send();
			return false;
		}
	}
	request.response().setContentLength(static_cast<int>(sizeof(data)));
	return true;
}


void HomeIcon::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response)
{
	response.setChunkedTransferEncoding(true);
	response.setContentType("image/png");

	if (!(checkModified(request))) return;

	std::ostream& responseStream = response.send();
	responseStream << "";
	responseStream << "";
	responseStream << "";
	responseStream << "";
#line 58 "/ws/my-devices.net/gateway/src/HomeIcon.cpsp"

	responseStream.write(reinterpret_cast<const char*>(data), sizeof(data));
	responseStream << "";
}
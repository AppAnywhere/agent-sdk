//
// HeaderLogo.cpp
//
// This file has been generated from HeaderLogo.cpsp.
//


#include "HeaderLogo.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTMLForm.h"


#include "Poco/DateTime.h"
#include "Poco/DateTimeParser.h"
#include "Poco/DateTimeFormatter.h"
#include "Poco/DateTimeFormat.h"
#line 9 "/ws/my-devices.net/gateway/src/HeaderLogo.cpsp"


// res/HeaderLogo.png
static const unsigned char data[] = {
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 
	0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x18, 0x08, 0x03, 0x00, 0x00, 0x00, 0x31, 0xAC, 0xC4, 0xCB, 0x00, 
	0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x41, 
	0x64, 0x6F, 0x62, 0x65, 0x20, 0x49, 0x6D, 0x61, 0x67, 0x65, 0x52, 0x65, 0x61, 0x64, 0x79, 0x71, 0xC9, 
	0x65, 0x3C, 0x00, 0x00, 0x00, 0x30, 0x50, 0x4C, 0x54, 0x45, 0x09, 0x77, 0xB8, 0xFF, 0xFF, 0xFF, 0x4B, 
	0x9B, 0xCB, 0x7C, 0xB6, 0xD9, 0xBD, 0xDB, 0xEC, 0x9D, 0xC9, 0xE3, 0x19, 0x80, 0xBD, 0x2A, 0x89, 0xC1, 
	0xEF, 0xF6, 0xFA, 0xDE, 0xED, 0xF6, 0x6B, 0xAD, 0xD4, 0x3A, 0x92, 0xC6, 0xCE, 0xE4, 0xF1, 0xAD, 0xD2, 
	0xE7, 0x8C, 0xC0, 0xDE, 0x5B, 0xA4, 0xD0, 0x60, 0xE6, 0x98, 0x79, 0x00, 0x00, 0x02, 0x9D, 0x49, 0x44, 
	0x41, 0x54, 0x78, 0xDA, 0xDC, 0x96, 0xD9, 0x92, 0xA5, 0x20, 0x0C, 0x86, 0x21, 0x89, 0xAC, 0xA2, 0xEF, 
	0xFF, 0xB6, 0x93, 0x05, 0x14, 0x4F, 0x7B, 0x4E, 0x75, 0x55, 0x4F, 0xD7, 0x58, 0x93, 0x0B, 0x37, 0x7E, 
	0xC9, 0x47, 0x48, 0xA2, 0xCE, 0xFD, 0x27, 0x46, 0xDE, 0xC3, 0x87, 0xE1, 0x88, 0xE1, 0x91, 0x60, 0x31, 
	0xF9, 0xF5, 0x91, 0x60, 0xD5, 0xFB, 0xF4, 0x63, 0x17, 0x4B, 0xFD, 0x85, 0xAD, 0xC4, 0x06, 0x3F, 0x06, 
	0xF3, 0xF0, 0x0B, 0x60, 0x7F, 0xC3, 0xBA, 0x03, 0x44, 0x70, 0x7B, 0xA3, 0x2D, 0x3A, 0x07, 0x0B, 0x49, 
	0x18, 0x2B, 0x22, 0xF6, 0xA1, 0x39, 0x95, 0xE3, 0x46, 0x84, 0x61, 0x80, 0x85, 0xC2, 0xE2, 0xE2, 0x54, 
	0x5D, 0x0E, 0x75, 0x1C, 0x37, 0x01, 0x1B, 0xAB, 0xE3, 0x2C, 0x54, 0x2D, 0x35, 0x7D, 0x28, 0x56, 0xA2, 
	0x2B, 0x8D, 0x96, 0x71, 0xBB, 0xB3, 0x0C, 0x74, 0x1A, 0xBF, 0x08, 0x93, 0xF3, 0x1E, 0x17, 0xCF, 0x96, 
	0x22, 0xCA, 0xC9, 0xEF, 0x2E, 0xF0, 0x51, 0xE4, 0xE0, 0x7D, 0x3E, 0xB9, 0x4A, 0x52, 0x55, 0x36, 0xB0, 
	0x9A, 0x55, 0x4C, 0xC1, 0x45, 0x3E, 0x05, 0x4B, 0xAF, 0x2C, 0xAF, 0x90, 0x42, 0xAA, 0xD8, 0x97, 0x59, 
	0xC8, 0x4F, 0xF5, 0x72, 0x19, 0xB1, 0x87, 0xB6, 0x00, 0x20, 0x3B, 0x14, 0xFC, 0x46, 0x3B, 0x94, 0xBC, 
	0x5D, 0xC0, 0x78, 0x46, 0x8E, 0x83, 0x5F, 0xF9, 0x94, 0x94, 0x85, 0x41, 0x25, 0x64, 0x9B, 0x9D, 0x8E, 
	0xB4, 0xF6, 0x64, 0x4B, 0x00, 0xAD, 0xBE, 0x5C, 0x60, 0x53, 0x2F, 0x4D, 0x01, 0x4C, 0xDD, 0xC1, 0x84, 
	0xA0, 0x21, 0x52, 0xBC, 0x08, 0x79, 0x8A, 0x75, 0xDF, 0x47, 0xF4, 0x1C, 0xE5, 0x62, 0x6B, 0x90, 0xE3, 
	0xA6, 0xB8, 0x21, 0xC1, 0xB9, 0x95, 0xB6, 0x06, 0x10, 0xB2, 0xC0, 0x23, 0xE2, 0x97, 0x6F, 0xA4, 0xE8, 
	0x57, 0x0B, 0x9C, 0x19, 0xBB, 0xDF, 0x24, 0xE0, 0x06, 0xB6, 0xF8, 0x24, 0x21, 0x58, 0x44, 0x51, 0x18, 
	0x82, 0xAF, 0xB3, 0x04, 0xCE, 0xC0, 0x24, 0x88, 0xBD, 0xB2, 0x66, 0x21, 0x5E, 0xD3, 0x93, 0xC8, 0xCE, 
	0x49, 0x17, 0x6A, 0x39, 0xA3, 0x7C, 0x27, 0x58, 0x30, 0x8A, 0xFD, 0x88, 0x52, 0x96, 0x79, 0xA2, 0x38, 
	0x09, 0x20, 0x56, 0x0F, 0x99, 0xE8, 0x34, 0xCC, 0xBA, 0x42, 0xD0, 0x60, 0x25, 0x19, 0x8A, 0x63, 0x7D, 
	0xA4, 0x01, 0x1B, 0xFB, 0x35, 0x0B, 0xF9, 0xF1, 0x1A, 0x27, 0x30, 0x3C, 0xCF, 0xD8, 0xEC, 0x1A, 0xF2, 
	0x05, 0x6C, 0xAA, 0x36, 0x54, 0x30, 0x3D, 0xA2, 0x4C, 0x06, 0x96, 0x21, 0x47, 0xF2, 0x98, 0xCE, 0x9E, 
	0xAA, 0xA1, 0x86, 0x43, 0xBD, 0xEE, 0x03, 0xAC, 0x1D, 0xA1, 0xB9, 0x08, 0x83, 0xA4, 0x1B, 0xC1, 0x1D, 
	0x58, 0xCB, 0xA4, 0xB6, 0xFA, 0xCF, 0x60, 0x41, 0xF6, 0xB2, 0xC9, 0x2E, 0x54, 0xD5, 0x6F, 0x1F, 0xC1, 
	0xAA, 0x84, 0x65, 0xD5, 0x42, 0x31, 0x19, 0xDD, 0x83, 0xB9, 0x48, 0xBD, 0x22, 0xBE, 0x80, 0x71, 0x41, 
	0x76, 0xFB, 0x0C, 0xA6, 0x39, 0x71, 0xEE, 0x87, 0xD3, 0xB4, 0xC9, 0x27, 0x58, 0xB5, 0x84, 0x1B, 0xB6, 
	0xF2, 0x12, 0xEC, 0x3D, 0x03, 0x5B, 0x0E, 0xEF, 0x2F, 0x42, 0x57, 0x79, 0xA8, 0xA7, 0xD3, 0x35, 0x62, 
	0xDB, 0xD7, 0x3E, 0x76, 0x0B, 0xC6, 0x0E, 0x16, 0x4B, 0xBA, 0x61, 0xA3, 0x4D, 0x58, 0xF2, 0x73, 0xAD, 
	0x4D, 0x1D, 0x8E, 0x5F, 0xDA, 0x8E, 0x0E, 0xC3, 0x60, 0xC5, 0x1F, 0x5F, 0xCC, 0xAB, 0xD0, 0x92, 0x18, 
	0x6E, 0x72, 0x6C, 0xFD, 0x26, 0x98, 0x70, 0xCC, 0x4D, 0x4C, 0x07, 0x12, 0x72, 0xA7, 0x31, 0x30, 0xC9, 
	0x63, 0xE5, 0xB4, 0x66, 0xCB, 0x63, 0x5A, 0x99, 0x1D, 0x4C, 0x6A, 0x9B, 0xA4, 0x53, 0xC7, 0x8B, 0x30, 
	0x82, 0x55, 0x77, 0xFC, 0x0A, 0x66, 0x7D, 0xC2, 0x9D, 0x65, 0xFA, 0x16, 0x0C, 0xFD, 0xDC, 0xC4, 0x7A, 
	0x39, 0x6A, 0x1D, 0x98, 0xAE, 0xDF, 0xF5, 0xDD, 0x6E, 0x23, 0x75, 0x7A, 0x2A, 0xEE, 0x7D, 0x14, 0x2E, 
	0xC2, 0xCD, 0x27, 0xCA, 0xDA, 0x5B, 0x20, 0xC3, 0x15, 0x8C, 0xDB, 0xB7, 0xD2, 0x28, 0x73, 0xDF, 0xD7, 
	0x7B, 0xB0, 0xE8, 0xE7, 0x26, 0xA6, 0x61, 0x91, 0xE6, 0x9A, 0x01, 0xFA, 0x56, 0x58, 0x6F, 0x4F, 0x36, 
	0xF9, 0x3E, 0x7E, 0x2A, 0x46, 0x8D, 0x54, 0x1A, 0x9D, 0x7F, 0x12, 0xA2, 0x84, 0x3B, 0x6D, 0x41, 0xBC, 
	0xE0, 0x0B, 0x98, 0xDB, 0x33, 0x17, 0xE6, 0x9A, 0xA5, 0xFD, 0xD5, 0x44, 0xF4, 0xF6, 0x7B, 0x5C, 0x2E, 
	0xA9, 0xDF, 0xD1, 0xE0, 0xF2, 0x3F, 0x52, 0x01, 0xE2, 0xFB, 0x2F, 0x71, 0x80, 0x43, 0x7D, 0x0A, 0xC3, 
	0xB8, 0xB8, 0xF3, 0x1B, 0x27, 0xD9, 0x5B, 0xAE, 0x9A, 0x5E, 0x03, 0xF6, 0x08, 0x0B, 0x12, 0x7E, 0x7C, 
	0xE0, 0x7F, 0x7D, 0xF1, 0x37, 0x1B, 0xF9, 0x04, 0x8B, 0x23, 0xA9, 0x9F, 0x17, 0xB2, 0xF0, 0xEF, 0x19, 
	0xFE, 0x08, 0x30, 0x00, 0x40, 0x99, 0x11, 0x2F, 0xF5, 0x45, 0x01, 0x78, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};


static bool checkModified(Poco::Net::HTTPServerRequest& request)
{
	Poco::DateTime modified(2015, 4, 1, 18, 25, 55);
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


void HeaderLogo::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response)
{
	response.setChunkedTransferEncoding(true);
	response.setContentType("image/png");

	if (!(checkModified(request))) return;

	std::ostream& responseStream = response.send();
	responseStream << "";
	responseStream << "";
	responseStream << "";
	responseStream << "";
#line 86 "/ws/my-devices.net/gateway/src/HeaderLogo.cpsp"

	responseStream.write(reinterpret_cast<const char*>(data), sizeof(data));
	responseStream << "";
}
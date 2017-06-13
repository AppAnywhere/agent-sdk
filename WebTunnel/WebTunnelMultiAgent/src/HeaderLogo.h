//
// HeaderLogo.h
//
// This file has been generated from HeaderLogo.cpsp.
//


#ifndef HeaderLogo_INCLUDED
#define HeaderLogo_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class HeaderLogo: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // HeaderLogo_INCLUDED

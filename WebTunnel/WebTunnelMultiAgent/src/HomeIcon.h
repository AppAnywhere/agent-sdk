//
// HomeIcon.h
//
// This file has been generated from HomeIcon.cpsp.
//


#ifndef HomeIcon_INCLUDED
#define HomeIcon_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class HomeIcon: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // HomeIcon_INCLUDED

//
// FavIcon.h
//
// This file has been generated from FavIcon.cpsp.
//


#ifndef FavIcon_INCLUDED
#define FavIcon_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class FavIcon: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // FavIcon_INCLUDED

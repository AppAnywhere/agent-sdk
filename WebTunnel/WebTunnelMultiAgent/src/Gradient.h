//
// Gradient.h
//
// This file has been generated from Gradient.cpsp.
//


#ifndef Gradient_INCLUDED
#define Gradient_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class Gradient: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // Gradient_INCLUDED

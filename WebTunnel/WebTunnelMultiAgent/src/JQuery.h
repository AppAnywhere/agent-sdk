//
// JQuery.h
//
// This file has been generated from JQuery.cpsp.
//


#ifndef JQuery_INCLUDED
#define JQuery_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class JQuery: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // JQuery_INCLUDED

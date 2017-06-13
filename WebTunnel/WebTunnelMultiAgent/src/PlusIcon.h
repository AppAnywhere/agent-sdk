//
// PlusIcon.h
//
// This file has been generated from PlusIcon.cpsp.
//


#ifndef PlusIcon_INCLUDED
#define PlusIcon_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


class PlusIcon: public Poco::Net::HTTPRequestHandler
{
public:
	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};


#endif // PlusIcon_INCLUDED

//
// IndexPage.h
//
// This file has been generated from IndexPage.cpsp.
//


#ifndef IndexPage_INCLUDED
#define IndexPage_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


#include "DeviceManager.h"


namespace MyDevices {


class IndexPage: public Poco::Net::HTTPRequestHandler
{
public:
	IndexPage(DeviceManager::Ptr);

	void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);

protected:
	DeviceManager::Ptr context() const
	{
		return _context;
	}

private:
	DeviceManager::Ptr _context;
};


} // namespace MyDevices


#endif // IndexPage_INCLUDED

//
// DevicePage.h
//
// This file has been generated from DevicePage.cpsp.
//


#ifndef DevicePage_INCLUDED
#define DevicePage_INCLUDED


#include "Poco/Net/HTTPRequestHandler.h"


#include "DeviceManager.h"


namespace MyDevices {


class DevicePage: public Poco::Net::HTTPRequestHandler
{
public:
	DevicePage(DeviceManager::Ptr);

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


#endif // DevicePage_INCLUDED
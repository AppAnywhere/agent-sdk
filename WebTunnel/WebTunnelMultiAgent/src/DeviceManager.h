//
// DeviceManager.h
//
// $Id: //my-devices.net/Main/gateway/src/DeviceManager.h#1 $
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef MyDevices_DeviceManager_INCLUDED
#define MyDevices_DeviceManager_INCLUDED


#include "Poco/WebTunnel/SocketDispatcher.h"
#include "Poco/Util/AbstractConfiguration.h"
#include "Poco/Util/Timer.h"
#include "Poco/RefCountedObject.h"
#include "Poco/AutoPtr.h"
#include "Poco/SharedPtr.h"
#include "Poco/UUIDGenerator.h"
#include "Poco/Mutex.h"
#include "Poco/Logger.h"
#include "WebTunnelAgent.h"


namespace MyDevices {


class DeviceManager: public Poco::RefCountedObject
{
public:
	typedef Poco::AutoPtr<DeviceManager> Ptr;

	DeviceManager(Poco::Util::AbstractConfiguration& config, Poco::SharedPtr<Poco::Util::Timer> pTimer);
		/// Creates the DeviceManager, using the given configuration and Timer.
	
	~DeviceManager();
		/// Destroys the DeviceManager.

	void restartAgents();
		/// Stops and restarts all agents, using the latest configuration values.

	void stopAgents();
		/// Stops all agents.
		
	Poco::AutoPtr<Poco::Util::AbstractConfiguration> createDevice();
		/// Creates a new device and returns the device's configuration.
		
	void updateDevice(Poco::AutoPtr<Poco::Util::AbstractConfiguration> pConfig);
		/// Updates a device configuration.
		
	void removeDevice(const std::string& deviceId);
		/// Removes a device configuration.
	
	std::vector<std::string> enumerateDevices() const;
		/// Returns a vector containing all device IDs.

	Poco::AutoPtr<Poco::Util::AbstractConfiguration> deviceConfiguration(const std::string& deviceId) const;
		/// Returns the configuration for the device with the given deviceId.
	
	std::string deviceConfigurationPath(const std::string& deviceId) const;
		/// Returns the path for the device's configuration file.
	
	std::string deviceRepositoryPath() const;
		/// Returns the directory where device configurations are stored.
		
	Poco::AutoPtr<Poco::Util::AbstractConfiguration> config() const;
		/// Returns the global configuration.
	
private:
	Poco::AutoPtr<Poco::Util::AbstractConfiguration> _pConfig;
	Poco::SharedPtr<Poco::Util::Timer> _pTimer;
	Poco::SharedPtr<Poco::WebTunnel::SocketDispatcher> _pDispatcher;
	std::vector<WebTunnelAgent::Ptr> _agents;
	Poco::UUIDGenerator _uuidGenerator;
	mutable Poco::FastMutex _mutex;
	Poco::Logger& _logger;
};


} // namespace MyDevices


#endif // MyDevices_DeviceManager_INCLUDED

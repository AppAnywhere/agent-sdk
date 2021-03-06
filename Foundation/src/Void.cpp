//
// Void.cpp
//
// $Id: //poco/1.7/Foundation/src/Void.cpp#1 $
//
// Library: Foundation
// Package: Core
// Module:  Void
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "Poco/Void.h"


namespace Poco {


Void::Void()
{
}


Void::Void(const Void&)
{
}


Void::~Void()
{
}


Void& Void::operator = (const Void&)
{
	return *this;
}


} // namespace Poco

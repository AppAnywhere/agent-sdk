#
# Makefile
#
# $Id: //poco/1.7/WebTunnel/samples/WebTunnelVNC/Makefile#3 $
#
# Makefile for WebTunnelVNC
#

include $(POCO_BASE)/build/rules/global

ifndef WEBTUNNEL_DISABLE_TLS
CXXFLAGS += -DWEBTUNNEL_ENABLE_TLS
tlslibs = PocoNetSSL PocoCrypto
SYSLIBS += -lssl -lcrypto -lz -ldl
endif

objects = WebTunnelVNC

target         = WebTunnelVNC
target_version = 1
target_libs    = $(tlslibs) PocoWebTunnel PocoUtil PocoNet PocoXML PocoJSON PocoFoundation

include $(POCO_BASE)/build/rules/exec

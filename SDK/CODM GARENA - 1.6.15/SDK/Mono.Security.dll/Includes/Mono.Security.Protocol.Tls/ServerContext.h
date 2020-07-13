#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ServerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ServerContext"));
	}

	template <typename T = uintptr_t> T& sslStream() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& request_client_certificate() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& clientCertificateRequired() {
		return *(T*)((uintptr_t)this + 0x85);
	}

	template <typename T = uintptr_t> T get_SslStream() {
		return ((T (*)(ServerContext*))(Il2CppBase() + 0x47E2DB4))(this);
	}
	template <typename T = bool> T get_ClientCertificateRequired() {
		return ((T (*)(ServerContext*))(Il2CppBase() + 0x47E2A3C))(this);
	}
	template <typename T = bool> T get_RequestClientCertificate() {
		return ((T (*)(ServerContext*))(Il2CppBase() + 0x47E9E80))(this);
	}

};

}

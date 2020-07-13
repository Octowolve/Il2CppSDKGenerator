#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class ClientContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "ClientContext"));
	}

	template <typename T = uintptr_t> T& sslStream() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int16_t> T& clientHelloProtocol() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = uintptr_t> T get_SslStream() {
		return ((T (*)(ClientContext*))(Il2CppBase() + 0x47DA5E4))(this);
	}
	template <typename T = int16_t> T get_ClientHelloProtocol() {
		return ((T (*)(ClientContext*))(Il2CppBase() + 0x47D7E78))(this);
	}
	template <typename T = void> T set_ClientHelloProtocol(int16_t value) {
		return ((T (*)(ClientContext*, int16_t))(Il2CppBase() + 0x47DA5EC))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ClientContext*))(Il2CppBase() + 0x47DA5F4))(this);
	}

};

}

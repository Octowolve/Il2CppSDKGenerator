#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsClientKeyExchange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientKeyExchange"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientKeyExchange*))(Il2CppBase() + 0x47E3B4C))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientKeyExchange*))(Il2CppBase() + 0x47E3DE8))(this);
	}

};

}

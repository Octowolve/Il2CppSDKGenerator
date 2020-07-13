#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsClientKeyExchange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientKeyExchange"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientKeyExchange*))(Il2CppBase() + 0x47DEED4))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientKeyExchange*))(Il2CppBase() + 0x47DF160))(this);
	}
	template <typename T = void> T ProcessCommon(bool sendLength) {
		return ((T (*)(TlsClientKeyExchange*, bool))(Il2CppBase() + 0x47DEEDC))(this, sendLength);
	}

};

}

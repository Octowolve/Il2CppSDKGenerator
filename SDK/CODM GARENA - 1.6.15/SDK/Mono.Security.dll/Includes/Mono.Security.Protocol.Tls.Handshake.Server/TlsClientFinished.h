#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsClientFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientFinished"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientFinished*))(Il2CppBase() + 0x47E3194))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientFinished*))(Il2CppBase() + 0x47E33A4))(this);
	}

};

}

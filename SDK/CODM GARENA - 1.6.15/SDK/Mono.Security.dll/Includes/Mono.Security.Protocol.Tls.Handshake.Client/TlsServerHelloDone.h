#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsServerHelloDone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerHelloDone"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerHelloDone*))(Il2CppBase() + 0x47E16D4))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerHelloDone*))(Il2CppBase() + 0x47E16D8))(this);
	}

};

}

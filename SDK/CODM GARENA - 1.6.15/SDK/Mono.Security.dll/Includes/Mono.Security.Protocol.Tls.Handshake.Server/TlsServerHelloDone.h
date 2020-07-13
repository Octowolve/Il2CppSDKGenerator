#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerHelloDone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHelloDone"));
	}


	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerHelloDone*))(Il2CppBase() + 0x47E4EE0))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerHelloDone*))(Il2CppBase() + 0x47E4EE4))(this);
	}

};

}

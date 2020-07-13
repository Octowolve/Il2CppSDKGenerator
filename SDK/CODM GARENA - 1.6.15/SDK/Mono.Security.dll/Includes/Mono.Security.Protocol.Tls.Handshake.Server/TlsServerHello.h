#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerHello
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHello"));
	}

	template <typename T = int32_t> T& unixTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& random() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E4BB4))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E4D64))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerHello*))(Il2CppBase() + 0x47E4D74))(this);
	}

};

}

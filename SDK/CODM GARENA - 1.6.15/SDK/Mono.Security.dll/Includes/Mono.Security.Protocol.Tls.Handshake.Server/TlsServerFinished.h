#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Server {

class TlsServerFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerFinished"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Ssl3Marker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsServerFinished*))(Il2CppBase() + 0x47E4838))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsServerFinished*))(Il2CppBase() + 0x47E4A3C))(this);
	}

};

}

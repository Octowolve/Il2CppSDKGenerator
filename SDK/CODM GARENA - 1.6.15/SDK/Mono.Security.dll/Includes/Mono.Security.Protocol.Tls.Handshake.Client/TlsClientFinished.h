#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls.Handshake.Client {

class TlsClientFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientFinished"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Ssl3Marker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Update() {
		return ((T (*)(TlsClientFinished*))(Il2CppBase() + 0x47DE7E0))(this);
	}
	template <typename T = void> T ProcessAsSsl3() {
		return ((T (*)(TlsClientFinished*))(Il2CppBase() + 0x47DE800))(this);
	}
	template <typename T = void> T ProcessAsTls1() {
		return ((T (*)(TlsClientFinished*))(Il2CppBase() + 0x47DEA04))(this);
	}

};

}

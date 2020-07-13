#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class TlsException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "TlsException"));
	}

	template <typename T = uintptr_t> T& alert() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_Alert() {
		return ((T (*)(TlsException*))(Il2CppBase() + 0x4BF24B0))(this);
	}

};

}

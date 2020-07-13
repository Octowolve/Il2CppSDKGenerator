#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509.Extensions {

class SubjectAltNameExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509.Extensions", "SubjectAltNameExtension"));
	}

	template <typename T = uintptr_t> T& _names() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Decode() {
		return ((T (*)(SubjectAltNameExtension*))(Il2CppBase() + 0x4BFFE60))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DNSNames() {
		return ((T (*)(SubjectAltNameExtension*))(Il2CppBase() + 0x4BFFFB0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_IPAddresses() {
		return ((T (*)(SubjectAltNameExtension*))(Il2CppBase() + 0x4BFFFD8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SubjectAltNameExtension*))(Il2CppBase() + 0x4C00000))(this);
	}

};

}

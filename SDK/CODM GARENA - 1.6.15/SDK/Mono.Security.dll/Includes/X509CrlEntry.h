#pragma once
#include <Il2Cpp/Il2Cpp.h>

class X509CrlEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "X509CrlEntry"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& revocationDate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensions() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_SerialNumber() {
		return ((T (*)(X509CrlEntry*))(Il2CppBase() + 0x4C126CC))(this);
	}
	template <typename T = uintptr_t> T get_RevocationDate() {
		return ((T (*)(X509CrlEntry*))(Il2CppBase() + 0x4C12DFC))(this);
	}
	template <typename T = uintptr_t> T get_Extensions() {
		return ((T (*)(X509CrlEntry*))(Il2CppBase() + 0x4C12E0C))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class RC4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "RC4"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& s_legalBlockSizes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& s_legalKeySizes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_IV() {
		return ((T (*)(RC4*))(Il2CppBase() + 0x47D354C))(this);
	}
	template <typename T = void> T set_IV(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RC4*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D35D8))(this, value);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x47CB9BC))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47D35DC))(0, algName);
	}

};

}

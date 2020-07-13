#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class KeyBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "Mono.Security.Cryptography", "KeyBuilder"));
	}

	template <typename T = uintptr_t> static T& rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Rng_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4EC03C8))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Key_2(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4EC0484))(0, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T IV_1(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4EC0548))(0, size);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class KeyBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security.Cryptography", "KeyBuilder"));
	}

	template <typename T = uintptr_t> static T& rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Rng_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FA7124))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Key_1(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FA71E0))(0, size);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T IV(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FA72A4))(0, size);
	}

};

}

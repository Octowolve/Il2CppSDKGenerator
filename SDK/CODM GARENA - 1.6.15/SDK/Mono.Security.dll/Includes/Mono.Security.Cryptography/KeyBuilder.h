#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class KeyBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "KeyBuilder"));
	}

	template <typename T = uintptr_t> static T& rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Rng() {
		return ((T (*)(void *))(Il2CppBase() + 0x47CE79C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Key(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47CC858))(0, size);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Cryptography {

class MD4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Cryptography", "MD4"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x47CF2D8))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* hashName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47CF354))(0, hashName);
	}

};

}

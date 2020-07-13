#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA512
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA512"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x427848C))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* hashName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4278508))(0, hashName);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA256
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA256"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x42761AC))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* hashName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4276228))(0, hashName);
	}

};

}

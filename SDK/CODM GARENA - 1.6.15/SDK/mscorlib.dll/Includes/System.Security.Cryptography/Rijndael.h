#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class Rijndael
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "Rijndael"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x30491C4))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3049240))(0, algName);
	}

};

}

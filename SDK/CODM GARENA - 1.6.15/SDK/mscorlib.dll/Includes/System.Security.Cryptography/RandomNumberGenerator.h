#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RandomNumberGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RandomNumberGenerator"));
	}


	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x3046594))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* rngName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3046610))(0, rngName);
	}
	template <typename T = void> T GetBytes(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RandomNumberGenerator*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T GetNonZeroBytes(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(RandomNumberGenerator*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, data);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RC2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RC2"));
	}

	template <typename T = int32_t> T& EffectiveKeySizeValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x30468BC))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* AlgName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3046938))(0, AlgName);
	}
	template <typename T = int32_t> T get_EffectiveKeySize() {
		return ((T (*)(RC2*))(Il2CppBase() + 0x30469F8))(this);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(RC2*))(Il2CppBase() + 0x3046A0C))(this);
	}
	template <typename T = void> T set_KeySize(int32_t value) {
		return ((T (*)(RC2*, int32_t))(Il2CppBase() + 0x3046A14))(this, value);
	}

};

}

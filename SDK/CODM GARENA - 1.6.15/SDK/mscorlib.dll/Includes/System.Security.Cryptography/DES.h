#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DES"));
	}

	template <typename T = uintptr_t> static T& weakKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& semiWeakKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x303A7AC))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* algName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x303A860))(0, algName);
	}
	template <typename T = bool> static T IsWeakKey(Il2CppArray<uintptr_t>* rgbKey) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303A920))(0, rgbKey);
	}
	template <typename T = bool> static T IsSemiWeakKey(Il2CppArray<uintptr_t>* rgbKey) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303AC10))(0, rgbKey);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(DES*))(Il2CppBase() + 0x303AF00))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DES*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x303AFC0))(this, value);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class TripleDES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "TripleDES"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(TripleDES*))(Il2CppBase() + 0x427B4D0))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TripleDES*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427B7D8))(this, value);
	}
	template <typename T = bool> static T IsWeakKey(Il2CppArray<uintptr_t>* rgbKey) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x427B5C4))(0, rgbKey);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x427B934))(0);
	}
	template <typename T = uintptr_t> static T Create_1(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x427B9B0))(0, str);
	}

};

}

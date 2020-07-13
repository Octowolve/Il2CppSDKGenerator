#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierFunc"));
	}


	template <typename T = Il2CppString*> T Invoke(Il2CppString* s) {
		return ((T (*)(ModifierFunc*, Il2CppString*))(Il2CppBase() + 0x2F58E34))(this, s);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* s, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ModifierFunc*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F60D44))(this, s, callback, object);
	}
	template <typename T = Il2CppString*> T EndInvoke(uintptr_t result) {
		return ((T (*)(ModifierFunc*, uintptr_t))(Il2CppBase() + 0x2F60D70))(this, result);
	}

};

}

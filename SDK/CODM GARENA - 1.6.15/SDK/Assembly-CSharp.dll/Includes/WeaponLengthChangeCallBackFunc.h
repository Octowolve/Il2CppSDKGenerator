#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponLengthChangeCallBackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponLengthChangeCallBackFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(WeaponLengthChangeCallBackFunc*))(Il2CppBase() + 0x1C06638))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(WeaponLengthChangeCallBackFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C49404))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WeaponLengthChangeCallBackFunc*, uintptr_t))(Il2CppBase() + 0x1C49430))(this, result);
	}

};

}

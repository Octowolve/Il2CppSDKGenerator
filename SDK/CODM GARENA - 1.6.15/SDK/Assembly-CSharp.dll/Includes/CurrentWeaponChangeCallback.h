#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrentWeaponChangeCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentWeaponChangeCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t invMgr) {
		return ((T (*)(CurrentWeaponChangeCallback*, uintptr_t))(Il2CppBase() + 0x246BE40))(this, invMgr);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t invMgr, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CurrentWeaponChangeCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2473604))(this, invMgr, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CurrentWeaponChangeCallback*, uintptr_t))(Il2CppBase() + 0x2473630))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnNavigationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnNavigationData"));
	}

	template <typename T = uintptr_t> T& wait4Open() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isManualReset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_wait4Open() {
		return ((T (*)(SoldierReturnNavigationData*))(Il2CppBase() + 0x3CA91A0))(this);
	}
	template <typename T = void> T set_wait4Open(uintptr_t value) {
		return ((T (*)(SoldierReturnNavigationData*, uintptr_t))(Il2CppBase() + 0x3CA9628))(this, value);
	}
	template <typename T = bool> T get_isManualReset() {
		return ((T (*)(SoldierReturnNavigationData*))(Il2CppBase() + 0x3CA96E4))(this);
	}
	template <typename T = void> T set_isManualReset(bool value) {
		return ((T (*)(SoldierReturnNavigationData*, bool))(Il2CppBase() + 0x3CA96EC))(this, value);
	}

};

}

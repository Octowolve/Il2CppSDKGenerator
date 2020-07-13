#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLoadoutEquipmentControllerGocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_LoadoutEquipmentController_Go>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLoadoutEquipmentControllerGocAnonStorey1*))(Il2CppBase() + 0x1A2BD18))(this);
	}
	template <typename T = void> T m__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(TLoadoutEquipmentControllerGocAnonStorey1*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A2BECC))(this, tutorialType, info);
	}

};

}

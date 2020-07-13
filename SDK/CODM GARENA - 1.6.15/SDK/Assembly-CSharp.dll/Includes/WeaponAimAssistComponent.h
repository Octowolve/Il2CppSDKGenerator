#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponAimAssistComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponAimAssistComponent"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mGameInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCurWeapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mPlayerCol() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAssitance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAimAssitance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x48929E8))(0);
	}
	template <typename T = uintptr_t> T get_mInput() {
		return ((T (*)(WeaponAimAssistComponent*))(Il2CppBase() + 0x4892A9C))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(WeaponAimAssistComponent*))(Il2CppBase() + 0x4892B1C))(this);
	}
	template <typename T = bool> T CheckAssitance() {
		return ((T (*)(WeaponAimAssistComponent*))(Il2CppBase() + 0x4892E14))(this);
	}
	template <typename T = bool> T IsCanAimAssitance() {
		return ((T (*)(WeaponAimAssistComponent*))(Il2CppBase() + 0x4892F3C))(this);
	}

};

}

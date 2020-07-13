#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPModeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPModeConfig"));
	}

	template <typename T = uintptr_t> T& ModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DefaultWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DefaultSecWeaponItemID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& PreLoadWeaponItemIDList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& WeaponCarriedAmmoScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& WeaponCurrentAmmoScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AssetIDFor1P() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSPMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTotalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCarriedAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCurrentAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SPModeConfig*))(Il2CppBase() + 0x3F19DB0))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F19F74))(0);
	}
	template <typename T = uintptr_t> static T GetSPMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F101A0))(0);
	}
	template <typename T = float> static T GetTotalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F13834))(0);
	}
	template <typename T = float> static T GetWeaponCarriedAmmoScale() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F1A140))(0);
	}
	template <typename T = float> static T GetWeaponCurrentAmmoScale() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F1A258))(0);
	}
	template <typename T = uintptr_t> static T GetLevelConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F1A370))(0);
	}

};

}

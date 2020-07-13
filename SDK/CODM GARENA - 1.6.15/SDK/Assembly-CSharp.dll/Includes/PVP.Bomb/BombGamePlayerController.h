#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGamePlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGamePlayerController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFreezePlayerEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoudGoToSpectatingAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnCurrentWeaponC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifySpectatingPlayerUIInteruptPlantBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnFreezePlayerEnd() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40804DC))(this);
	}
	template <typename T = void> T StartFire() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x4080608))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x4080870))(this);
	}
	template <typename T = bool> T ShoudGoToSpectatingAfterDead() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x4080928))(this);
	}
	template <typename T = bool> T IsPawnCurrentWeaponC4Bomb() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40806C0))(this);
	}
	template <typename T = void> T NotifySpectatingPlayerUIInteruptPlantBomb(unsigned char inItemType) {
		return ((T (*)(BombGamePlayerController*, unsigned char))(Il2CppBase() + 0x407D56C))(this, inItemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnFreezePlayerEnd() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40809C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40809D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40809D8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShoudGoToSpectatingAfterDead() {
		return ((T (*)(BombGamePlayerController*))(Il2CppBase() + 0x40809E0))(this);
	}

};

}

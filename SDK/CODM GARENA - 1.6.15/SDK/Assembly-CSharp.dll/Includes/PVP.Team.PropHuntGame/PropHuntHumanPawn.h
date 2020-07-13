#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntHumanPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntHumanPawn"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFPSFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTo1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveWeaponAnimationCompent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T EndSwitchRole() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A8AB8))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PropHuntHumanPawn*, uintptr_t))(Il2CppBase() + 0x34A9290))(this, info);
	}
	template <typename T = void> T SwitchToFPSFireMode() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A8D2C))(this);
	}
	template <typename T = void> T SwitchTo1PView() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A9378))(this);
	}
	template <typename T = void> T OnWeaponActivate() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A96E4))(this);
	}
	template <typename T = void> T ActiveWeaponAnimationCompent() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A6308))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSwitchRole() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A9794))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PropHuntHumanPawn*, uintptr_t))(Il2CppBase() + 0x34A979C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponActivate() {
		return ((T (*)(PropHuntHumanPawn*))(Il2CppBase() + 0x34A97A4))(this);
	}

};

}

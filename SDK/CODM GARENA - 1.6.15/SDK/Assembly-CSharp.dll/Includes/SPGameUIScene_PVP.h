#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameUIScenePVP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameUIScene_PVP"));
	}

	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CombatVolumeArray() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& m_HellstronNumShowHud() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPawnAvatarChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCombatVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoopSPModeTargetHudSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsShowDomSignboardHUD() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391DFB0))(this);
	}
	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391DFB8))(this);
	}
	template <typename T = bool> T get_IsShowRoundNumHud() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391DFC0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391B808))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePVP*, uintptr_t))(Il2CppBase() + 0x391BC0C))(this, msg);
	}
	template <typename T = void> T OnNotifyPawnAvatarChanged(uintptr_t msg) {
		return ((T (*)(SPGameUIScenePVP*, uintptr_t))(Il2CppBase() + 0x391D0A4))(this, msg);
	}
	template <typename T = void> T CheckCombatVolume() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391DFC8))(this);
	}
	template <typename T = bool> T GetLoopSPModeTargetHudSet() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391E2C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391E428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUIScenePVP*, uintptr_t))(Il2CppBase() + 0x391E42C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_GetLoopSPModeTargetHudSet() {
		return ((T (*)(SPGameUIScenePVP*))(Il2CppBase() + 0x391E430))(this);
	}

};

}

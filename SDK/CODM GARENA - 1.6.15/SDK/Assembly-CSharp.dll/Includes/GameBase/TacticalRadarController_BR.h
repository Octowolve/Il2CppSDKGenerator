#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarControllerBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarController_BR"));
	}

	template <typename T = uintptr_t> T& m_RadarView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyRadarUITip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalChipMachineListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCounterUAVEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRunEscapeHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x2798ACC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x2798B70))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x2798FA0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x27990C4))(this);
	}
	template <typename T = void> T NotifyRadarUITip(uintptr_t msg) {
		return ((T (*)(TacticalRadarControllerBR*, uintptr_t))(Il2CppBase() + 0x279917C))(this, msg);
	}
	template <typename T = void> T OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x27994C0))(this);
	}
	template <typename T = void> T OnTacticalChipMachineListChanged() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x2799688))(this);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x2799998))(this);
	}
	template <typename T = void> T SetCounterUAVEffectActive(bool isActive, bool isTransparent) {
		return ((T (*)(TacticalRadarControllerBR*, bool, bool))(Il2CppBase() + 0x2799CF0))(this, isActive, isTransparent);
	}
	template <typename T = uintptr_t> T GetRunEscapeHUD() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A628))(this);
	}
	template <typename T = uintptr_t> T GetRadarNewGuideInterface() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A784))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A8CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A8D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A8D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A8D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDStateChanged() {
		return ((T (*)(TacticalRadarControllerBR*))(Il2CppBase() + 0x279A8DC))(this);
	}

};

}

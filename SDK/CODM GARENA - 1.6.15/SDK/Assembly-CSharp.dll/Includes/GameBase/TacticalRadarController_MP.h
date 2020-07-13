#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarControllerMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarController_MP"));
	}

	template <typename T = float> T& mLastMissleTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> static T& kMissleFireSpan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_RadarView() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnemyBodyScan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetectEnemyNearby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUAVFirstUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRadarSizeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveStreakIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfUAVStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUAVStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMissleLaunched() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUavScanArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279AA2C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279A828))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x2798C78))(this);
	}
	template <typename T = void> T OnEnemyBodyScan(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279AA34))(this, inMsg);
	}
	template <typename T = void> T OnDetectEnemyNearby(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279AEF0))(this, inMsg);
	}
	template <typename T = void> T OnUAVFirstUsed(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279B424))(this, inMsg);
	}
	template <typename T = void> T OnRadarSizeChanged(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279B898))(this, inMsg);
	}
	template <typename T = void> T RemoveStreakIndicator(uint32_t actorID) {
		return ((T (*)(TacticalRadarControllerMP*, uint32_t))(Il2CppBase() + 0x279BAFC))(this, actorID);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279BD4C))(this);
	}
	template <typename T = void> T OnSelfUAVStateChanged(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279C730))(this, inMsg);
	}
	template <typename T = void> T OnUAVStateChanged(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279C8C0))(this, inMsg);
	}
	template <typename T = void> T OnMissleLaunched(uintptr_t inMsg) {
		return ((T (*)(TacticalRadarControllerMP*, uintptr_t))(Il2CppBase() + 0x279CEB0))(this, inMsg);
	}
	template <typename T = void> T RefreshComponent() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279D0D0))(this);
	}
	template <typename T = void> T SetUavScanArgs(float period, float interval) {
		return ((T (*)(TacticalRadarControllerMP*, float, float))(Il2CppBase() + 0x279D188))(this, period, interval);
	}
	template <typename T = void> T OnUAVFirstUsedm__0() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279D364))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279D43C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalRadarControllerMP*))(Il2CppBase() + 0x279D440))(this);
	}

};

}

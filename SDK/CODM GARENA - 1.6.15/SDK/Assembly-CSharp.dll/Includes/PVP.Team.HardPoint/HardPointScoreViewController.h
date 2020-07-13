#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_OccupyTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_RealEndTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_OccupyOverTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_LastOccupyOverTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_hpState() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_MatchTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_RealMatchTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_MatchOverTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_LastMatchOverTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& m_MatchWarningTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& m_OccupyWarningTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_WarningInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastWarningTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_WarningIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_LastWarningTime1() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_WarningIndex1() {
		return *(T*)((uintptr_t)this + 0xB0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHardPointCampChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStopMatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(HardPointScoreViewController*))(Il2CppBase() + 0x402C9EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HardPointScoreViewController*))(Il2CppBase() + 0x402CAAC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(HardPointScoreViewController*, float))(Il2CppBase() + 0x402CC48))(this, deltaTime);
	}
	template <typename T = void> T OnHardPointCampChanged(int32_t hpID, uintptr_t hpState, int32_t occupyTime, int32_t matchTime) {
		return ((T (*)(HardPointScoreViewController*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x402D26C))(this, hpID, hpState, occupyTime, matchTime);
	}
	template <typename T = bool> T IsStopMatchTime() {
		return ((T (*)(HardPointScoreViewController*))(Il2CppBase() + 0x402D1B4))(this);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(HardPointScoreViewController*, uintptr_t))(Il2CppBase() + 0x402D40C))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(HardPointScoreViewController*))(Il2CppBase() + 0x402D548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(HardPointScoreViewController*))(Il2CppBase() + 0x402D550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(HardPointScoreViewController*, float))(Il2CppBase() + 0x402D558))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(HardPointScoreViewController*, uintptr_t))(Il2CppBase() + 0x402D560))(this, P0);
	}

};

}

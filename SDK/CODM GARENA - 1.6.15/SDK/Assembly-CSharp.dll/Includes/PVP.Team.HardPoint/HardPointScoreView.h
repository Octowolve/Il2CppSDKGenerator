#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointScoreView"));
	}

	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_OccupyTimeLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_VolItem() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHPTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOccupyTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVolItemActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOccupiedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402B690))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402B798))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(HardPointScoreView*, uintptr_t))(Il2CppBase() + 0x402B85C))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402B968))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(HardPointScoreView*, uintptr_t, bool))(Il2CppBase() + 0x402BA2C))(this, data, force);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(HardPointScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x402BC14))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402BB58))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(HardPointScoreView*, int32_t, int32_t))(Il2CppBase() + 0x402BCE0))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateMatchTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(HardPointScoreView*, int32_t, int32_t))(Il2CppBase() + 0x402BD94))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateHPTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(HardPointScoreView*, int32_t, int32_t))(Il2CppBase() + 0x402BE88))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(HardPointScoreView*, uintptr_t, float))(Il2CppBase() + 0x402BF64))(this, color, interval);
	}
	template <typename T = void> T SetMatchTimeColor(uintptr_t color, float interval) {
		return ((T (*)(HardPointScoreView*, uintptr_t, float))(Il2CppBase() + 0x402C030))(this, color, interval);
	}
	template <typename T = void> T SetOccupyTimeColor(uintptr_t color, float interval) {
		return ((T (*)(HardPointScoreView*, uintptr_t, float))(Il2CppBase() + 0x402C140))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402C238))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402C2D8))(this);
	}
	template <typename T = void> T SetVolItemActive(bool isActive) {
		return ((T (*)(HardPointScoreView*, bool))(Il2CppBase() + 0x402C370))(this, isActive);
	}
	template <typename T = void> T PlayOccupiedEffect() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402C534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402C8F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(HardPointScoreView*))(Il2CppBase() + 0x402C900))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(HardPointScoreView*, uintptr_t))(Il2CppBase() + 0x402C908))(this, P0);
	}

};

}

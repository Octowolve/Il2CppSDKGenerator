#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DominationGame {

class DomGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DominationGame", "DomGameScoreView"));
	}

	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& VolItemlist() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CurRoundLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RoundTimeLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RoundText() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& LastShowRound() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentRoundText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOccupiedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33138))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(DomGameScoreView*, uintptr_t))(Il2CppBase() + 0x2B331FC))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33314))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(DomGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2B333D8))(this, data, force);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(DomGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B33920))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33504))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(DomGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x2B339EC))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(DomGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x2B33AC8))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33BC0))(this);
	}
	template <typename T = void> T UpdateCurrentRoundText() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B335C0))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33C60))(this);
	}
	template <typename T = void> T PlayOccupiedEffect(int32_t domAreaID) {
		return ((T (*)(DomGameScoreView*, int32_t))(Il2CppBase() + 0x2B33CF8))(this, domAreaID);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(DomGameScoreView*))(Il2CppBase() + 0x2B33D98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(DomGameScoreView*, uintptr_t))(Il2CppBase() + 0x2B33DA0))(this, P0);
	}

};

}

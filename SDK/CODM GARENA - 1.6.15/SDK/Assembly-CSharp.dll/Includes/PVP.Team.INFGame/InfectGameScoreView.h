#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameScoreView"));
	}

	template <typename T = uintptr_t> T& humanCampRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& infectCampRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& humanCampScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& infectCampScoreLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& selfCampSprite() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& enemyCampSprite() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& timeCountDownLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& statusLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& WiningColor() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LosingColor() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& LastHumanColor() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& StateBG() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& TimeEffect() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& LeftUpCampEffect() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& RightUpCampEffect() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LeftDownCampEffect() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& RightDownCampEffect() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LastHumanSurvivorTips() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ActiveGoliathTips() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> static T& m_TipsBlue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsWhite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_TipsYellow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastSurvivorCampCount() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& m_LastInfectedCampCount() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& m_IsLastHumanState() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& m_LastHumanIsGoliath() {
		return *(T*)((uintptr_t)this + 0x145);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowActiveGoliathTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLastHumanSurvivorTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403A7A0))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(InfectGameScoreView*, uintptr_t))(Il2CppBase() + 0x403A848))(this, resetType);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(InfectGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x403A8FC))(this, data, force);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(InfectGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x403B45C))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403B848))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(InfectGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x403BDE4))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(InfectGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x403C12C))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403C1F8))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403C298))(this);
	}
	template <typename T = void> T ShowActiveGoliathTips() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403B3C4))(this);
	}
	template <typename T = void> T HideLastHumanSurvivorTips() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403C330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(InfectGameScoreView*))(Il2CppBase() + 0x403C41C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(InfectGameScoreView*, uintptr_t))(Il2CppBase() + 0x403C424))(this, P0);
	}

};

}

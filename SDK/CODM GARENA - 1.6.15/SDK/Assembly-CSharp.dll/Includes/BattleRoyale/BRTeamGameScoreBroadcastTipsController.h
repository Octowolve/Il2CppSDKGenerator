#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScoreBroadcastTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScoreBroadcastTipsController"));
	}

	template <typename T = uintptr_t> T& m_TipsView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& bIsLastMinutesOn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_RealLeftTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_LeftTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_LastLeftTime() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBroadcastScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateBroadcastScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBroadcastScoreWithoutAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLeftTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleLastMinutesOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleLeftTimeLastMinutesOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2623C0C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2623CB0))(this);
	}
	template <typename T = void> T UpdateBroadcastScore() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2623EDC))(this);
	}
	template <typename T = void> T UpdateBroadcastScore_1(bool bSelfScoreChanged, bool bFadeOutAfterAnimPlayed) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*, bool, bool))(Il2CppBase() + 0x26241DC))(this, bSelfScoreChanged, bFadeOutAfterAnimPlayed);
	}
	template <typename T = void> T UpdateBroadcastScoreWithoutAnim() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x26249B0))(this);
	}
	template <typename T = void> T OnServerSyncLeftTime(int32_t inLeftTime) {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*, int32_t))(Il2CppBase() + 0x2624C60))(this, inLeftTime);
	}
	template <typename T = void> T TickLeftTime() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2624D14))(this);
	}
	template <typename T = void> T ToggleLastMinutesOn() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2625114))(this);
	}
	template <typename T = void> T ToggleLeftTimeLastMinutesOff() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2623DC4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x2625904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameScoreBroadcastTipsController*))(Il2CppBase() + 0x262590C))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class PersonalInfoPadUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "PersonalInfoPadUIView"));
	}

	template <typename T = uintptr_t> T& m_PlayerNickNameLable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_PlayerLevelTitleNameLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PlayerNextLevelTitleNameLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_PlayerExpLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_PlayerCurrentLevelSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_PlayerNextLevelSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_PlayerExpProgress() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_JingdianPkBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_JingdianWinCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_JingdianKillCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_JingdianHighestRank() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_JingdianKDLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SuitPkBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_SuiPkWinCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_SuiPkKillCount() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_SuiPkHighestRank() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_TeamChallengeBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_TeamChallengeHighestScore() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_BreakPveModeBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_PveChapterLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_PveStarCountLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_QQVIPBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_QQVIPBtnLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ItemPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_ScrollView() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& BOTTOM_BTN_HIEGHT() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_LaddyRankPkBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_LaddyWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_LaddyKillLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_LaddyRankScoreLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_LaddyRankSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_LaddySubRankSprite() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_LaddyRankName() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& m_LaddyRankNoLabel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_PlayerIdLabel() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerNickLable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerIdLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PersonalInfoPadUIView*))(Il2CppBase() + 0x3F082E0))(this);
	}
	template <typename T = void> T SetPlayerNickLable(Il2CppString* nick) {
		return ((T (*)(PersonalInfoPadUIView*, Il2CppString*))(Il2CppBase() + 0x3F08388))(this, nick);
	}
	template <typename T = void> T SetPlayerIdLabel(uint64_t playerid) {
		return ((T (*)(PersonalInfoPadUIView*, uint64_t))(Il2CppBase() + 0x3F084A8))(this, playerid);
	}
	template <typename T = void> T SetPlayerLevelInfo(int32_t level, int32_t exp) {
		return ((T (*)(PersonalInfoPadUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F085F4))(this, level, exp);
	}
	template <typename T = void> T ResetViewSize(int32_t width, int32_t height) {
		return ((T (*)(PersonalInfoPadUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F086A8))(this, width, height);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PersonalInfoPadUIView*))(Il2CppBase() + 0x3F08938))(this);
	}

};

}

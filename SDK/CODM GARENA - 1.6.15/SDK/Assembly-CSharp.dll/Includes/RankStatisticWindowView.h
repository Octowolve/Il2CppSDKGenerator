#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankStatisticWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankStatisticWindowView"));
	}

	template <typename T = uintptr_t> T& BtnClose() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BtnShare() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnRankData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnRankHistory() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteRankDataSelected() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteRankHistorySelected() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContainerRankData() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FrameTemplate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelRankTypeTitle() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ContainerSpvpData() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelSpvpMatchTimes() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelSpvpWinTimes() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelSpvpConsecutiveWins() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelSpvpAvgScore() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelSpvpMVPScore() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelSpvpKDScore() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContainerBrData() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelBrGameTimes() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelBrAvgKill() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LabelBrAvgAssist() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelBrAvgDamage() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& LabelBrAvgSurvive() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelAvgSave() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& SpriteRankIcon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelRankName() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BtnLeft() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BtnRight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& SpriteSeasonIcon() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelSeasonInterval() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& SpriteLockRankIcon() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelRankHistoryTitle() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ContainerRankHistory() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& HistoryScrollView() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& PanelHistory() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& BtnHistoryLeft() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& BtnHistoryRight() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& historyShareBtn() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> static T& ALLOW_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ItemCount() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& FX_PVP_LEVEL() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& FX_PVP_LOCK() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FX_BR_LEVEL() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& FX_BR_LOCK() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankTypeTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(RankStatisticWindowView*))(Il2CppBase() + 0x3823F54))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(RankStatisticWindowView*, float))(Il2CppBase() + 0x3823F5C))(this, dt);
	}
	template <typename T = void> T RefreshBtnState(uintptr_t rankStatisticType) {
		return ((T (*)(RankStatisticWindowView*, uintptr_t))(Il2CppBase() + 0x38234A4))(this, rankStatisticType);
	}
	template <typename T = void> T RefreshView(uintptr_t rankDetailType, uintptr_t rankStatisticType) {
		return ((T (*)(RankStatisticWindowView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38235BC))(this, rankDetailType, rankStatisticType);
	}
	template <typename T = void> T SetRankData(uintptr_t rankDetailType) {
		return ((T (*)(RankStatisticWindowView*, uintptr_t))(Il2CppBase() + 0x3824174))(this, rankDetailType);
	}
	template <typename T = Il2CppString*> T GetRankTypeTitle(uintptr_t rankDetailType) {
		return ((T (*)(RankStatisticWindowView*, uintptr_t))(Il2CppBase() + 0x3825294))(this, rankDetailType);
	}
	template <typename T = void> T SetRankHistory(uintptr_t rankDetailType) {
		return ((T (*)(RankStatisticWindowView*, uintptr_t))(Il2CppBase() + 0x38250F4))(this, rankDetailType);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(RankStatisticWindowView*, float))(Il2CppBase() + 0x38253E0))(this, P0);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameScorePanelController"));
	}

	template <typename T = uintptr_t> T& m_ScorePanelView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PlayerScoreEasyListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& b_IsInit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& scoreHelper() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitPlayerScoreScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfoEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickScorePanelView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerScorePanelData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRSorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262AC84))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262AD28))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262B060))(this);
	}
	template <typename T = void> T DelayInitPlayerScoreScrollView() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262B12C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262B3EC))(this);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262B5F8))(this);
	}
	template <typename T = void> T SetPlayerInfoEasyListData(bool bForceScrollToTop, bool resetScroll) {
		return ((T (*)(BRTeamGameScorePanelController*, bool, bool))(Il2CppBase() + 0x262B4AC))(this, bForceScrollToTop, resetScroll);
	}
	template <typename T = void> T TickScorePanelView() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262BDF0))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BRTeamGameScorePanelController*, uintptr_t, int32_t))(Il2CppBase() + 0x262BF94))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BRTeamGameScorePanelController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x262C048))(this, list, controller, index);
	}
	template <typename T = void> T OnSelfScrollViewDragEnd() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C110))(this);
	}
	template <typename T = void> T OnOtherScrollViewDragEnd() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C1A8))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogout() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C240))(this);
	}
	template <typename T = void> T RefreshPlayerScorePanelData() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262BE9C))(this);
	}
	template <typename T = int32_t> static T BRSorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x262C2F4))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C50C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTeamGameScorePanelController*))(Il2CppBase() + 0x262C51C))(this);
	}

};

}

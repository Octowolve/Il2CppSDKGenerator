#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameScorePanelController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4037CC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4037D6C))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x40380A4))(this);
	}
	template <typename T = void> T DelayInitPlayerScoreScrollView() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4038170))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4038444))(this);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4038650))(this);
	}
	template <typename T = void> T SetPlayerInfoEasyListData(bool bForceScrollToTop, bool resetScroll) {
		return ((T (*)(InfectGameScorePanelController*, bool, bool))(Il2CppBase() + 0x4038504))(this, bForceScrollToTop, resetScroll);
	}
	template <typename T = void> T TickScorePanelView() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4038E48))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(InfectGameScorePanelController*, uintptr_t, int32_t))(Il2CppBase() + 0x4038FEC))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(InfectGameScorePanelController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x40390A0))(this, list, controller, index);
	}
	template <typename T = void> T OnSelfScrollViewDragEnd() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4039168))(this);
	}
	template <typename T = void> T OnOtherScrollViewDragEnd() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4039200))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogout() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4039298))(this);
	}
	template <typename T = void> T RefreshPlayerScorePanelData() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4038EF4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x403934C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x40393F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x40393F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(InfectGameScorePanelController*))(Il2CppBase() + 0x4039400))(this);
	}

};

}

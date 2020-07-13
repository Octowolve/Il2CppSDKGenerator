#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankStatisticWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankStatisticWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_HistoryItemListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HistoryRecordList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RankStatisticType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RankDetailType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_SpvpLadderRank() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_BrLadderRank() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_BrLadderDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_RankDS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& stateName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRankDataClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRankHistoryClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHistoryLeftClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHistoryRightClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHistoryShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHistoryScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetSeasonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareHistoryItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381F8F4))(this);
	}
	template <typename T = uintptr_t> T get_BrLadderDS() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381F9A4))(this);
	}
	template <typename T = uintptr_t> T get_RankDS() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381FA54))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381FB04))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381FD1C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x381FDC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x382029C))(this);
	}
	template <typename T = void> T OnBtnShareClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3820650))(this);
	}
	template <typename T = uintptr_t> T GetShareData(uintptr_t type) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3820768))(this, type);
	}
	template <typename T = uintptr_t> T GetShareReportData(uintptr_t type) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3820AD0))(this, type);
	}
	template <typename T = void> T OnBtnRankDataClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3820C54))(this);
	}
	template <typename T = void> T OnBtnRankHistoryClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3820ED0))(this);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3820F78))(this);
	}
	template <typename T = void> T OnBtnLeftClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3821060))(this);
	}
	template <typename T = void> T OnBtnRightClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3821E68))(this);
	}
	template <typename T = void> T OnBtnHistoryLeftClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3821F78))(this);
	}
	template <typename T = void> T OnBtnHistoryRightClick() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3822198))(this);
	}
	template <typename T = void> T OnHistoryShareBtnClicked() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x38224B8))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t rankDetailType, uintptr_t rankStatisticType) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37F3D0C))(this, rankDetailType, rankStatisticType);
	}
	template <typename T = void> T InitHistoryScrollView() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3822764))(this);
	}
	template <typename T = void> T _SetView(uintptr_t rankStatisticType) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3820CFC))(this, rankStatisticType);
	}
	template <typename T = void> T _SetRank() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3821170))(this);
	}
	template <typename T = void> T _SetSeasonInfo(uintptr_t rankDetailType) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3822D74))(this, rankDetailType);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x382372C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x38237F4))(this, list, userContext);
	}
	template <typename T = uintptr_t> T GetShareData_1() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x38225C4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetShareHistoryItemData() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x38238A8))(this);
	}
	template <typename T = bool> T _SetRankm__0(uintptr_t it) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3823CF0))(this, it);
	}
	template <typename T = bool> T _SetRankm__1(uintptr_t it) {
		return ((T (*)(RankStatisticWindowController*, uintptr_t))(Il2CppBase() + 0x3823D74))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3823DF8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3823E00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3823E08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankStatisticWindowController*))(Il2CppBase() + 0x3823E10))(this);
	}

};

}

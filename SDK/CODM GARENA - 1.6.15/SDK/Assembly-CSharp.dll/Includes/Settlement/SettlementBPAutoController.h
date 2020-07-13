#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBPAutoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBPAutoController"));
	}

	template <typename T = int32_t> static T& ItemPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BasicInfoPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleCtrl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_safeBoxThumbnailCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BattlePassLevelAwardController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_BattlePassLevelAwardController_V5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& normalAnimData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& doubleAnimData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_Init_4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_Init_4_V5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SettlementBPAutoController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnExitBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyPassBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupBPViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBPViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowPlayAgainPopWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainTeamInfoUpdateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillShowPlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSafeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareBPAnimData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNormalBPAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDoubleBPAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T T_MP1_Init_4() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936614))(this);
	}
	template <typename T = void> T T_MP1_Init_4_V5() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293684C))(this);
	}
	template <typename T = void> T T_SettlementBPAutoController_Go() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936A84))(this);
	}
	template <typename T = void> T T_OnExitBtnClick() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936C9C))(this);
	}
	template <typename T = uintptr_t> T get_BPdataStore() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936E54))(this);
	}
	template <typename T = uintptr_t> T get_settlementDS() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936EF0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2936F8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2937060))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x29383C4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293867C))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2938868))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2938B68))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2938D68))(this);
	}
	template <typename T = void> T OnBtnExitClicked() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2938E40))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x29375D0))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2939184))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x293946C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnBuyPassBtnClick() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2939BE0))(this);
	}
	template <typename T = void> T SetupBPViewData() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293893C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T PrepareBPViewData(uintptr_t ds) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t))(Il2CppBase() + 0x2939F98))(this, ds);
	}
	template <typename T = void> T CheckShowPlayAgainPopWindow() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2937FD4))(this);
	}
	template <typename T = void> T OnPlayAgainTeamInfoUpdateNtf(uintptr_t Msg) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t))(Il2CppBase() + 0x2938144))(this, Msg);
	}
	template <typename T = void> T OnWillShowPlayAgain(uintptr_t msg) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t))(Il2CppBase() + 0x293A644))(this, msg);
	}
	template <typename T = void> T ShowSafeBox() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2937D8C))(this);
	}
	template <typename T = void> T PrepareBPAnimData() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293784C))(this);
	}
	template <typename T = void> T PlayNormalBPAnim() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x2937B18))(this);
	}
	template <typename T = void> T PlayDoubleBPAnim() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293A7B0))(this);
	}
	template <typename T = void> T T_MP1_Init_4m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x293ACB8))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_Init_4m__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x293AEF4))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_Init_4_V5m__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x293B1E0))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_Init_4_V5m__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettlementBPAutoController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x293B35C))(this, tutorialType, info);
	}
	template <typename T = void> T T_MP1_Init_4m__4() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293B648))(this);
	}
	template <typename T = void> static T T_MP1_Init_4m__5() {
		return ((T (*)(void *))(Il2CppBase() + 0x293BC54))(0);
	}
	template <typename T = void> T T_MP1_Init_4_V5m__6() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293BCF4))(this);
	}
	template <typename T = void> static T T_MP1_Init_4_V5m__7() {
		return ((T (*)(void *))(Il2CppBase() + 0x293C1A0))(0);
	}
	template <typename T = void> T T_MP1_Init_4m__8() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C240))(this);
	}
	template <typename T = void> T T_MP1_Init_4_V5m__9() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C3DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(SettlementBPAutoController*))(Il2CppBase() + 0x293C580))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDs() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mCachePreLabel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& mCacheCurLabel() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& bEnableClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& haveBox2Show() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& splvConfList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& normalAwardList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PluslAwardList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& rewardStyle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& scrollViewOffset() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& HundrendAwardList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TenAwardList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OthersAwardList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& FirstLevel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& plusSplvConfigList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isShowRoomInvite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetExpCard_Init_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnCommonOKBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel_1Data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBattlePassNewReceiveItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataWithOutLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewStartDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewEndDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewDrugEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewDrugStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusScrollViewStartDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusScrollViewEndDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusScrollViewDrugEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusScrollViewDrugStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseCommonBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinue_BtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPurchaseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillGetScrollView_RightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillGetScrollView_LeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetScrollView_LeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetScrollView_RightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3dViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReceiveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlusBPScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAwardListByWeasponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LevelAwardListCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlusAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlusWillGetAwardlistSortByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyReceiveRoomInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = void> T T_GetExpCard_Init_2() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C013F4))(this);
	}
	template <typename T = void> T T_OnOpen() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C01594))(this);
	}
	template <typename T = void> T T_OnCommonOKBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C017F8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C019E0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C01A84))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C0217C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C02434))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C029C0))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C02DC8))(this);
	}
	template <typename T = void> T SetData(int32_t preLv, int32_t curLv) {
		return ((T (*)(BattlePassLevelPopupController*, int32_t, int32_t))(Il2CppBase() + 0x2C02FD4))(this, preLv, curLv);
	}
	template <typename T = void> T SetLevel_1Data() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C039CC))(this);
	}
	template <typename T = void> T GetBattlePassNewReceiveItems() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C03788))(this);
	}
	template <typename T = void> T SetDataWithOutLevelUp() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C03D34))(this);
	}
	template <typename T = void> T OnNormalScrollViewStartDrug() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C03FE8))(this);
	}
	template <typename T = void> T OnNormalScrollViewEndDrug() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C040B4))(this);
	}
	template <typename T = void> T OnNormalScrollViewDrugEnd() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04218))(this);
	}
	template <typename T = void> T OnNormalScrollViewDrugStart() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C042E4))(this);
	}
	template <typename T = void> T OnPlusScrollViewStartDrug() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C043AC))(this);
	}
	template <typename T = void> T OnPlusScrollViewEndDrug() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04478))(this);
	}
	template <typename T = void> T OnPlusScrollViewDrugEnd() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C045DC))(this);
	}
	template <typename T = void> T OnPlusScrollViewDrugStart() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C046A8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04770))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04818))(this);
	}
	template <typename T = void> T OnCloseCommonBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C048C8))(this);
	}
	template <typename T = void> T OnContinue_BtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04A28))(this);
	}
	template <typename T = void> T OnPurchaseBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04ADC))(this);
	}
	template <typename T = void> T OnWillGetScrollView_RightBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04CE0))(this);
	}
	template <typename T = void> T OnWillGetScrollView_LeftBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04DB4))(this);
	}
	template <typename T = void> T OnGetScrollView_LeftBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04E8C))(this);
	}
	template <typename T = void> T OnGetScrollView_RightBtnClick() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C04F64))(this);
	}
	template <typename T = void> T On3dViewClose(uintptr_t Msg) {
		return ((T (*)(BattlePassLevelPopupController*, uintptr_t))(Il2CppBase() + 0x2C05038))(this, Msg);
	}
	template <typename T = void> T SetReceiveData() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C050F8))(this);
	}
	template <typename T = void> T SetCallBack(uintptr_t callback) {
		return ((T (*)(BattlePassLevelPopupController*, uintptr_t))(Il2CppBase() + 0x2C05688))(this, callback);
	}
	template <typename T = void> T SetPlusBPScrollView() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C0552C))(this);
	}
	template <typename T = void> T GetAwardConfig(int32_t pre, int32_t curent) {
		return ((T (*)(BattlePassLevelPopupController*, int32_t, int32_t))(Il2CppBase() + 0x2C05730))(this, pre, curent);
	}
	template <typename T = void> T SortAwardListByWeasponType() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C06B84))(this);
	}
	template <typename T = void> T LevelAwardListCount() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C06990))(this);
	}
	template <typename T = void> T GetPlusAwardList(int32_t preLevel) {
		return ((T (*)(BattlePassLevelPopupController*, int32_t))(Il2CppBase() + 0x2C06378))(this, preLevel);
	}
	template <typename T = void> T PlusWillGetAwardlistSortByType() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C06DA0))(this);
	}
	template <typename T = void> T OnNotifyReceiveRoomInvite(uintptr_t obj) {
		return ((T (*)(BattlePassLevelPopupController*, uintptr_t))(Il2CppBase() + 0x2C070C0))(this, obj);
	}
	template <typename T = void> T T_GetExpCard_Init_2m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassLevelPopupController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C0716C))(this, tutorialType, info);
	}
	template <typename T = void> static T T_OnOpenm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C072C4))(0);
	}
	template <typename T = void> T Initm__2() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07404))(this);
	}
	template <typename T = void> T OnNormalScrollViewEndDrugm__3() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07410))(this);
	}
	template <typename T = void> T OnPlusScrollViewEndDrugm__4() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07438))(this);
	}
	template <typename T = void> T OnCloseCommonBtnClickm__5() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07460))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassLevelPopupController*))(Il2CppBase() + 0x2C07588))(this);
	}

};

}

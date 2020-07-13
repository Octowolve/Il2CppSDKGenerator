#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionMainController"));
	}

	template <typename T = int32_t> T& MileStonePanelDepth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ScrollViewPanelDepth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDatastore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mAwardShowScrollCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& CacheShowWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CacheAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& CacheLoadoutIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> static T& CacheSkinId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheShowList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& CacheIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& curSeqId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& isShowing() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& showItemIndex() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_WeaponPromote_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnUpgradeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ShowUpgradeSfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_WeaponPromotionMainController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowByAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAwardShowList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowExpireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyWeaponUpgraded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUpgradeSfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyScrollViewTemplateAItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentReddotFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleItemBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeoutItemUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = void> T T_Lathel_WeaponPromote_Init() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A6F7EC))(this);
	}
	template <typename T = void> T T_OnUpgradeBtnClick() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A6FBFC))(this);
	}
	template <typename T = void> T T_ShowUpgradeSfx() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A6FE60))(this);
	}
	template <typename T = void> T T_WeaponPromotionMainController_Go() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A70084))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A703F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A7049C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A70850))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A709C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A70B48))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A70E8C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A710B8))(this);
	}
	template <typename T = bool> T ShowByAlpha(bool isShow) {
		return ((T (*)(WeaponPromotionMainController*, bool))(Il2CppBase() + 0x3A71224))(this, isShow);
	}
	template <typename T = void> T RefreshView(bool needAnim) {
		return ((T (*)(WeaponPromotionMainController*, bool))(Il2CppBase() + 0x3A714EC))(this, needAnim);
	}
	template <typename T = void> T ShowDetail(bool show, int32_t itemid) {
		return ((T (*)(WeaponPromotionMainController*, bool, int32_t))(Il2CppBase() + 0x3A715B4))(this, show, itemid);
	}
	template <typename T = void> T RefreshAwardShowList(bool needAnim) {
		return ((T (*)(WeaponPromotionMainController*, bool))(Il2CppBase() + 0x3A71F08))(this, needAnim);
	}
	template <typename T = void> T RefreshWeaponData() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A718B0))(this);
	}
	template <typename T = void> T ShowExpireTime(bool show) {
		return ((T (*)(WeaponPromotionMainController*, bool))(Il2CppBase() + 0x3A72830))(this, show);
	}
	template <typename T = void> T OnNotifyWeaponUpgraded(uintptr_t message) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t))(Il2CppBase() + 0x3A738EC))(this, message);
	}
	template <typename T = void> T ShowUpgradeSfx(uintptr_t message) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t))(Il2CppBase() + 0x3A73A38))(this, message);
	}
	template <typename T = void> T OnNotifyScrollViewTemplateAItemClick(uintptr_t message) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t))(Il2CppBase() + 0x3A73B64))(this, message);
	}
	template <typename T = uintptr_t> static T GetCurrentReddotFlag() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A72D20))(0);
	}
	template <typename T = void> T SetSelect(int32_t seqId, bool isClick) {
		return ((T (*)(WeaponPromotionMainController*, int32_t, bool))(Il2CppBase() + 0x3A73D1C))(this, seqId, isClick);
	}
	template <typename T = void> T ShowWeaponItem(int32_t itemId) {
		return ((T (*)(WeaponPromotionMainController*, int32_t))(Il2CppBase() + 0x3A72230))(this, itemId);
	}
	template <typename T = void> T OnWeaponBuyBtnClick() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A74320))(this);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A74514))(this);
	}
	template <typename T = void> T OnDoubleItemBtnClick() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A745E8))(this);
	}
	template <typename T = void> T OnNotifyTimeoutItemUpdate(uintptr_t message) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t))(Il2CppBase() + 0x3A746BC))(this, message);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A74A20))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A74D6C))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A75278))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A755D4))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A75804))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A75E00))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_WeaponPromote_Initm__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(WeaponPromotionMainController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A7604C))(this, tutorialType, info);
	}
	template <typename T = void> static T T_OnUpgradeBtnClickm__7() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A761D8))(0);
	}
	template <typename T = void> static T T_ShowUpgradeSfxm__8() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A76318))(0);
	}
	template <typename T = void> static T T_WeaponPromotionMainController_Gom__9() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A76458))(0);
	}
	template <typename T = void> static T T_WeaponPromotionMainController_Gom__A() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A76598))(0);
	}
	template <typename T = void> static T T_Lathel_WeaponPromote_Initm__B() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A766D8))(0);
	}
	template <typename T = void> static T T_Lathel_WeaponPromote_Initm__C() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A767D4))(0);
	}
	template <typename T = void> static T T_Lathel_WeaponPromote_Initm__D() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A76914))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(WeaponPromotionMainController*))(Il2CppBase() + 0x3A76A38))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementExpDetailBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementExpDetailBaseView"));
	}

	template <typename T = uintptr_t> T& PlayerExpTempItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ExpDetailGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ExpDetailForRoom() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ExpDetailScrollView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelCurrExp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelExpNeed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ProgressExp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ProgressBuffExp() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& SpriteRoleBuf() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpriteWeaponBuf() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& GOLevelMax() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnWeaponExpDetail() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Lockout1() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ItemLockout1() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Lockout2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemLockout2() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LockoutLevelMax() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ActiveContainerGrid() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& AnimationDuration() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& afterNormalAnimFinishTimer() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& mExpGained() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& mBuffExpGained() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& mCurrExp() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& mCurrLevel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& bAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& bShowFirstLockout() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = bool> T& bHasShowLevelupWindow() {
		return *(T*)((uintptr_t)this + 0xF2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponItemDatas() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& expItemDic() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ExpListGrid() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& WeaponExpCardTemplate() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& WeaponExpItemTemplate() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& WeaponExpLimitRoot() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& LabelWeaponExpAdd() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& WeaponExpScrollView() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& WeaponExpCardRoot() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& WeaponExpCardLimitRoot() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& ShowWeaponItemTime() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& HasShowExpAnimation() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& GOLevelUp() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& ShowNextBtnTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BtnNext() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& waitNextBtnTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& nextBtnTimeOutTimer() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& isShowWeaponDetailBtn() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& bottomRightPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& BottomRightAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BottomRightTable() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& topLeftPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& TopLeftAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& TopLeftTable() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& isUserTopLeftPlayAgain() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUIAnimAndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitExpDetailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GaneraDoubleExpDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchLockout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlayerExpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlayerNormalExpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlayerDoubleExpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgressAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSafeBoxTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScorllItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerCurExpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelInfoConfigByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponExpView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponExpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponCardView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponExpCardView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponExpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllExpItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUpAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNextBtnTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopNextBtnTimeOutTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAgainNoticeNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopLeftTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = uintptr_t> T get_settlementDs() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295FF90))(this);
	}
	template <typename T = void> T InitView(uintptr_t ds, Il2CppList<uintptr_t>* weaponItemDatas) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x296002C))(this, ds, weaponItemDatas);
	}
	template <typename T = void> T PlayUIAnimAndEffect() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295E554))(this);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t ds) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t))(Il2CppBase() + 0x2960104))(this, ds);
	}
	template <typename T = void> T SetExpInfo(uintptr_t ds) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t))(Il2CppBase() + 0x29604A0))(this, ds);
	}
	template <typename T = void> T InitExpDetailList() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2961624))(this);
	}
	template <typename T = void> T GaneraDoubleExpDetailItem() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x29618E4))(this);
	}
	template <typename T = void> T SetLockoutInfo(int32_t lockoutLevel, bool isFirstItem) {
		return ((T (*)(SettlementExpDetailBaseView*, int32_t, bool))(Il2CppBase() + 0x2960A84))(this, lockoutLevel, isFirstItem);
	}
	template <typename T = void> T SwitchLockout(uintptr_t parm) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t))(Il2CppBase() + 0x2961BD0))(this, parm);
	}
	template <typename T = void> T PlayPlayerExpAnim() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2961C94))(this);
	}
	template <typename T = void> T PlayPlayerNormalExpAnim() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2961FAC))(this);
	}
	template <typename T = void> T PlayPlayerDoubleExpAnim() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2962CD8))(this);
	}
	template <typename T = void> T OnAnimFinish() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2963294))(this);
	}
	template <typename T = void> T StartProgressAnim(uintptr_t bar, float startPrecent, float endPercent, float time, uintptr_t finishCallBack, bool isNeedAnim) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t, float, float, float, uintptr_t, bool))(Il2CppBase() + 0x29626E4))(this, bar, startPrecent, endPercent, time, finishCallBack, isNeedAnim);
	}
	template <typename T = float> T CheckSafeBoxTime() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2961DA4))(this);
	}
	template <typename T = uintptr_t> T PlayAnimation() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x29634DC))(this);
	}
	template <typename T = uintptr_t> T ScorllItemList() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x29635C4))(this);
	}
	template <typename T = void> T PlayerCurExpAnim(float start, float end, float dur) {
		return ((T (*)(SettlementExpDetailBaseView*, float, float, float))(Il2CppBase() + 0x29614B0))(this, start, end, dur);
	}
	template <typename T = uintptr_t> T GetLevelInfoConfigByLevel(int32_t level) {
		return ((T (*)(SettlementExpDetailBaseView*, int32_t))(Il2CppBase() + 0x2962560))(this, level);
	}
	template <typename T = void> T InitWeaponExpView(Il2CppList<uintptr_t>* list, bool bReachLimit, bool bShowLimitView) {
		return ((T (*)(SettlementExpDetailBaseView*, Il2CppList<uintptr_t>*, bool, bool))(Il2CppBase() + 0x29636AC))(this, list, bReachLimit, bShowLimitView);
	}
	template <typename T = void> T InitWeaponExpItem() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2963364))(this);
	}
	template <typename T = void> T InitWeaponCardView(Il2CppList<uintptr_t>* list, bool bReachLimit) {
		return ((T (*)(SettlementExpDetailBaseView*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x29639F4))(this, list, bReachLimit);
	}
	template <typename T = void> T SetWeaponCardInfo(Il2CppList<uintptr_t>* list) {
		return ((T (*)(SettlementExpDetailBaseView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2963ABC))(this, list);
	}
	template <typename T = void> T InitWeaponExpCardView(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(SettlementExpDetailBaseView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x29638BC))(this, dataList);
	}
	template <typename T = bool> T IsExpCard(uintptr_t data) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t))(Il2CppBase() + 0x2963F68))(this, data);
	}
	template <typename T = void> T SetWeaponExpInfo(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(SettlementExpDetailBaseView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2964128))(this, dataList);
	}
	template <typename T = void> T RemoveAllExpItems() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295F0AC))(this);
	}
	template <typename T = void> T OnLevelUp() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x29645AC))(this);
	}
	template <typename T = void> T OnLevelUpAnimEnd() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295FA90))(this);
	}
	template <typename T = void> T CheckNextBtnTimeOut() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964928))(this);
	}
	template <typename T = void> T StopNextBtnTimeOutTimer() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964AB4))(this);
	}
	template <typename T = void> T ShowNextBtn() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964B6C))(this);
	}
	template <typename T = uintptr_t> T GetAgainNoticeNode() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964D84))(this);
	}
	template <typename T = void> T RefreshBottomRightTable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295F4CC))(this);
	}
	template <typename T = void> T RefreshTopLeftTable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x295F2E8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964E24))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2964EE0))(this);
	}
	template <typename T = bool> T SetExpInfom__0(uintptr_t s) {
		return ((T (*)(SettlementExpDetailBaseView*, uintptr_t))(Il2CppBase() + 0x2965000))(this, s);
	}
	template <typename T = void> T RefreshTopLeftTablem__1() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2965044))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x296524C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SettlementExpDetailBaseView*))(Il2CppBase() + 0x2965254))(this);
	}

};

}

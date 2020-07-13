#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeBase"));
	}

	template <typename T = uintptr_t> T& mPreFireInputParam() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mFireResult() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mInputInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mFireModeUnit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mGameInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsAim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mCurWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mPawn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsMustStopFire() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsPendingStopAim() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& mOpenAimingType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& OpenCheckFireModeLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mLastAimState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mlastProneState() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& mMixOpenAimPressTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mIsBeginAutoLock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LockTimeCout() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mIsCanAutoAssistFire() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& mIsLastAutoFire() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = float> T& mLastClickTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& mCurrentClickTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mContinueClickNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> static T& mIsOpenInputCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponDebugErrorLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponDebugLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFireModeLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFireModeLogFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFireModeLogFormat1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMoveProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDoubleFireBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReleaseFireWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSaving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBurstStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoFireOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUsingBRUlt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLastFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanCheckFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFireBtnOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanADSOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEnableFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanManaulFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanAutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponCanAutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldReleaseToFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedCheckFireAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFireBtnAimAndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeeCheckAdsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckADSClickAimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAutoFireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideMainBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideLeftBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideDoubleFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckContinouspointInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCmd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}

	template <typename T = uint64_t> T get_AdsHudDisableState() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C42F94))(this);
	}
	template <typename T = uint64_t> T get_FireBtnHudDisableState() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C43054))(this);
	}
	template <typename T = uintptr_t> T get_mCurSettingInfo() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C43114))(this);
	}
	template <typename T = uintptr_t> T get_FireResult() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C431B0))(this);
	}
	template <typename T = void> T SetPendingStopAim() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C431B8))(this);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C432EC))(this);
	}
	template <typename T = void> static T WeaponDebugErrorLog(Il2CppString* str, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C434BC))(0, str, args);
	}
	template <typename T = void> static T WeaponDebugLog(Il2CppString* str, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C4358C))(0, str, args);
	}
	template <typename T = void> static T WeaponFireModeLog(Il2CppString* str, bool isNeedLog) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4C4365C))(0, str, isNeedLog);
	}
	template <typename T = void> static T WeaponFireModeLogFormat(Il2CppString* str, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C43818))(0, str, args);
	}
	template <typename T = void> static T WeaponFireModeLogFormat1(Il2CppString* str, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C439BC))(0, str, args);
	}
	template <typename T = void> T ForceUpdateInfo() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C43B60))(this);
	}
	template <typename T = void> T UpdateFireInput(float deltaTime) {
		return ((T (*)(WeaponFireModeBase*, float))(Il2CppBase() + 0x4C43C84))(this, deltaTime);
	}
	template <typename T = void> T CheckMoveProne() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C44BC4))(this);
	}
	template <typename T = void> T CheckDoubleFireBtnClick() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C44E78))(this);
	}
	template <typename T = void> T CheckReleaseFireWeapon() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45428))(this);
	}
	template <typename T = void> T CheckEndInput() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45598))(this);
	}
	template <typename T = void> T CheckSaving() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C456C4))(this);
	}
	template <typename T = void> T CheckBurstStopFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C4592C))(this);
	}
	template <typename T = void> T CheckAutoFireOpenAim() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45A68))(this);
	}
	template <typename T = void> T CheckUsingBRUlt() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45C08))(this);
	}
	template <typename T = void> T CheckLastFireInput() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45E1C))(this);
	}
	template <typename T = bool> T IsCanCheckFireInput() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C44138))(this);
	}
	template <typename T = bool> T CanOpenAim() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C45F18))(this);
	}
	template <typename T = bool> T CanFireBtnOpenAim() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46060))(this);
	}
	template <typename T = bool> T CanADSOpenAim() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46240))(this);
	}
	template <typename T = bool> T CanEnableFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C4643C))(this);
	}
	template <typename T = bool> T CanManaulFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C467F8))(this);
	}
	template <typename T = bool> T IsCanAutoFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46990))(this);
	}
	template <typename T = bool> T IsWeaponCanAutoFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46A64))(this);
	}
	template <typename T = bool> T ShouldAutoFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46C58))(this);
	}
	template <typename T = bool> T ShouldReleaseToFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C46D94))(this);
	}
	template <typename T = bool> T IsNeedCheckFireAim(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C47120))(this, param);
	}
	template <typename T = bool> T IsNeedCheckFire(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C47238))(this, param);
	}
	template <typename T = void> T CheckFireBtnAimAndFire(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C47350))(this, param);
	}
	template <typename T = bool> T IsNeeCheckAdsClick(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C47794))(this, param);
	}
	template <typename T = void> T CheckADSClickAimming(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C478A4))(this, param);
	}
	template <typename T = void> T CheckFireInput(uintptr_t param) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C47D40))(this, param);
	}
	template <typename T = bool> T get_IsCanAutoAssistFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C47E2C))(this);
	}
	template <typename T = void> T SetAutoLockTime(bool flag, bool isSingleShot) {
		return ((T (*)(WeaponFireModeBase*, bool, bool))(Il2CppBase() + 0x4C47E34))(this, flag, isSingleShot);
	}
	template <typename T = void> T UpdateAutoFireTime(float deltaTime) {
		return ((T (*)(WeaponFireModeBase*, float))(Il2CppBase() + 0x4C44AB4))(this, deltaTime);
	}
	template <typename T = void> T CheckAutoFire() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C4814C))(this);
	}
	template <typename T = void> T OnStartMatch(uintptr_t gameInfo) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C483D4))(this, gameInfo);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C48534))(this);
	}
	template <typename T = bool> T IsHideMainBtn() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C4863C))(this);
	}
	template <typename T = bool> T IsHideLeftBtn() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C487BC))(this);
	}
	template <typename T = bool> T IsHideDoubleFireBtn() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C48974))(this);
	}
	template <typename T = bool> T IsHideFireBtn(uintptr_t fireType) {
		return ((T (*)(WeaponFireModeBase*, uintptr_t))(Il2CppBase() + 0x4C48A44))(this, fireType);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C48C84))(this);
	}
	template <typename T = void> T CheckContinouspointInfo() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C447F4))(this);
	}
	template <typename T = bool> static T get_IsOpenInputCmd() {
		return ((T (*)(void *))(Il2CppBase() + 0x4C48D74))(0);
	}
	template <typename T = void> static T set_IsOpenInputCmd(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4C48E24))(0, value);
	}
	template <typename T = void> T UpdateCmd() {
		return ((T (*)(WeaponFireModeBase*))(Il2CppBase() + 0x4C48EF8))(this);
	}

};

}

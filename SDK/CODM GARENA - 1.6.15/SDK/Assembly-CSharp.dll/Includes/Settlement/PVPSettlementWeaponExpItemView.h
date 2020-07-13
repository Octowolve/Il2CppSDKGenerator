#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementWeaponExpItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementWeaponExpItemView"));
	}

	template <typename T = uintptr_t> T& SpriteWeapon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpriteQuality() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteQualityHead() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteBuf() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Lockout1() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ItemLockout1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Lockout2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemLockout2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelWeaponName() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelCurrExp() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelFinalExp() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ProgressExp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ProgressDoubleExp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GoLevelUp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GoExpMax() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& GoLoadout() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& CurrLevel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& CurrExp() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& GainExp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& GainDoubleExp() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& bAnim() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& bShowFirstLockout() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = float> T& AnimationDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& afterNormalAnimFinishTimer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& weaponConf() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponLockoutItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchLockout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDoubleExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgressAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppList<int32_t>*> T GetWeaponLockoutItemIcon(int32_t level, int32_t weaponId) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, int32_t, int32_t))(Il2CppBase() + 0x3B52078))(this, level, weaponId);
	}
	template <typename T = void> T UpdateView(uintptr_t data, bool bShowAnim) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, uintptr_t, bool))(Il2CppBase() + 0x3B51564))(this, data, bShowAnim);
	}
	template <typename T = void> T SetLockoutInfo(int32_t lockoutLevel, bool bReachMaxLevel, bool isShowFirst) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, int32_t, bool, bool))(Il2CppBase() + 0x3B5238C))(this, lockoutLevel, bReachMaxLevel, isShowFirst);
	}
	template <typename T = void> T SwitchLockout(uintptr_t parm) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, uintptr_t))(Il2CppBase() + 0x3B53160))(this, parm);
	}
	template <typename T = void> T UpdateExp() {
		return ((T (*)(PVPSettlementWeaponExpItemView*))(Il2CppBase() + 0x3B529D0))(this);
	}
	template <typename T = void> T UpdateDoubleExp() {
		return ((T (*)(PVPSettlementWeaponExpItemView*))(Il2CppBase() + 0x3B537DC))(this);
	}
	template <typename T = void> T OnLevelUp() {
		return ((T (*)(PVPSettlementWeaponExpItemView*))(Il2CppBase() + 0x3B53F0C))(this);
	}
	template <typename T = void> T StartProgressAnim(uintptr_t bar, float startPrecent, float endPercent, float time, uintptr_t finishCallBack, bool isNeedAnim) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, uintptr_t, float, float, float, uintptr_t, bool))(Il2CppBase() + 0x3B5325C))(this, bar, startPrecent, endPercent, time, finishCallBack, isNeedAnim);
	}
	template <typename T = bool> static T GetWeaponLockoutItemIconm__0(int32_t s) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B54098))(0, s);
	}
	template <typename T = bool> T UpdateViewm__1(uintptr_t s) {
		return ((T (*)(PVPSettlementWeaponExpItemView*, uintptr_t))(Il2CppBase() + 0x3B54168))(this, s);
	}

};

}

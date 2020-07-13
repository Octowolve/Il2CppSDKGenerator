#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FireButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FireButtonView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NewGuideText_Top() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& cachedTransform() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& FixedBGSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& FixedBulletSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FixedAimingSprite() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& FixedBulletCircleSpriteTrans() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& GrenadeEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FireForceSlider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CancelAimsprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BulletContainer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GrapFaceEffect() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& FirstFaceGrapTips() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& FireBg() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& NoFireBg() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SparrowEffect() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ElectricEffect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> static T& FADE_OUT_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TWEEN_ALPHA_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MAX_LASTCLICKTIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& JoyStickConfig() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& mFireBtnType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& m_FireBtnFlag() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_LastClickTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& BulletCountContainer() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& BulletCountLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BulletCountSprite() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& BulletCountRedColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BulletCountWhiteColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInputConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowElectricBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFirstFaceGrapTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireBtnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireBtnPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenAimStateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BulletCountSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BulletCountUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurFireSpriteIs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurWeaponNameIs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFiringBGNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanThrowAirDropGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DDE10))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DDFCC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DDFE8))(this);
	}
	template <typename T = void> T SetInputConfig() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DE120))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DE288))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DE290))(this);
	}
	template <typename T = void> T HideAllEffect() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DE394))(this);
	}
	template <typename T = bool> T IsHideFireBtn() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DE4D8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(FireButtonView*, float))(Il2CppBase() + 0x31DEB34))(this, dt);
	}
	template <typename T = void> T SetUIPos(Il2CppVector2 posOffset) {
		return ((T (*)(FireButtonView*, Il2CppVector2))(Il2CppBase() + 0x31DF29C))(this, posOffset);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DF5AC))(this);
	}
	template <typename T = void> T ShowElectricBtn(Il2CppString* fireSpriteName) {
		return ((T (*)(FireButtonView*, Il2CppString*))(Il2CppBase() + 0x31DFB10))(this, fireSpriteName);
	}
	template <typename T = void> T ShowBullet(bool isHip) {
		return ((T (*)(FireButtonView*, bool))(Il2CppBase() + 0x31DFDEC))(this, isHip);
	}
	template <typename T = void> T SetFireSprite(uintptr_t bullet, Il2CppString* spriteName, bool isGray) {
		return ((T (*)(FireButtonView*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x31DFC9C))(this, bullet, spriteName, isGray);
	}
	template <typename T = void> T ShowFirstFaceGrapTips(bool show) {
		return ((T (*)(FireButtonView*, bool))(Il2CppBase() + 0x31DD9F0))(this, show);
	}
	template <typename T = void> T SetFireBtnType(uintptr_t type) {
		return ((T (*)(FireButtonView*, uintptr_t))(Il2CppBase() + 0x31DD2BC))(this, type);
	}
	template <typename T = uintptr_t> T GetFireInput() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DF18C))(this);
	}
	template <typename T = Il2CppVector3> T GetFireBtnPos() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DF074))(this);
	}
	template <typename T = uintptr_t> T GetFireBtn() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31DEA24))(this);
	}
	template <typename T = void> T SwitchOpenAimStateIcon() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E0064))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E0508))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E064C))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E0790))(this);
	}
	template <typename T = void> T BulletCountSwitch(bool isOpen) {
		return ((T (*)(FireButtonView*, bool))(Il2CppBase() + 0x31E0860))(this, isOpen);
	}
	template <typename T = void> T BulletCountUpdateData() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E0978))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(FireButtonView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x31E0A40))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(FireButtonView*, uintptr_t))(Il2CppBase() + 0x31E0CE4))(this, itemType);
	}
	template <typename T = bool> T CurFireSpriteIs(Il2CppString* spriteName) {
		return ((T (*)(FireButtonView*, Il2CppString*))(Il2CppBase() + 0x31E0E4C))(this, spriteName);
	}
	template <typename T = bool> T CurWeaponNameIs(uintptr_t eWeaponName) {
		return ((T (*)(FireButtonView*, uintptr_t))(Il2CppBase() + 0x31E0F58))(this, eWeaponName);
	}
	template <typename T = bool> T IsFiringBGNow() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E11F8))(this);
	}
	template <typename T = bool> T CanThrowAirDropGrenade() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E1358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetInputConfig() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16D0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(FireButtonView*, float))(Il2CppBase() + 0x31E16E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16F0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(FireButtonView*))(Il2CppBase() + 0x31E16F8))(this);
	}

};

}

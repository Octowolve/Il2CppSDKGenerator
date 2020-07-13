#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrouchBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrouchBtnView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SquatSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& StandSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ProneSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RollSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RollingSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& PressTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> static T& constPressTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mPressCoutTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& PressStartTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& IsPress() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& IsPrePress() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& IsTickStart() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = uintptr_t> T& Container2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& bIsBothCrouchProneRegistered() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHideProneButtonValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGamepadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterGamepadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadTouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadTouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Crouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D4FB4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D4FBC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D4FD0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D515C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D52EC))(this);
	}
	template <typename T = void> T UpdateButton() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5458))(this);
	}
	template <typename T = void> T SetHideProneButtonValue(bool value) {
		return ((T (*)(CrouchBtnView*, bool))(Il2CppBase() + 0x40D4E50))(this, value);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5C80))(this);
	}
	template <typename T = void> T RegisterGamepadCallback(bool bBothCrouchAndProne) {
		return ((T (*)(CrouchBtnView*, bool))(Il2CppBase() + 0x40D5AB0))(this, bBothCrouchAndProne);
	}
	template <typename T = void> T UnregisterGamepadCallback() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D58F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5C88))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5D3C))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5DEC))(this);
	}
	template <typename T = bool> T OnGamepadProne() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D5EC0))(this);
	}
	template <typename T = bool> T OnGamepadCrouch() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D62BC))(this);
	}
	template <typename T = bool> T OnGamepadTouchDown() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D682C))(this);
	}
	template <typename T = bool> T OnGamepadTouchUp() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D6A44))(this);
	}
	template <typename T = bool> T Crouch() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D6B78))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrouchBtnView*, float))(Il2CppBase() + 0x40D6C18))(this, dt);
	}
	template <typename T = void> T NotifyClicked() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D74B0))(this);
	}
	template <typename T = void> T OnBtnPress(uintptr_t go, bool press) {
		return ((T (*)(CrouchBtnView*, uintptr_t, bool))(Il2CppBase() + 0x40D6960))(this, go, press);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D77BC))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(CrouchBtnView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40D785C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(CrouchBtnView*, uintptr_t))(Il2CppBase() + 0x40D7AD0))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BEC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrouchBtnView*, float))(Il2CppBase() + 0x40D7BFC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(CrouchBtnView*))(Il2CppBase() + 0x40D7C04))(this);
	}

};

}

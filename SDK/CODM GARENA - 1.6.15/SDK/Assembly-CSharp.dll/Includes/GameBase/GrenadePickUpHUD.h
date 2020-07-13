#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GrenadePickUpHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GrenadePickUpHUD"));
	}

	template <typename T = uintptr_t> T& PickUpBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_isPress() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_curPickGrenade() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_curPickWeapon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& KnifeBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IconList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_PickUpBtnLable() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsInPickingProgress() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_TimeInPickingProgress() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mTrophySystemClass() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& CanPickLeftTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& mIsKnifeClick() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchInfoGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenProgressBarValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpButtonRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKnifeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ImmediatelyPickUpTrophySystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickProgressCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelTrophySystemPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchAimmingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED3CA8))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED3CB4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED3D58))(this);
	}
	template <typename T = bool> T OnGamepadPress() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED42E0))(this);
	}
	template <typename T = bool> T OnGamepadRelease() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED4B98))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED4EE0))(this);
	}
	template <typename T = void> T SwitchInfoGO(bool isOpening) {
		return ((T (*)(GrenadePickUpHUD*, bool))(Il2CppBase() + 0x1ED5300))(this, isOpening);
	}
	template <typename T = void> T SetBgSprite(bool isOpening) {
		return ((T (*)(GrenadePickUpHUD*, bool))(Il2CppBase() + 0x1ED5548))(this, isOpening);
	}
	template <typename T = void> T OnOpenButtonClick() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5668))(this);
	}
	template <typename T = void> T OnResetButtonClick() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5CC4))(this);
	}
	template <typename T = void> T SetOpenProgressBarValue(float value) {
		return ((T (*)(GrenadePickUpHUD*, float))(Il2CppBase() + 0x1ED5474))(this, value);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5D78))(this);
	}
	template <typename T = bool> T IsNeedHide() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5D80))(this);
	}
	template <typename T = void> T ShowUI() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5FD8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(GrenadePickUpHUD*, float))(Il2CppBase() + 0x1ED69DC))(this, dt);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED77C8))(this);
	}
	template <typename T = void> T OnPickUpButtonPress() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED43C8))(this);
	}
	template <typename T = void> T OnPickUpButtonRelease() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED4C80))(this);
	}
	template <typename T = void> T OnKnifeBtnClick() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED79D4))(this);
	}
	template <typename T = void> T ImmediatelyPickUpTrophySystem() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED5BAC))(this);
	}
	template <typename T = void> T PickProgressCompleted() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED6FB4))(this);
	}
	template <typename T = void> T OnCancelTrophySystemPickup(uintptr_t msg) {
		return ((T (*)(GrenadePickUpHUD*, uintptr_t))(Il2CppBase() + 0x1ED7B74))(this, msg);
	}
	template <typename T = void> T OnSwitchAimmingState(uintptr_t msg) {
		return ((T (*)(GrenadePickUpHUD*, uintptr_t))(Il2CppBase() + 0x1ED7C94))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED7D44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED7D4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GrenadePickUpHUD*))(Il2CppBase() + 0x1ED7D54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GrenadePickUpHUD*, float))(Il2CppBase() + 0x1ED7D5C))(this, P0);
	}

};

}

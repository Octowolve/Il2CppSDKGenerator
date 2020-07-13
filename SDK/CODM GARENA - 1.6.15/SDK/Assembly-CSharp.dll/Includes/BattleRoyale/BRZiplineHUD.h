#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineHUD"));
	}

	template <typename T = float> T& WaiteSwithWeaponTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_Use() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NewGuideText_Use() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_Exit() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& NewGuideText_Exit() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& UseBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_HideBtnTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_WaitingSwithWeaponTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUseBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = float> T get_ChangeBtnCd() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266BAC8))(this);
	}
	template <typename T = uintptr_t> T get_BrEventBtnType() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266BB30))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266BB38))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266BB40))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266BBE4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRZiplineHUD*, float))(Il2CppBase() + 0x266BBF0))(this, dt);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C168))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C2B4))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C3F8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C540))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C7F4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C8B0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266CB04))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266CC4C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266CCE4))(this);
	}
	template <typename T = bool> T OnGamepadBtn() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266CE20))(this);
	}
	template <typename T = void> T OnUseBtn() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266CFF0))(this);
	}
	template <typename T = void> T DoUseBtn(bool checkClickBtn) {
		return ((T (*)(BRZiplineHUD*, bool))(Il2CppBase() + 0x266BDD8))(this, checkClickBtn);
	}
	template <typename T = void> T SwitchToMelee() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266D9D4))(this);
	}
	template <typename T = void> T OnExitBtn() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266D1E8))(this);
	}
	template <typename T = void> T ChangeBtnState() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266D8FC))(this);
	}
	template <typename T = void> T AutoSetBtnState() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266C06C))(this);
	}
	template <typename T = void> T SetBtnActive(bool showUseBtn, bool showExitBtn) {
		return ((T (*)(BRZiplineHUD*, bool, bool))(Il2CppBase() + 0x266E004))(this, showUseBtn, showExitBtn);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRZiplineHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x266E32C))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRZiplineHUD*, uintptr_t))(Il2CppBase() + 0x266E5B0))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E6D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRZiplineHUD*, float))(Il2CppBase() + 0x266E6DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E6E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E6EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E6F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E6FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E70C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRZiplineHUD*))(Il2CppBase() + 0x266E714))(this);
	}

};

}

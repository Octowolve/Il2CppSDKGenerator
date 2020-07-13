#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRCancelThrowingWeaponHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRCancelThrowingWeaponHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CancelThrowingBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& JumpSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCancelThrowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelThrowingBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D85004))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D8500C))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D8501C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D850C0))(this);
	}
	template <typename T = void> T SetAlpha(bool show) {
		return ((T (*)(BRCancelThrowingWeaponHUD*, bool))(Il2CppBase() + 0x2D85170))(this, show);
	}
	template <typename T = bool> T OnGamepadCancelThrowing() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D853A0))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D8590C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D859A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D85AE8))(this);
	}
	template <typename T = void> T OnCancelThrowingBtnClicked() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D85618))(this);
	}
	template <typename T = void> T SetIcon() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D85C2C))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRCancelThrowingWeaponHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2D85F54))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRCancelThrowingWeaponHUD*, uintptr_t))(Il2CppBase() + 0x2D861C8))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D862C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D862C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D862CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D862D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRCancelThrowingWeaponHUD*))(Il2CppBase() + 0x2D862D4))(this);
	}

};

}

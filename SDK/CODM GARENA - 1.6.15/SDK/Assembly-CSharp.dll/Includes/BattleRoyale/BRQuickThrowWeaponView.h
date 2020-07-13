#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickThrowWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickThrowWeaponView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect_Use() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NewGuideText_Use() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_Open() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NewGuideText_Open() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NewGuideEffect_Switch() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NewGuideText_Switch() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRQuickThrowWeaponView*))(Il2CppBase() + 0x1B1A790))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRQuickThrowWeaponView*))(Il2CppBase() + 0x1B1A798))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRQuickThrowWeaponView*))(Il2CppBase() + 0x1B1A7A8))(this);
	}
	template <typename T = void> T UpdateBg(bool isChange) {
		return ((T (*)(BRQuickThrowWeaponView*, bool))(Il2CppBase() + 0x1B1A990))(this, isChange);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRQuickThrowWeaponView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1AA30))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRQuickThrowWeaponView*, uintptr_t))(Il2CppBase() + 0x1B1ACCC))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRQuickThrowWeaponView*))(Il2CppBase() + 0x1B1AEB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateBg(bool P0) {
		return ((T (*)(BRQuickThrowWeaponView*, bool))(Il2CppBase() + 0x1B1AEC0))(this, P0);
	}

};

}

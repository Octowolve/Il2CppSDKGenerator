#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpectatingHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpectatingHUD"));
	}

	template <typename T = uintptr_t> T& SpectatingModeRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpectatingModeBtn_1P() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Selected_1PMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& UnSelected_1PMode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Mode1PLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpectatingModeBtn_3P() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Selected_3PMode() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& UnSelected_3PMode() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Mode3PLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SelectedColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& UnSelectedColor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NextSpectatingBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SpectatingTargetLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpectModeRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& HPLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& HPSlider() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CurWeaponIcon() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ViewTargetInfoContaier() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& IndexLabel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& KillNumLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TitleBG_1() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TitleBG_2() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& m_HideSelectModeBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& m_NextSpectatingBtnTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanSwitchSpectatingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadNextPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadChangeMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextPlayerClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On1PModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3PModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckViewTargetInfoShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCommonInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094904))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x309490C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094918))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094924))(this);
	}
	template <typename T = bool> T get_IsGameCanSwitchSpectatingMode() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x309492C))(this);
	}
	template <typename T = bool> T IsCanSwitchSpectatingMode() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094A40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094E0C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3094FD0))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(SpectatingHUD*, bool, bool))(Il2CppBase() + 0x3095194))(this, value, enableOptimize);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3095274))(this);
	}
	template <typename T = bool> T OnGamepadNextPlayer() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x309530C))(this);
	}
	template <typename T = bool> T OnGamepadChangeMode() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x30953E0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x309558C))(this);
	}
	template <typename T = void> T OnNextPlayerClick() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x309594C))(this);
	}
	template <typename T = void> T On1PModeBtnClick() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3095B1C))(this);
	}
	template <typename T = void> T On3PModeBtnClick() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3095CF0))(this);
	}
	template <typename T = void> T OnSpectateModeChanged() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3095EC4))(this);
	}
	template <typename T = void> T CheckViewTargetInfoShowState() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3095F68))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingHUD*, float))(Il2CppBase() + 0x3096290))(this, dt);
	}
	template <typename T = void> T UpdateCommonInfo() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x30963FC))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3096A24))(this);
	}
	template <typename T = void> T RefreshHP() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3096D1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3097010))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3097018))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(SpectatingHUD*, bool, bool))(Il2CppBase() + 0x3097020))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3097028))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SpectatingHUD*))(Il2CppBase() + 0x3097030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingHUD*, float))(Il2CppBase() + 0x3097038))(this, P0);
	}

};

}

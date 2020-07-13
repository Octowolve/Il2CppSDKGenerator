#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowWeaponBtnView"));
	}

	template <typename T = uintptr_t> T& BtnMain() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WidgetDestructive() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& WidgetTactical() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteDestructiveSelected() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteTacticalSelected() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelDestructiveCount() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelTacticalCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& IconDestructive() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& IconTactical() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_ShowTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMainPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMainReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouchCurrentChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToDestructive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9708))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9710))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9720))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9800))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C98E0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ThrowWeaponBtnView*, float))(Il2CppBase() + 0x27C98E8))(this, dt);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9988))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9BC8))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9E08))(this);
	}
	template <typename T = void> T OnBtnMainPressed() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C9EA8))(this);
	}
	template <typename T = void> T OnBtnMainReleased() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CA338))(this);
	}
	template <typename T = void> T OnTouchCurrentChanged() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CA764))(this);
	}
	template <typename T = void> T OnSwitchToTactical() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CA630))(this);
	}
	template <typename T = void> T OnSwitchToDestructive() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27C8F78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CAB68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CAB70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ThrowWeaponBtnView*, float))(Il2CppBase() + 0x27CAB78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CAB80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CAB88))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(ThrowWeaponBtnView*))(Il2CppBase() + 0x27CAB90))(this);
	}

};

}

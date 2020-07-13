#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameInfoGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameInfo_Grenade"));
	}

	template <typename T = uintptr_t> T& m_TrackEffectTransform1() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_TrailRenderer1() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& m_TrackEffectTransform2() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_TrailRenderer2() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_curTrackEffectTransform() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_IsStopUpdateTrackEffectTransform() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportWeaponForProjectileTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportWeaponForProjectile1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopUpdateProjectileTrackEffectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProjectileTrackEffectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_ShouldPlayCameraShake() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3915D88))(this);
	}
	template <typename T = bool> T get_ShowProjectile1PView() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3915D90))(this);
	}
	template <typename T = bool> T get_ShowProjectileTrackEffect() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3915EB0))(this);
	}
	template <typename T = bool> T SupportWeaponForProjectileTrackEffect(uintptr_t weapon) {
		return ((T (*)(SPGameInfoGrenade*, uintptr_t))(Il2CppBase() + 0x3915FD0))(this, weapon);
	}
	template <typename T = bool> T SupportWeaponForProjectile1PView(uintptr_t weapon) {
		return ((T (*)(SPGameInfoGrenade*, uintptr_t))(Il2CppBase() + 0x3916084))(this, weapon);
	}
	template <typename T = bool> T get_ShowProjectileGlowEffect() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3916138))(this);
	}
	template <typename T = void> T StopUpdateProjectileTrackEffectPosition() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3916140))(this);
	}
	template <typename T = void> T UpdateProjectileTrackEffectPosition(Il2CppVector3 pos) {
		return ((T (*)(SPGameInfoGrenade*, Il2CppVector3))(Il2CppBase() + 0x39161E4))(this, pos);
	}
	template <typename T = void> T HideTrackEffect() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3916B94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_SupportWeaponForProjectileTrackEffect(uintptr_t P0) {
		return ((T (*)(SPGameInfoGrenade*, uintptr_t))(Il2CppBase() + 0x3916CBC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SupportWeaponForProjectile1PView(uintptr_t P0) {
		return ((T (*)(SPGameInfoGrenade*, uintptr_t))(Il2CppBase() + 0x3916CC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StopUpdateProjectileTrackEffectPosition() {
		return ((T (*)(SPGameInfoGrenade*))(Il2CppBase() + 0x3916CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateProjectileTrackEffectPosition(Il2CppVector3 P0) {
		return ((T (*)(SPGameInfoGrenade*, Il2CppVector3))(Il2CppBase() + 0x3916CD4))(this, P0);
	}

};

}

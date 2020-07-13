#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Sparrow"));
	}

	template <typename T = float> T& m_SpeedAttenuation() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_DamageAttenuation() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_MaxXuLiTime() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_MaxXuLiCrosshairSize() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_MaxXuLiCrosshairLength() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_MaxXuLiScale() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = float> T& XuLiTime() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireDirectOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentSparrow*, uintptr_t, bool))(Il2CppBase() + 0x23FCA74))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCBC0))(this);
	}
	template <typename T = float> T get_MaxXuLiCrosshairLength() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCC7C))(this);
	}
	template <typename T = float> T get_MaxXuLiCrosshairSize() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCC84))(this);
	}
	template <typename T = float> T get_MaxXuLiTime() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCC8C))(this);
	}
	template <typename T = float> T get_XuLiTime() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCC94))(this);
	}
	template <typename T = void> T set_XuLiTime(float value) {
		return ((T (*)(WeaponFireComponentSparrow*, float))(Il2CppBase() + 0x23FCC9C))(this, value);
	}
	template <typename T = Il2CppVector3> T GetFireStartPos() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCCA4))(this);
	}
	template <typename T = Il2CppVector3> T GetFireOffset() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCE68))(this);
	}
	template <typename T = Il2CppVector3> T GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCF18))(this);
	}
	template <typename T = float> T GetRealSpeed() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FCFC8))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentSparrow*, Il2CppQuaternion))(Il2CppBase() + 0x23FD1B4))(this, initialAim);
	}
	template <typename T = void> T GetExplosionInfo(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t projectileData, uintptr_t* eplosionTime, uintptr_t* targetPos) {
		return ((T (*)(WeaponFireComponentSparrow*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23FD2F8))(this, startPos, velocity, projectileData, eplosionTime, targetPos);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD41C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentSparrow*, uintptr_t, bool))(Il2CppBase() + 0x23FD4BC))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireStartPos() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD4C0))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireOffset() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD4D0))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD4E0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRealSpeed() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD4F0))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentSparrow*, Il2CppQuaternion))(Il2CppBase() + 0x23FD4F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetExplosionInfo(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(WeaponFireComponentSparrow*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23FD518))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentSparrow*))(Il2CppBase() + 0x23FD55C))(this);
	}

};

}

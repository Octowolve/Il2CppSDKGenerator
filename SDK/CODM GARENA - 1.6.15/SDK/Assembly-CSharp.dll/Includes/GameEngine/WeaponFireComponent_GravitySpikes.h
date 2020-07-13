#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentGravitySpikes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_GravitySpikes"));
	}

	template <typename T = float> T& m_DamageSectorCylinderRadius() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_DamageSectorCylinderHigh() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_DamageSectorCylinderAngle() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_KillEarnScore() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_RecoverEnergyPercent() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uint32_t> T& m_GravitySpikesBuffID() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> T& m_Hit() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplosionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerThrowHoldFireEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartHoldFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, uintptr_t, bool))(Il2CppBase() + 0x23D62AC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D63F8))(this);
	}
	template <typename T = Il2CppVector3> T GetFireStartPos() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D64B4))(this);
	}
	template <typename T = Il2CppVector3> T GetFireOffset() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D678C))(this);
	}
	template <typename T = Il2CppVector3> T GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D683C))(this);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppQuaternion))(Il2CppBase() + 0x23D68EC))(this, initialAim);
	}
	template <typename T = void> T GetExplosionInfo(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t projectileData, uintptr_t* eplosionTime, uintptr_t* targetPos) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23D6BEC))(this, startPos, velocity, projectileData, eplosionTime, targetPos);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D6D10))(this);
	}
	template <typename T = void> T ServerThrowHoldFireEnd(Il2CppVector3 setVelocity) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppVector3))(Il2CppBase() + 0x23D6DB0))(this, setVelocity);
	}
	template <typename T = uintptr_t> T ServerStartHoldFire(uintptr_t* outExplosionTime) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, uintptr_t*))(Il2CppBase() + 0x23D71C0))(this, outExplosionTime);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, uintptr_t, bool))(Il2CppBase() + 0x23D7D20))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireStartPos() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D7D24))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireOffset() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D7E98))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetFireDirectOffset() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D8454))(this);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppQuaternion))(Il2CppBase() + 0x23D86F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetExplosionInfo(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23D8714))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentGravitySpikes*))(Il2CppBase() + 0x23D88D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerThrowHoldFireEnd(Il2CppVector3 P0) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, Il2CppVector3))(Il2CppBase() + 0x23D88E0))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_ServerStartHoldFire(uintptr_t* P0) {
		return ((T (*)(WeaponFireComponentGravitySpikes*, uintptr_t*))(Il2CppBase() + 0x23D8E08))(this, P0);
	}

};

}

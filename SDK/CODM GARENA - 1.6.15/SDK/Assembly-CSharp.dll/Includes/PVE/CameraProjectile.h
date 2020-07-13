#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class CameraProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "CameraProjectile"));
	}

	template <typename T = uintptr_t> T& ProjectileRef() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& DelayDetachTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& OldFOV() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayFlybySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopFlybySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayHitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDetach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T _PlayFlybySound() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BDF58))(this);
	}
	template <typename T = void> T _StopFlybySound() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BDFF0))(this);
	}
	template <typename T = void> T _PlayHitSound() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE088))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE120))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE220))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(CameraProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49BE2C4))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE5DC))(this);
	}
	template <typename T = uintptr_t> T DelayDetach() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE3E8))(this);
	}
	template <typename T = void> T PostExplode() {
		return ((T (*)(CameraProjectile*))(Il2CppBase() + 0x49BE4C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(CameraProjectile*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x49BE684))(this, P0, P1, P2);
	}

};

}

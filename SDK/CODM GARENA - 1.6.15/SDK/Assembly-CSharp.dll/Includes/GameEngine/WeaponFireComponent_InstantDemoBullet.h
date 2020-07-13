#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentInstantDemoBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_InstantDemoBullet"));
	}

	template <typename T = bool> T& m_UseVehicleBullet() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocityForProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStopDriving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T StartFire() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EA6A4))(this);
	}
	template <typename T = void> T EndFire() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EA840))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocityForProj(Il2CppVector3 TargetHit) {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*, Il2CppVector3))(Il2CppBase() + 0x23EA9E4))(this, TargetHit);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EAC34))(this);
	}
	template <typename T = void> T PostFireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB2E4))(this);
	}
	template <typename T = void> T NotifyStopDriving() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB47C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFire() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB53C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndFire() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostFireAmmunition() {
		return ((T (*)(WeaponFireComponentInstantDemoBullet*))(Il2CppBase() + 0x23EB54C))(this);
	}

};

}

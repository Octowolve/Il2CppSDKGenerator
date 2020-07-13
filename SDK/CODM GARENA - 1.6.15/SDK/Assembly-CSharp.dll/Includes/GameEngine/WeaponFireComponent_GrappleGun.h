#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentGrappleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_GrappleGun"));
	}

	template <typename T = float> T& m_MinDistance() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = float> T& m_MaxDistance() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_PullingInitSpeed() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = float> T& m_PullingAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& m_PullingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = float> T& m_EnableFireCheckInv() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = float> T& m_MaxProtectTimeInRushRotate() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = bool> T& m_CanFire() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_CurEnableFireCheckInv() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = bool> T& HasBeenInFiringState() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = bool> T& UnderAimedIdleState() {
		return *(T*)((uintptr_t)this + 0x2D5);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraceCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelRealInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldEnableFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColliderTransPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRealStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentGrappleGun*, uintptr_t, bool))(Il2CppBase() + 0x23D2ADC))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2D08))(this);
	}
	template <typename T = float> T get_MaxProtectTimeInRushRotate() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DC4))(this);
	}
	template <typename T = float> T get_PullingInitSpeed() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DCC))(this);
	}
	template <typename T = float> T get_PullingAccelSpeed() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DD4))(this);
	}
	template <typename T = float> T get_PullingMaxSpeed() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DDC))(this);
	}
	template <typename T = float> T get_MinDistance() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DE4))(this);
	}
	template <typename T = void> T set_MinDistance(float value) {
		return ((T (*)(WeaponFireComponentGrappleGun*, float))(Il2CppBase() + 0x23D2DEC))(this, value);
	}
	template <typename T = float> T get_MaxDistance() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2DF4))(this);
	}
	template <typename T = void> T set_MaxDistance(float value) {
		return ((T (*)(WeaponFireComponentGrappleGun*, float))(Il2CppBase() + 0x23D2DFC))(this, value);
	}
	template <typename T = bool> T TraceCanFire() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2E04))(this);
	}
	template <typename T = bool> T EnableFire() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2EAC))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D2F54))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D350C))(this);
	}
	template <typename T = Il2CppVector3> T GetModelRealStartPos() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D3814))(this);
	}
	template <typename T = Il2CppVector3> T GetModelRealInitVelocity() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D3C70))(this);
	}
	template <typename T = uintptr_t> T RealStartFire() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D3F6C))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFireComponentGrappleGun*, float))(Il2CppBase() + 0x23D4590))(this, DeltaTime);
	}
	template <typename T = void> T ShouldEnableFire() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D47A8))(this);
	}
	template <typename T = bool> T GetColliderTransPoint(Il2CppVector3 vBeginPoint, Il2CppVector3 vDestPoint, uintptr_t* vTransPoint) {
		return ((T (*)(WeaponFireComponentGrappleGun*, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x23D4C20))(this, vBeginPoint, vDestPoint, vTransPoint);
	}
	template <typename T = void> T OnPostRealStartFire(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t curProjectile) {
		return ((T (*)(WeaponFireComponentGrappleGun*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23D52BC))(this, startPos, velocity, curProjectile);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentGrappleGun*, uintptr_t, bool))(Il2CppBase() + 0x23D5634))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetStartPos() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D5638))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D58A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_RealStartFire() {
		return ((T (*)(WeaponFireComponentGrappleGun*))(Il2CppBase() + 0x23D5B24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentGrappleGun*, float))(Il2CppBase() + 0x23D6160))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPostRealStartFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(WeaponFireComponentGrappleGun*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23D6164))(this, P0, P1, P2);
	}

};

}

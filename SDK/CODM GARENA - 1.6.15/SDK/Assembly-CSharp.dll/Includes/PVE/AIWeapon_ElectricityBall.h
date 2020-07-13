#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIWeaponElectricityBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIWeapon_ElectricityBall"));
	}

	template <typename T = Il2CppString*> T& m_SocketName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_CreateBallCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_PerBallIntervalAngle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DistanceCenter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RandomFireTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_ProjectileMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_ProjectileAccel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_ProjectileLifeSpan() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_ProjectileExplodeLifeSpan() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ProjectileDamageValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_ProjectileMinDamageValue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_ProjectileDamageRadius() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& StartElectricityBallEffect() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& EffectProjectile_Flight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& EffectProjectile_Explode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_ObjSocketTransf() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_OnwerPawn() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ElectricityBallTranfList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ElectricityBallStartEffectList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppQuaternion> T& m_CacheSocketLocationRotate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_bAroundRotate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateBall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadEffectResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreElectricityBall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireElectricityBall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireElectricityBalls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDamageRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopElectricityBall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AIWeaponElectricityBall*))(Il2CppBase() + 0x49B7F04))(this);
	}
	template <typename T = void> T CreateBall() {
		return ((T (*)(AIWeaponElectricityBall*))(Il2CppBase() + 0x49B80C0))(this);
	}
	template <typename T = void> T PreloadEffectResource() {
		return ((T (*)(AIWeaponElectricityBall*))(Il2CppBase() + 0x49B8414))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AIWeaponElectricityBall*, float))(Il2CppBase() + 0x49B86E4))(this, deltaTime);
	}
	template <typename T = void> T PreElectricityBall(int32_t count, bool bAroundRotate) {
		return ((T (*)(AIWeaponElectricityBall*, int32_t, bool))(Il2CppBase() + 0x49B8930))(this, count, bAroundRotate);
	}
	template <typename T = float> T FireElectricityBall(uintptr_t target) {
		return ((T (*)(AIWeaponElectricityBall*, uintptr_t))(Il2CppBase() + 0x49B8B30))(this, target);
	}
	template <typename T = void> T FireElectricityBalls(Il2CppArray<uintptr_t>* DestPosArray, float explodeTime) {
		return ((T (*)(AIWeaponElectricityBall*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x49B8E40))(this, DestPosArray, explodeTime);
	}
	template <typename T = void> T FireProjectile(Il2CppVector3 dir, int32_t ballIndex) {
		return ((T (*)(AIWeaponElectricityBall*, Il2CppVector3, int32_t))(Il2CppBase() + 0x49B910C))(this, dir, ballIndex);
	}
	template <typename T = uintptr_t> T DelayFire(float delayTime, int32_t ballIndex, uintptr_t target) {
		return ((T (*)(AIWeaponElectricityBall*, float, int32_t, uintptr_t))(Il2CppBase() + 0x49B8D20))(this, delayTime, ballIndex, target);
	}
	template <typename T = void> T ShowDamageRegion(Il2CppVector3 startPos, Il2CppVector3 foward) {
		return ((T (*)(AIWeaponElectricityBall*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x49B94A0))(this, startPos, foward);
	}
	template <typename T = void> T StopElectricityBall() {
		return ((T (*)(AIWeaponElectricityBall*))(Il2CppBase() + 0x49B9880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AIWeaponElectricityBall*))(Il2CppBase() + 0x49B9A70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AIWeaponElectricityBall*, float))(Il2CppBase() + 0x49B9A78))(this, P0);
	}

};

}

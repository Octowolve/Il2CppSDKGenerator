#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectProjectileFlightEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_ProjectileFlightEffect"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& EntityRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GravityScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& angleScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& m_FireOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_FireDirectOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCorrectHitNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcAccelDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T TriggerEffect(Il2CppString* value, bool isStart, uintptr_t target) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8B7D0))(this, value, isStart, target);
	}
	template <typename T = void> T StartEffect() {
		return ((T (*)(AssetEffectProjectileFlightEffect*))(Il2CppBase() + 0x3B8B90C))(this);
	}
	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, float))(Il2CppBase() + 0x3B8BBE0))(this, deltaTime);
	}
	template <typename T = Il2CppVector3> T GetCorrectHitNormal(Il2CppVector3 hitNormal, Il2CppVector3 velocity) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3B8C1C8))(this, hitNormal, velocity);
	}
	template <typename T = Il2CppVector3> T CalcAccelDir(float deltaTime) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, float))(Il2CppBase() + 0x3B8C338))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffect(Il2CppString* P0, bool P1, uintptr_t P2) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3B8C4EC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_StartEffect() {
		return ((T (*)(AssetEffectProjectileFlightEffect*))(Il2CppBase() + 0x3B8C504))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffect(float P0) {
		return ((T (*)(AssetEffectProjectileFlightEffect*, float))(Il2CppBase() + 0x3B8C508))(this, P0);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HiveProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HiveProjectile"));
	}

	template <typename T = bool> T& m_bAttacking() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ParentEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_HiveProjectileEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_TargetPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_DesiredReachTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_RealDesiredReachTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_HiveCenterOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_TargetPawnHeightOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_HiveProjectileEffectPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadHiveProjectEffectFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHiveAttackSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHiveAttackEndSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPawnAttackPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_Attacking() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FD9AC))(this);
	}
	template <typename T = void> T Init(uintptr_t parentEffect, float fDesiredReachTime) {
		return ((T (*)(HiveProjectile*, uintptr_t, float))(Il2CppBase() + 0x36FD9B4))(this, parentEffect, fDesiredReachTime);
	}
	template <typename T = void> T AttackTarget(uintptr_t targetPawn) {
		return ((T (*)(HiveProjectile*, uintptr_t))(Il2CppBase() + 0x36FDD34))(this, targetPawn);
	}
	template <typename T = void> T OnLoadHiveProjectEffectFinish() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FE1BC))(this);
	}
	template <typename T = void> T PlayHiveAttackSound() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FE35C))(this);
	}
	template <typename T = void> T PlayHiveAttackEndSound() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FE5B0))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPawnAttackPos() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FE804))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(HiveProjectile*, float))(Il2CppBase() + 0x36FEAC4))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HiveProjectile*))(Il2CppBase() + 0x36FEDDC))(this);
	}

};

}

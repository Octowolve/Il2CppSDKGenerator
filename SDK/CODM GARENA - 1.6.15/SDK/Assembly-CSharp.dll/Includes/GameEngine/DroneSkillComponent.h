#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DroneSkillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DroneSkillComponent"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_SkillCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_FlySpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_CoolDownFinished() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LastCastSkillTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CastSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPositionAndNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSkillProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSkillProjectile_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkillCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(DroneSkillComponent*, uintptr_t))(Il2CppBase() + 0x51E64F0))(this, owner);
	}
	template <typename T = void> T CastSkill() {
		return ((T (*)(DroneSkillComponent*))(Il2CppBase() + 0x51E65A8))(this);
	}
	template <typename T = bool> static T GetTargetPositionAndNormal(Il2CppVector3 startPosition, Il2CppVector3 direction, uintptr_t* targetPosition, uintptr_t* targetNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x51E6B3C))(0, startPosition, direction, targetPosition, targetNormal);
	}
	template <typename T = void> T CreateSkillProjectile(Il2CppVector3 startPosition, Il2CppVector3 direction, bool hit, Il2CppVector3 targetPosition, Il2CppVector3 targetNormal) {
		return ((T (*)(DroneSkillComponent*, Il2CppVector3, Il2CppVector3, bool, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x51E6F24))(this, startPosition, direction, hit, targetPosition, targetNormal);
	}
	template <typename T = void> static T CreateSkillProjectile_3P(Il2CppVector3 startPosition, Il2CppVector3 velocity, uint32_t ownerPlayerID) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uint32_t))(Il2CppBase() + 0x51E7178))(0, startPosition, velocity, ownerPlayerID);
	}
	template <typename T = void> T UpdateSkillCount(int32_t count) {
		return ((T (*)(DroneSkillComponent*, int32_t))(Il2CppBase() + 0x51E73D4))(this, count);
	}

};

}

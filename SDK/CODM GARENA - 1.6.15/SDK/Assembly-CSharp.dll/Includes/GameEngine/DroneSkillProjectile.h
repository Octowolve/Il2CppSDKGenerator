#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DroneSkillProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DroneSkillProjectile"));
	}

	template <typename T = uintptr_t> T& ProjectileTrailRenderer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ProjectileAnimator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsRunning() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CreateTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_Dir() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_Hit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_RunningDuration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_ControlPlayerId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayAndDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(Il2CppVector3 pos, Il2CppVector3 dir, bool hit, Il2CppVector3 targetPos, float speed, uint32_t controlPlayerId) {
		return ((T (*)(DroneSkillProjectile*, Il2CppVector3, Il2CppVector3, bool, Il2CppVector3, float, uint32_t))(Il2CppBase() + 0x51E78EC))(this, pos, dir, hit, targetPos, speed, controlPlayerId);
	}
	template <typename T = void> T CheckBreakWindow(Il2CppVector3 startPosition, Il2CppVector3 targetPosition) {
		return ((T (*)(DroneSkillProjectile*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x51E7E84))(this, startPosition, targetPosition);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DroneSkillProjectile*))(Il2CppBase() + 0x51E81C0))(this);
	}
	template <typename T = void> T DelayAndDestroy() {
		return ((T (*)(DroneSkillProjectile*))(Il2CppBase() + 0x51E8680))(this);
	}

};

}

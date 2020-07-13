#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentHunterKiller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_HunterKiller"));
	}

	template <typename T = float> T& m_BoostSpeed() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_BoostAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_TurnAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = float> T& m_CruiseHeight() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = float> T& m_ForwardFov() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = float> T& m_ForwardDist() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = float> T& m_LookDownFov() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& m_DetectDist() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = float> T& m_InitStartTime() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = float> T& m_MaxTrackAngle() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = Il2CppVector3> T& m_BoundBox() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentHunterKiller*, uintptr_t, bool))(Il2CppBase() + 0x23DA588))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentHunterKiller*))(Il2CppBase() + 0x23DA6BC))(this);
	}
	template <typename T = uintptr_t> T CreateThrowLineSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel) {
		return ((T (*)(WeaponFireComponentHunterKiller*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x23DA778))(this, data, inInitLoc, inInitVel);
	}
	template <typename T = void> T GetExplosionInfo(Il2CppVector3 startPos, Il2CppVector3 velocity, uintptr_t projectileData, uintptr_t* eplosionTime, uintptr_t* targetPos) {
		return ((T (*)(WeaponFireComponentHunterKiller*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23DA868))(this, startPos, velocity, projectileData, eplosionTime, targetPos);
	}
	template <typename T = bool> T HasStreakSkill() {
		return ((T (*)(WeaponFireComponentHunterKiller*))(Il2CppBase() + 0x23DA8AC))(this);
	}
	template <typename T = bool> T AmmoCanFire() {
		return ((T (*)(WeaponFireComponentHunterKiller*))(Il2CppBase() + 0x23DAACC))(this);
	}
	template <typename T = bool> T HasAmmo() {
		return ((T (*)(WeaponFireComponentHunterKiller*))(Il2CppBase() + 0x23DAB94))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammoCount) {
		return ((T (*)(WeaponFireComponentHunterKiller*, int32_t))(Il2CppBase() + 0x23DAC60))(this, ammoCount);
	}

};

}

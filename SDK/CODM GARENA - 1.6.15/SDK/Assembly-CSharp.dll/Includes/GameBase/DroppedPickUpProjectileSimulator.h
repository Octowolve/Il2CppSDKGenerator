#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DroppedPickUpProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DroppedPickUpProjectileSimulator"));
	}

	template <typename T = float> static T& FIX_UPDATE_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_CurrentPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_CurrentVelocity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_CostTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_LastTickHitNormal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_LastTickHitPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& bNeedSplitOnWall() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& bLastTickHit() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = Il2CppVector3> T& m_OriginalStartPosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> static T& MAX_POSITION_DIVIDE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDroppedPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetDroppedPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppVector3> T get_CurrentPosition() {
		return ((T (*)(DroppedPickUpProjectileSimulator*))(Il2CppBase() + 0x40F3250))(this);
	}
	template <typename T = float> T get_CostTime() {
		return ((T (*)(DroppedPickUpProjectileSimulator*))(Il2CppBase() + 0x40F3840))(this);
	}
	template <typename T = Il2CppVector3> static T GetDroppedPosition(Il2CppVector3 inStartPosition, Il2CppVector3 inStartVelocity, float inGravityScale, uintptr_t outCostTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x40F34B8))(0, inStartPosition, inStartVelocity, inGravityScale, outCostTime);
	}
	template <typename T = Il2CppVector3> T GetDroppedPosition_1(uintptr_t outCostTime) {
		return ((T (*)(DroppedPickUpProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x40F3848))(this, outCostTime);
	}
	template <typename T = bool> T SimulateTick(bool bOnceTick) {
		return ((T (*)(DroppedPickUpProjectileSimulator*, bool))(Il2CppBase() + 0x40F29B4))(this, bOnceTick);
	}

};

}

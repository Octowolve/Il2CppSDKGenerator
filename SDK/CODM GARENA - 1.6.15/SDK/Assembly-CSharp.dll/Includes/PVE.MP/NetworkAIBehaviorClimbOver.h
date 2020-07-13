#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehaviorClimbOver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehaviorClimbOver"));
	}

	template <typename T = Il2CppVector3> T& climbBeginPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& climbBeginTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& climbLandPoint() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& climbLandTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& climbEndPoint() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& climbEndTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& climbHeightOffset() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& climbAnimHeight() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& climbAnimName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& climbeHighAnimName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& climbPrepTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& climbTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& pendingMoveDuration() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& pendingMovePosition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_ClimbSpot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitClimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BehaviorMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFixedAnimMoveSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T InitClimb() {
		return ((T (*)(NetworkAIBehaviorClimbOver*))(Il2CppBase() + 0x4CC1FAC))(this);
	}
	template <typename T = uintptr_t> T BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorClimbOver*))(Il2CppBase() + 0x4CC226C))(this);
	}
	template <typename T = void> T OnStop() {
		return ((T (*)(NetworkAIBehaviorClimbOver*))(Il2CppBase() + 0x4CC2354))(this);
	}
	template <typename T = void> T SetFixedAnimMoveSpeed(float speed) {
		return ((T (*)(NetworkAIBehaviorClimbOver*, float))(Il2CppBase() + 0x4CC2420))(this, speed);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAIBehaviorClimbOver*, float))(Il2CppBase() + 0x4CC25A4))(this, deltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_BehaviorMain() {
		return ((T (*)(NetworkAIBehaviorClimbOver*))(Il2CppBase() + 0x4CC2CE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStop() {
		return ((T (*)(NetworkAIBehaviorClimbOver*))(Il2CppBase() + 0x4CC2CF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(NetworkAIBehaviorClimbOver*, float))(Il2CppBase() + 0x4CC2CF8))(this, P0);
	}

};

}

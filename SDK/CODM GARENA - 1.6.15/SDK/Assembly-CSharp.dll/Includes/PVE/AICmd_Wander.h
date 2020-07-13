#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdWander
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_Wander"));
	}

	template <typename T = float> T& m_OuterRadius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_InnerRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& MovingGoalsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MovingGoals() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_DestOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_NextGoalIdx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_CurrentMoveGoal() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_CenterPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_NeedCalcMoveGoal() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateAMoveTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllWanderBehaviours() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReachedDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdWander*, uintptr_t))(Il2CppBase() + 0x49A42D4))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A45DC))(this);
	}
	template <typename T = Il2CppVector3> T GenerateAMoveTarget() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A47AC))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A49CC))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdWander*, uintptr_t))(Il2CppBase() + 0x49A4C4C))(this, newCmd);
	}
	template <typename T = void> T StopAllWanderBehaviours() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A4B70))(this);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdWander*, Il2CppString*))(Il2CppBase() + 0x49A4DFC))(this, oldCmdName);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A4EB8))(this);
	}
	template <typename T = Il2CppVector3> T GetNextDestination() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A4FA0))(this);
	}
	template <typename T = bool> T HasReachedDestination() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A5118))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A52A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A52A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdWander*, uintptr_t))(Il2CppBase() + 0x49A52A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdWander*, Il2CppString*))(Il2CppBase() + 0x49A52AC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdWander*))(Il2CppBase() + 0x49A52B0))(this);
	}

};

}

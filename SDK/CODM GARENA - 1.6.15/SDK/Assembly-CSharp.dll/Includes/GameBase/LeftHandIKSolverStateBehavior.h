#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LeftHandIKSolverStateBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LeftHandIKSolverStateBehavior"));
	}

	template <typename T = bool> T& EnterStateTrigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& EnterStateLeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& UpdateStateTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UpdateStateLeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DelayTriggerPercent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& DelayTriggerAtExit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ExitStateTrigger() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& ExitStateLeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExitExcludeCurrentStateNames() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_CheckDelayTrigger() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandHoldType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetLeftHandHoldType(uintptr_t animator, int32_t nameHash, int32_t layerIndex, int32_t leftHandHoldType) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2E2DE54))(this, animator, nameHash, layerIndex, leftHandHoldType);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2DFE0))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2E194))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2E4A8))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2E6B4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2E724))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUpdate(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(LeftHandIKSolverStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2E2E794))(this, P0, P1, P2);
	}

};

}

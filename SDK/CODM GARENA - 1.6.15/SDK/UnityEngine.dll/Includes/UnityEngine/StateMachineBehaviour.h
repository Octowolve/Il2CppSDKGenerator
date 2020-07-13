#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StateMachineBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StateMachineBehaviour"));
	}


	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E88730))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E88734))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E88738))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateMove(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E8873C))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateIK(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4E88740))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateMachineEnter(uintptr_t animator, int32_t stateMachinePathHash) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, int32_t))(Il2CppBase() + 0x4E88744))(this, animator, stateMachinePathHash);
	}
	template <typename T = void> T OnStateMachineExit(uintptr_t animator, int32_t stateMachinePathHash) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, int32_t))(Il2CppBase() + 0x4E88748))(this, animator, stateMachinePathHash);
	}
	template <typename T = void> T OnStateEnter_1(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E8874C))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T OnStateUpdate_1(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E88750))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T OnStateExit_1(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E88754))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T OnStateMove_1(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E88758))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T OnStateIK_1(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E8875C))(this, animator, stateInfo, layerIndex, controller);
	}
	template <typename T = void> T OnStateMachineEnter_1(uintptr_t animator, int32_t stateMachinePathHash, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E88760))(this, animator, stateMachinePathHash, controller);
	}
	template <typename T = void> T OnStateMachineExit_1(uintptr_t animator, int32_t stateMachinePathHash, uintptr_t controller) {
		return ((T (*)(StateMachineBehaviour*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4E88764))(this, animator, stateMachinePathHash, controller);
	}

};

}

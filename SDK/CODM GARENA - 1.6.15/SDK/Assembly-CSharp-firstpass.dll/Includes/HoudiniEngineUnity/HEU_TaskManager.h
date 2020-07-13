#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUTaskManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_TaskManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& _tasks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _pendingAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _pendingRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Update() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BF0F5C))(0);
	}
	template <typename T = uintptr_t> static T GetTask(uintptr_t taskGuid) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BF0F60))(0, taskGuid);
	}
	template <typename T = void> static T AddTask(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BF1214))(0, task);
	}
	template <typename T = void> static T KillTask(uintptr_t task, bool bRemove) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2BF140C))(0, task, bRemove);
	}
	template <typename T = void> static T KillTask_1(uintptr_t taskGuid, bool bRemove) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2BF1768))(0, taskGuid, bRemove);
	}
	template <typename T = void> static T RemoveTask(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BF1580))(0, task);
	}
	template <typename T = void> static T ExecuteTask(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BF187C))(0, task);
	}
	template <typename T = void> static T CompleteTask(uintptr_t task, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BF18C8))(0, task, result);
	}
	template <typename T = void> static T InternalCompleteTask(uintptr_t task) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BF18FC))(0, task);
	}

};

}

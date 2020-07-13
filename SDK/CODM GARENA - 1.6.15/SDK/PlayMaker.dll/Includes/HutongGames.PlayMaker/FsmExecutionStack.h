#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmExecutionStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmExecutionStack"));
	}

	template <typename T = void*> static T& fsmExecutionStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxStackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_ExecutingFsm() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEA164))(0);
	}
	template <typename T = uintptr_t> static T get_ExecutingState() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEC064))(0);
	}
	template <typename T = Il2CppString*> static T get_ExecutingStateName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0C1DC))(0);
	}
	template <typename T = uintptr_t> static T get_ExecutingAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEC158))(0);
	}
	template <typename T = int32_t> static T get_StackCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF7DEC))(0);
	}
	template <typename T = int32_t> static T get_MaxStackCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0C2F0))(0);
	}
	template <typename T = void> static T set_MaxStackCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2F0C3A0))(0, value);
	}
	template <typename T = void> static T PushFsm(uintptr_t executingFsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF7ED0))(0, executingFsm);
	}
	template <typename T = void> static T PopFsm() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EF808C))(0);
	}
	template <typename T = Il2CppString*> static T GetDebugString() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0C454))(0);
	}

};

}

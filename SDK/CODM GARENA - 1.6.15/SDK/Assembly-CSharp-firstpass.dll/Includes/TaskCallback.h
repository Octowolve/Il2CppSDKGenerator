#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TaskCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "TaskCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t task) {
		return ((T (*)(TaskCallback*, uintptr_t))(Il2CppBase() + 0x2BF0D94))(this, task);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t task, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TaskCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BF0E2C))(this, task, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TaskCallback*, uintptr_t))(Il2CppBase() + 0x2BF0E58))(this, result);
	}

};

}

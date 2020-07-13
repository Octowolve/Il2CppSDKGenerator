#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TaskCompletionCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TaskCompletionCallbackFunc"));
	}


	template <typename T = void> T Invoke(int32_t requestType, bool success) {
		return ((T (*)(TaskCompletionCallbackFunc*, int32_t, bool))(Il2CppBase() + 0x27B9000))(this, requestType, success);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t requestType, bool success, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TaskCompletionCallbackFunc*, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B9094))(this, requestType, success, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TaskCompletionCallbackFunc*, uintptr_t))(Il2CppBase() + 0x27B9174))(this, result);
	}

};

}

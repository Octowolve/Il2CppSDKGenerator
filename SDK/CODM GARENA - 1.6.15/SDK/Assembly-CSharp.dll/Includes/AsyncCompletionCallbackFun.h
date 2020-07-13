#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncCompletionCallbackFun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AsyncCompletionCallbackFun"));
	}


	template <typename T = void> T Invoke(int32_t weaponId) {
		return ((T (*)(AsyncCompletionCallbackFun*, int32_t))(Il2CppBase() + 0x240CD24))(this, weaponId);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t weaponId, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AsyncCompletionCallbackFun*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x240E55C))(this, weaponId, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AsyncCompletionCallbackFun*, uintptr_t))(Il2CppBase() + 0x240E618))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnLoginFinishCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnLoginFinishCallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, int32_t innerResult) {
		return ((T (*)(OnLoginFinishCallbackHandler*, uintptr_t, int32_t))(Il2CppBase() + 0x1623058))(this, result, innerResult);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, int32_t innerResult, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLoginFinishCallbackHandler*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16230EC))(this, result, innerResult, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLoginFinishCallbackHandler*, uintptr_t))(Il2CppBase() + 0x16231CC))(this, result);
	}

};

}

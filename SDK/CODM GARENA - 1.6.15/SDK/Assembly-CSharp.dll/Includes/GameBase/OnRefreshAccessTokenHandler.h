#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnRefreshAccessTokenHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnRefreshAccessTokenHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, int32_t innerResult) {
		return ((T (*)(OnRefreshAccessTokenHandler*, uintptr_t, int32_t))(Il2CppBase() + 0x16235E8))(this, result, innerResult);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, int32_t innerResult, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnRefreshAccessTokenHandler*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x162367C))(this, result, innerResult, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnRefreshAccessTokenHandler*, uintptr_t))(Il2CppBase() + 0x162375C))(this, result);
	}

};

}

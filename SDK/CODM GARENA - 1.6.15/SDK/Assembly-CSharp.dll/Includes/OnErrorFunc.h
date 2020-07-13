#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnErrorFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnErrorFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uintptr_t curVersionStage, uint32_t errorCode) {
		return ((T (*)(OnErrorFunc*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x4990918))(this, callback, curVersionStage, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t curVersionStage, uint32_t errorCode, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnErrorFunc*, uintptr_t, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49909C0))(this, callback, curVersionStage, errorCode, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnErrorFunc*, uintptr_t))(Il2CppBase() + 0x4990ABC))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadSuccessFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadSuccessFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint32_t taskId) {
		return ((T (*)(OnDownloadSuccessFunc*, uintptr_t, uint32_t))(Il2CppBase() + 0x4987F34))(this, callback, taskId);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint32_t taskId, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadSuccessFunc*, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4987FC8))(this, callback, taskId, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadSuccessFunc*, uintptr_t))(Il2CppBase() + 0x49880A8))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadErrorFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadErrorFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint32_t taskId, uint32_t errorCode) {
		return ((T (*)(OnDownloadErrorFunc*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x4987ACC))(this, callback, taskId, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint32_t taskId, uint32_t errorCode, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadErrorFunc*, uintptr_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4987B74))(this, callback, taskId, errorCode, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadErrorFunc*, uintptr_t))(Il2CppBase() + 0x4987C64))(this, result);
	}

};

}

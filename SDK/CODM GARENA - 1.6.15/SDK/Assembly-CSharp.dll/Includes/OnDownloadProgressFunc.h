#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadProgressFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadProgressFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(OnDownloadProgressFunc*, uintptr_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x499332C))(this, callback, taskId, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint64_t taskId, uint64_t nowSize, uint64_t totalSize, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadProgressFunc*, uintptr_t, uint64_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4993440))(this, callback, taskId, nowSize, totalSize, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadProgressFunc*, uintptr_t))(Il2CppBase() + 0x4993560))(this, result);
	}

};

}

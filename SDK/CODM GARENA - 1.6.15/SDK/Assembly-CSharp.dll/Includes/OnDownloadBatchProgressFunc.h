#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadBatchProgressFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadBatchProgressFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(OnDownloadBatchProgressFunc*, uintptr_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4992DEC))(this, callback, batchTaskId, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadBatchProgressFunc*, uintptr_t, uint64_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4992F00))(this, callback, batchTaskId, nowSize, totalSize, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadBatchProgressFunc*, uintptr_t))(Il2CppBase() + 0x4993020))(this, result);
	}

};

}

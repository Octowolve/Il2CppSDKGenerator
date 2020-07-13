#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TaskDownloadingCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TaskDownloadingCallbackFunc"));
	}


	template <typename T = void> T Invoke(int32_t requestType, uint64_t nowSize, uint64_t totalSize, uint64_t wholeSize) {
		return ((T (*)(TaskDownloadingCallbackFunc*, int32_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x27B91A4))(this, requestType, nowSize, totalSize, wholeSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t requestType, uint64_t nowSize, uint64_t totalSize, uint64_t wholeSize, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TaskDownloadingCallbackFunc*, int32_t, uint64_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B92B8))(this, requestType, nowSize, totalSize, wholeSize, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TaskDownloadingCallbackFunc*, uintptr_t))(Il2CppBase() + 0x27B93D8))(this, result);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadReturnFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadReturnFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(OnDownloadReturnFunc*, uintptr_t, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x49935A8))(this, callback, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadReturnFunc*, uintptr_t, uint64_t, uint32_t, bool, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x499367C))(this, callback, taskId, fileid, isSuccess, errorCode, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadReturnFunc*, uintptr_t))(Il2CppBase() + 0x49937C8))(this, result);
	}

};

}

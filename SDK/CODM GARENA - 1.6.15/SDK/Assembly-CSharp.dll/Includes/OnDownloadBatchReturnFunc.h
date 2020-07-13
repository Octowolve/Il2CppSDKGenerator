#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDownloadBatchReturnFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDownloadBatchReturnFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uint32_t batchType, Il2CppString* strRet) {
		return ((T (*)(OnDownloadBatchReturnFunc*, uintptr_t, uint64_t, uint32_t, bool, uint32_t, uint32_t, Il2CppString*))(Il2CppBase() + 0x499308C))(this, callback, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uint32_t batchType, Il2CppString* strRet, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnDownloadBatchReturnFunc*, uintptr_t, uint64_t, uint32_t, bool, uint32_t, uint32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49931B0))(this, callback, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDownloadBatchReturnFunc*, uintptr_t))(Il2CppBase() + 0x4993310))(this, result);
	}

};

}

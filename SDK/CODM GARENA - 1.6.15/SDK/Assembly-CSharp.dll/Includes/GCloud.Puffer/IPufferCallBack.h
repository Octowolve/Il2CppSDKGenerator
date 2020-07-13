#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class IPufferCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "IPufferCallBack"));
	}


	template <typename T = void> T OnInitReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IPufferCallBack*, bool, uint32_t))(Il2CppBase() + 0x0))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnInitProgress(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IPufferCallBack*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IPufferCallBack*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x0))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(IPufferCallBack*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, taskId, nowSize, totalSize);
	}
	template <typename T = void> T OnRestoreReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IPufferCallBack*, bool, uint32_t))(Il2CppBase() + 0x0))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnRestoreProgress(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IPufferCallBack*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnDownloadBatchReturn(uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uintptr_t batchType, Il2CppString* strRet) {
		return ((T (*)(IPufferCallBack*, uint64_t, uint32_t, bool, uint32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = void> T OnDownloadBatchProgress(uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(IPufferCallBack*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, batchTaskId, nowSize, totalSize);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobilePufferCallbackInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobilePufferCallbackInterface"));
	}


	template <typename T = void> T OnPufferInitReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, bool, uint32_t))(Il2CppBase() + 0x0))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferInitProgress(uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x0))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, taskId, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferRestoreReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, bool, uint32_t))(Il2CppBase() + 0x0))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferRestoreProgress(uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferDownloadBatchReturn(uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uint32_t batchType, Il2CppString* strRet) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint64_t, uint32_t, bool, uint32_t, uint32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = void> T OnPufferDownloadBatchProgress(uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(IIPSMobilePufferCallbackInterface*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, batchTaskId, nowSize, totalSize);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSPufferPluginCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSPufferPluginCallBack"));
	}

	template <typename T = uintptr_t> T& mCallBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pManagedObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& mImpCB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCppPufferCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteCppVersionCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadBatchReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadBatchProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> static T CreatePufferCallBack(uintptr_t onInitReturnFunc, uintptr_t onInitProgresFunc, uintptr_t onDownloadReturnFunc, uintptr_t onDownloadProgressFunc, uintptr_t onRestoreReturnFunc, uintptr_t onRestoreProgresFunc, uintptr_t onDownloadBatchReturnFunc, uintptr_t onDownloadBatchProgressFunc, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49929FC))(0, onInitReturnFunc, onInitProgresFunc, onDownloadReturnFunc, onDownloadProgressFunc, onRestoreReturnFunc, onRestoreProgresFunc, onDownloadBatchReturnFunc, onDownloadBatchProgressFunc, callback);
	}
	template <typename T = void> static T DestroyPufferCallBack(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4992B78))(0, callback);
	}
	template <typename T = uintptr_t> static T GetPufferCallBackGCHandle(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4992C58))(0, callback);
	}
	template <typename T = void> T CreateCppPufferCallBack() {
		return ((T (*)(IIPSPufferPluginCallBack*))(Il2CppBase() + 0x498BD68))(this);
	}
	template <typename T = void> T DeleteCppVersionCallBack() {
		return ((T (*)(IIPSPufferPluginCallBack*))(Il2CppBase() + 0x498C6D8))(this);
	}
	template <typename T = void> static T OnInitReturn(uintptr_t callback, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(void *, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x4991478))(0, callback, isSuccess, errorCode);
	}
	template <typename T = void> static T OnInitProgress(uintptr_t callback, uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x49916FC))(0, callback, stage, nowSize, totalSize);
	}
	template <typename T = void> static T OnDownloadReturn(uintptr_t callback, uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x49919B0))(0, callback, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> static T OnDownloadProgress(uintptr_t callback, uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4991C80))(0, callback, taskId, nowSize, totalSize);
	}
	template <typename T = void> static T OnRestoreReturn(uintptr_t callback, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(void *, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x4991F44))(0, callback, isSuccess, errorCode);
	}
	template <typename T = void> static T OnRestoreProgress(uintptr_t callback, uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x49921C8))(0, callback, stage, nowSize, totalSize);
	}
	template <typename T = void> static T OnDownloadBatchReturn(uintptr_t callback, uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uint32_t batchType, Il2CppString* strRet) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t, bool, uint32_t, uint32_t, Il2CppString*))(Il2CppBase() + 0x4992490))(0, callback, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = void> static T OnDownloadBatchProgress(uintptr_t callback, uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4992794))(0, callback, batchTaskId, nowSize, totalSize);
	}

};

}

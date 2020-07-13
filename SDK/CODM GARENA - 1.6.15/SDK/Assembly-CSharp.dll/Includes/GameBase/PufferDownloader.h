#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PufferDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PufferDownloader"));
	}

	template <typename T = uint32_t> static T& PufferRes_maxDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& PufferRes_maxDownTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint32_t> static T& PufferRes_maxDownloadsPerTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& EnableTick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_SystemInitedSuccessful() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& m_pufferResManager() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DownloadRequestList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ResPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& needRetryInitPuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& retryNeedWaitTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& currentWaitTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _openPufferRetryInit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InitCallBackList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_InitProgressCallBackFunc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_moduleTaskCompletionCBFunc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_moduleTaskDownloadingCBFunc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetryInitPuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPufferServerConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePufferResManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadSingleDynamicType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Puffer_IPufferCallBack_OnRestoreReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Puffer_IPufferCallBack_OnRestoreProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Puffer_IPufferCallBack_OnDownloadBatchReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GCloud_Puffer_IPufferCallBack_OnDownloadBatchProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportPuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSystemInitedSuccessful() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInitProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInitProgressCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModuleTaskDownloadingCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearModuleTaskDownloadingCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModuleTaskCompletionCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearModuleTaskCompletionCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC1BA4))(this);
	}
	template <typename T = void> T StartSystem(bool openPufferRetryInitInter) {
		return ((T (*)(PufferDownloader*, bool))(Il2CppBase() + 0x2DC1D28))(this, openPufferRetryInitInter);
	}
	template <typename T = void> T RetryInitPuffer() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC2B70))(this);
	}
	template <typename T = uintptr_t> T GetPufferServerConfig() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC23B8))(this);
	}
	template <typename T = void> T CreatePufferResManager() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC220C))(this);
	}
	template <typename T = void> T StopSystem() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC20D4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PufferDownloader*, float))(Il2CppBase() + 0x2DC3130))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC32EC))(this);
	}
	template <typename T = void> T OnInitReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferDownloader*, bool, uint32_t))(Il2CppBase() + 0x2DC33C0))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnInitProgress(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(PufferDownloader*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2DC3924))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferDownloader*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x2DC3AE0))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(PufferDownloader*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x2DC3E50))(this, taskId, nowSize, totalSize);
	}
	template <typename T = bool> T IsReady(int32_t dynamicType, uintptr_t* totalSize, uintptr_t* wholeSize) {
		return ((T (*)(PufferDownloader*, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2DC43C0))(this, dynamicType, totalSize, wholeSize);
	}
	template <typename T = uintptr_t> T DownloadSingleDynamicType(int32_t dynamicType, uintptr_t completionCallback, uintptr_t progressCallback) {
		return ((T (*)(PufferDownloader*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC4824))(this, dynamicType, completionCallback, progressCallback);
	}
	template <typename T = void> T Cancel(int32_t dynamicType) {
		return ((T (*)(PufferDownloader*, int32_t))(Il2CppBase() + 0x2DC5510))(this, dynamicType);
	}
	template <typename T = void> T CancelAll() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC2D64))(this);
	}
	template <typename T = void> T GCloud_Puffer_IPufferCallBack_OnRestoreReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferDownloader*, bool, uint32_t))(Il2CppBase() + 0x2DC58B4))(this, isSuccess, errorCode);
	}
	template <typename T = void> T GCloud_Puffer_IPufferCallBack_OnRestoreProgress(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(PufferDownloader*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2DC5998))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T GCloud_Puffer_IPufferCallBack_OnDownloadBatchReturn(uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uintptr_t batchType, Il2CppString* strRet) {
		return ((T (*)(PufferDownloader*, uint64_t, uint32_t, bool, uint32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2DC5A84))(this, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = void> T GCloud_Puffer_IPufferCallBack_OnDownloadBatchProgress(uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(PufferDownloader*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x2DC5B8C))(this, batchTaskId, nowSize, totalSize);
	}
	template <typename T = bool> T SupportPuffer() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC2004))(this);
	}
	template <typename T = bool> T IsSystemInitedSuccessful() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC5C90))(this);
	}
	template <typename T = void> T AddInitCallback(uintptr_t callback) {
		return ((T (*)(PufferDownloader*, uintptr_t))(Il2CppBase() + 0x2DC5D68))(this, callback);
	}
	template <typename T = void> T RemoveInitCallback(uintptr_t callback) {
		return ((T (*)(PufferDownloader*, uintptr_t))(Il2CppBase() + 0x2DC5EB0))(this, callback);
	}
	template <typename T = void> T SetInitProgressCallBack(uintptr_t callback) {
		return ((T (*)(PufferDownloader*, uintptr_t))(Il2CppBase() + 0x2DC5FF8))(this, callback);
	}
	template <typename T = void> T ClearInitProgressCallBack() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC60D0))(this);
	}
	template <typename T = void> T SetModuleTaskDownloadingCallBack(uintptr_t callback) {
		return ((T (*)(PufferDownloader*, uintptr_t))(Il2CppBase() + 0x2DC61A4))(this, callback);
	}
	template <typename T = void> T ClearModuleTaskDownloadingCallBack() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC627C))(this);
	}
	template <typename T = void> T SetModuleTaskCompletionCallBack(uintptr_t callback) {
		return ((T (*)(PufferDownloader*, uintptr_t))(Il2CppBase() + 0x2DC6350))(this, callback);
	}
	template <typename T = void> T ClearModuleTaskCompletionCallBack() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC6428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC65A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PufferDownloader*, float))(Il2CppBase() + 0x2DC65A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PufferDownloader*))(Il2CppBase() + 0x2DC65B0))(this);
	}

};

}

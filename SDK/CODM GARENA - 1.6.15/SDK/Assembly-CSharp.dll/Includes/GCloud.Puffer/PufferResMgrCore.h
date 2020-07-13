#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class PufferResMgrCore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "PufferResMgrCore"));
	}

	template <typename T = uintptr_t> T& pufferCB() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pufferPlugin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInitResManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFileReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileSizeCompressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRestoreFiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDLMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDLMaxTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTaskPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBatchDirFileCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadBatchDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadBatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferInitReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferInitProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferDownloadReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferRestoreReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferRestoreProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferDownloadBatchReturn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPufferDownloadBatchProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = bool> T InitResManager(uintptr_t config, uintptr_t cb) {
		return ((T (*)(PufferResMgrCore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4431CA8))(this, config, cb);
	}
	template <typename T = void> T UnInitResManager() {
		return ((T (*)(PufferResMgrCore*))(Il2CppBase() + 0x4432580))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PufferResMgrCore*))(Il2CppBase() + 0x44326BC))(this);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* filePath) {
		return ((T (*)(PufferResMgrCore*, Il2CppString*))(Il2CppBase() + 0x44327E0))(this, filePath);
	}
	template <typename T = bool> T IsFileReady(uint32_t fileId) {
		return ((T (*)(PufferResMgrCore*, uint32_t))(Il2CppBase() + 0x4432918))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileSizeCompressed(uint32_t fileId) {
		return ((T (*)(PufferResMgrCore*, uint32_t))(Il2CppBase() + 0x4432A4C))(this, fileId);
	}
	template <typename T = uint64_t> T DownloadFile(uint32_t fileId, bool forceDownload, uint32_t priority) {
		return ((T (*)(PufferResMgrCore*, uint32_t, bool, uint32_t))(Il2CppBase() + 0x4432B84))(this, fileId, forceDownload, priority);
	}
	template <typename T = uint64_t> T StartRestoreFiles(uint32_t priority) {
		return ((T (*)(PufferResMgrCore*, uint32_t))(Il2CppBase() + 0x4432CF0))(this, priority);
	}
	template <typename T = bool> T RemoveTask(uint64_t taskId) {
		return ((T (*)(PufferResMgrCore*, uint64_t))(Il2CppBase() + 0x4432E2C))(this, taskId);
	}
	template <typename T = bool> T SetDLMaxSpeed(uint64_t maxSpeed) {
		return ((T (*)(PufferResMgrCore*, uint64_t))(Il2CppBase() + 0x4432F7C))(this, maxSpeed);
	}
	template <typename T = bool> T SetDLMaxTask(uint32_t maxTask) {
		return ((T (*)(PufferResMgrCore*, uint32_t))(Il2CppBase() + 0x44330CC))(this, maxTask);
	}
	template <typename T = bool> T SetTaskPriority(uint64_t taskId, uint32_t priority) {
		return ((T (*)(PufferResMgrCore*, uint64_t, uint32_t))(Il2CppBase() + 0x4433200))(this, taskId, priority);
	}
	template <typename T = double> T GetCurrentSpeed() {
		return ((T (*)(PufferResMgrCore*))(Il2CppBase() + 0x443335C))(this);
	}
	template <typename T = bool> T GetBatchDirFileCount(Il2CppString* dir, bool blSubDir, uintptr_t nTotal) {
		return ((T (*)(PufferResMgrCore*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x443348C))(this, dir, blSubDir, nTotal);
	}
	template <typename T = uint64_t> T DownloadBatchDir(Il2CppString* dir, bool blSubDir, bool forceSync, uint32_t priority) {
		return ((T (*)(PufferResMgrCore*, Il2CppString*, bool, bool, uint32_t))(Il2CppBase() + 0x44335E8))(this, dir, blSubDir, forceSync, priority);
	}
	template <typename T = uint64_t> T DownloadBatchList(Il2CppList<Il2CppString*>* lst, bool forceSync, uint32_t priority) {
		return ((T (*)(PufferResMgrCore*, Il2CppList<Il2CppString*>*, bool, uint32_t))(Il2CppBase() + 0x443375C))(this, lst, forceSync, priority);
	}
	template <typename T = bool> T PauseTask(uint64_t taskId) {
		return ((T (*)(PufferResMgrCore*, uint64_t))(Il2CppBase() + 0x4433AE8))(this, taskId);
	}
	template <typename T = bool> T ResumeTask(uint64_t taskId) {
		return ((T (*)(PufferResMgrCore*, uint64_t))(Il2CppBase() + 0x4433C38))(this, taskId);
	}
	template <typename T = void> T OnPufferInitReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferResMgrCore*, bool, uint32_t))(Il2CppBase() + 0x4433D88))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferInitProgress(uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(PufferResMgrCore*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x4433ED8))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferDownloadReturn(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferResMgrCore*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x4434030))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferDownloadProgress(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(PufferResMgrCore*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x44341A4))(this, taskId, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferRestoreReturn(bool isSuccess, uint32_t errorCode) {
		return ((T (*)(PufferResMgrCore*, bool, uint32_t))(Il2CppBase() + 0x4434320))(this, isSuccess, errorCode);
	}
	template <typename T = void> T OnPufferRestoreProgress(uint32_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(PufferResMgrCore*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x4434470))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnPufferDownloadBatchReturn(uint64_t batchTaskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uint32_t batchType, Il2CppString* strRet) {
		return ((T (*)(PufferResMgrCore*, uint64_t, uint32_t, bool, uint32_t, uint32_t, Il2CppString*))(Il2CppBase() + 0x44345C8))(this, batchTaskId, fileid, isSuccess, errorCode, batchType, strRet);
	}
	template <typename T = void> T OnPufferDownloadBatchProgress(uint64_t batchTaskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(PufferResMgrCore*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4434754))(this, batchTaskId, nowSize, totalSize);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobilePufferPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobilePufferPlugin"));
	}

	template <typename T = uintptr_t> T& mCppPufferMgr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCppPufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryCppPufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginUninit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginGetFileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginIsFileReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginGetFileSizeCompressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginDownloadFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginStartRestoreFiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginRemoveTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginSetImmDLMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginSetImmDLMaxTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginSetTaskPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginGetCurrentSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginGetBatchDirFileCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginDownloadBatchDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginPrepare4DownloadBatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginAddBatchListItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginDownloadBatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginPauseTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferPluginResumeTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> static T CreatePufferManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x498A514))(0);
	}
	template <typename T = void> static T DestoryPufferManager(uintptr_t pufferMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498A5E4))(0, pufferMgr);
	}
	template <typename T = bool> static T InitPufferManager(uintptr_t pufferMgr, uintptr_t callback, uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x498A6C4))(0, pufferMgr, callback, bufferSize, configBuffer);
	}
	template <typename T = void> static T UninitPufferManager(uintptr_t pufferMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498A7C0))(0, pufferMgr);
	}
	template <typename T = void> static T PufferManagerUpdate(uintptr_t pufferMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498A8A0))(0, pufferMgr);
	}
	template <typename T = uint32_t> static T PufferManagerGetFileId(uintptr_t pufferMgr, Il2CppString* szFileName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498A980))(0, pufferMgr, szFileName);
	}
	template <typename T = bool> static T PufferManagerIsFileReady(uintptr_t pufferMgr, uint32_t fileID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498AA94))(0, pufferMgr, fileID);
	}
	template <typename T = uint32_t> static T PufferManagerGetFileSizeCompressed(uintptr_t pufferMgr, uint32_t fileId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498AB84))(0, pufferMgr, fileId);
	}
	template <typename T = uint64_t> static T PufferManagerDownloadFile(uintptr_t pufferMgr, uint32_t fileID, bool forceSync, uint32_t priority) {
		return ((T (*)(void *, uintptr_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x498AC6C))(0, pufferMgr, fileID, forceSync, priority);
	}
	template <typename T = uint64_t> static T PufferManagerStartRestoreFiles(uintptr_t pufferMgr, uint32_t priority) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498AD60))(0, pufferMgr, priority);
	}
	template <typename T = bool> static T PufferManagerRemoveTask(uintptr_t pufferMgr, uint64_t taskID) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x498AE48))(0, pufferMgr, taskID);
	}
	template <typename T = bool> static T PufferManagerSetImmDLMaxSpeed(uintptr_t pufferMgr, uint64_t maxSpeed) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x498AF40))(0, pufferMgr, maxSpeed);
	}
	template <typename T = bool> static T PufferManagerSetImmDLMaxTask(uintptr_t pufferMgr, uint32_t maxTask) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498B038))(0, pufferMgr, maxTask);
	}
	template <typename T = bool> static T PufferManagerSetTaskPriority(uintptr_t pufferMgr, uint64_t taskId, uint32_t priority) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t))(Il2CppBase() + 0x498B128))(0, pufferMgr, taskId, priority);
	}
	template <typename T = double> static T PufferManagerGetCurrentSpeed(uintptr_t pufferMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498B228))(0, pufferMgr);
	}
	template <typename T = bool> static T PufferManagerGetBatchDirFileCount(uintptr_t pufferMgr, Il2CppString* dir, bool blSubDir, uintptr_t nTotal) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x498B308))(0, pufferMgr, dir, blSubDir, nTotal);
	}
	template <typename T = uint64_t> static T PufferManagerDownloadBatchDir(uintptr_t pufferMgr, Il2CppString* dir, bool blSubDir, bool forceSync, uint32_t priority) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, bool, uint32_t))(Il2CppBase() + 0x498B434))(0, pufferMgr, dir, blSubDir, forceSync, priority);
	}
	template <typename T = void> static T PufferManagerPrepare4DownloadBatchList(uintptr_t pufferMgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498B568))(0, pufferMgr);
	}
	template <typename T = bool> static T PufferManagerAddBatchListItem(uintptr_t pufferMgr, uint32_t fileID) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498B648))(0, pufferMgr, fileID);
	}
	template <typename T = uint64_t> static T PufferManagerDownloadBatchList(uintptr_t pufferMgr, bool forceSync, uint32_t priority) {
		return ((T (*)(void *, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x498B738))(0, pufferMgr, forceSync, priority);
	}
	template <typename T = bool> static T PufferManagerPauseTask(uintptr_t pufferMgr, uint64_t taskID) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x498B828))(0, pufferMgr, taskID);
	}
	template <typename T = bool> static T PufferManagerResumeTask(uintptr_t pufferMgr, uint64_t taskID) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x498B920))(0, pufferMgr, taskID);
	}
	template <typename T = void> T CreateCppPufferMgr() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498A1F4))(this);
	}
	template <typename T = void> T DestoryCppPufferMgr() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498A470))(this);
	}
	template <typename T = bool> T PufferPluginInit(uintptr_t cb, Il2CppString* config) {
		return ((T (*)(IIPSMobilePufferPlugin*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498BA18))(this, cb, config);
	}
	template <typename T = void> T PufferPluginUninit() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498C5E0))(this);
	}
	template <typename T = void> T PufferPluginUpdate() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498C878))(this);
	}
	template <typename T = uint32_t> T PufferPluginGetFileId(Il2CppString* filepath) {
		return ((T (*)(IIPSMobilePufferPlugin*, Il2CppString*))(Il2CppBase() + 0x498C958))(this, filepath);
	}
	template <typename T = bool> T PufferPluginIsFileReady(uint32_t fileId) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t))(Il2CppBase() + 0x498CA4C))(this, fileId);
	}
	template <typename T = uint32_t> T PufferPluginGetFileSizeCompressed(uint32_t fileId) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t))(Il2CppBase() + 0x498CB44))(this, fileId);
	}
	template <typename T = uint64_t> T PufferPluginDownloadFile(uint32_t fileId, bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t, bool, uint32_t))(Il2CppBase() + 0x498CC38))(this, fileId, forceSync, priority);
	}
	template <typename T = uint64_t> T PufferPluginStartRestoreFiles(uint32_t priority) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t))(Il2CppBase() + 0x498CD5C))(this, priority);
	}
	template <typename T = bool> T PufferPluginRemoveTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint64_t))(Il2CppBase() + 0x498CE54))(this, taskId);
	}
	template <typename T = bool> T PufferPluginSetImmDLMaxSpeed(uint64_t maxSpeed) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint64_t))(Il2CppBase() + 0x498CF64))(this, maxSpeed);
	}
	template <typename T = bool> T PufferPluginSetImmDLMaxTask(uint32_t maxTask) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t))(Il2CppBase() + 0x498D074))(this, maxTask);
	}
	template <typename T = bool> T PufferPluginSetTaskPriority(uint64_t taskId, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint64_t, uint32_t))(Il2CppBase() + 0x498D16C))(this, taskId, priority);
	}
	template <typename T = double> T PufferPluginGetCurrentSpeed() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498D288))(this);
	}
	template <typename T = bool> T PufferPluginGetBatchDirFileCount(Il2CppString* dir, bool blSubDir, uintptr_t nTotal) {
		return ((T (*)(IIPSMobilePufferPlugin*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x498D374))(this, dir, blSubDir, nTotal);
	}
	template <typename T = uint64_t> T PufferPluginDownloadBatchDir(Il2CppString* dir, bool blSubDir, bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferPlugin*, Il2CppString*, bool, bool, uint32_t))(Il2CppBase() + 0x498D490))(this, dir, blSubDir, forceSync, priority);
	}
	template <typename T = void> T PufferPluginPrepare4DownloadBatchList() {
		return ((T (*)(IIPSMobilePufferPlugin*))(Il2CppBase() + 0x498D5B8))(this);
	}
	template <typename T = bool> T PufferPluginAddBatchListItem(uint32_t fileID) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint32_t))(Il2CppBase() + 0x498D698))(this, fileID);
	}
	template <typename T = uint64_t> T PufferPluginDownloadBatchList(bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferPlugin*, bool, uint32_t))(Il2CppBase() + 0x498D790))(this, forceSync, priority);
	}
	template <typename T = bool> T PufferPluginPauseTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint64_t))(Il2CppBase() + 0x498D8A8))(this, taskId);
	}
	template <typename T = bool> T PufferPluginResumeTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferPlugin*, uint64_t))(Il2CppBase() + 0x498D9B8))(this, taskId);
	}

};

}

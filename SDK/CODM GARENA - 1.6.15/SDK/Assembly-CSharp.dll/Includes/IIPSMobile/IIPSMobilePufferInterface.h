#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobilePufferInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobilePufferInterface"));
	}


	template <typename T = bool> T PufferPluginInit(uintptr_t cb, Il2CppString* config) {
		return ((T (*)(IIPSMobilePufferInterface*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, cb, config);
	}
	template <typename T = void> T PufferPluginUninit() {
		return ((T (*)(IIPSMobilePufferInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PufferPluginUpdate() {
		return ((T (*)(IIPSMobilePufferInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T PufferPluginGetFileId(Il2CppString* filepath) {
		return ((T (*)(IIPSMobilePufferInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, filepath);
	}
	template <typename T = bool> T PufferPluginIsFileReady(uint32_t fileId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint32_t> T PufferPluginGetFileSizeCompressed(uint32_t fileId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint64_t> T PufferPluginDownloadFile(uint32_t fileId, bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t, bool, uint32_t))(Il2CppBase() + 0x0))(this, fileId, forceSync, priority);
	}
	template <typename T = uint64_t> T PufferPluginStartRestoreFiles(uint32_t priority) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t))(Il2CppBase() + 0x0))(this, priority);
	}
	template <typename T = bool> T PufferPluginRemoveTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = bool> T PufferPluginSetImmDLMaxSpeed(uint64_t maxSpeed) {
		return ((T (*)(IIPSMobilePufferInterface*, uint64_t))(Il2CppBase() + 0x0))(this, maxSpeed);
	}
	template <typename T = bool> T PufferPluginSetImmDLMaxTask(uint32_t maxTask) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t))(Il2CppBase() + 0x0))(this, maxTask);
	}
	template <typename T = bool> T PufferPluginSetTaskPriority(uint64_t taskId, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferInterface*, uint64_t, uint32_t))(Il2CppBase() + 0x0))(this, taskId, priority);
	}
	template <typename T = double> T PufferPluginGetCurrentSpeed() {
		return ((T (*)(IIPSMobilePufferInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T PufferPluginGetBatchDirFileCount(Il2CppString* dir, bool blSubDir, uintptr_t nTotal) {
		return ((T (*)(IIPSMobilePufferInterface*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, dir, blSubDir, nTotal);
	}
	template <typename T = uint64_t> T PufferPluginDownloadBatchDir(Il2CppString* dir, bool blSubDir, bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferInterface*, Il2CppString*, bool, bool, uint32_t))(Il2CppBase() + 0x0))(this, dir, blSubDir, forceSync, priority);
	}
	template <typename T = void> T PufferPluginPrepare4DownloadBatchList() {
		return ((T (*)(IIPSMobilePufferInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T PufferPluginAddBatchListItem(uint32_t fileId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint64_t> T PufferPluginDownloadBatchList(bool forceSync, uint32_t priority) {
		return ((T (*)(IIPSMobilePufferInterface*, bool, uint32_t))(Il2CppBase() + 0x0))(this, forceSync, priority);
	}
	template <typename T = bool> T PufferPluginPauseTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = bool> T PufferPluginResumeTask(uint64_t taskId) {
		return ((T (*)(IIPSMobilePufferInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}

};

}

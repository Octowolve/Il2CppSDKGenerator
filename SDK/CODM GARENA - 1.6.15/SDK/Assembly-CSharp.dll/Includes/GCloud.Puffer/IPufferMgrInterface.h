#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class IPufferMgrInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "IPufferMgrInterface"));
	}


	template <typename T = bool> T InitResManager(uintptr_t config, uintptr_t cb) {
		return ((T (*)(IPufferMgrInterface*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, config, cb);
	}
	template <typename T = void> T UnInitResManager() {
		return ((T (*)(IPufferMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IPufferMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* filePath) {
		return ((T (*)(IPufferMgrInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}
	template <typename T = bool> T IsFileReady(uint32_t fileId) {
		return ((T (*)(IPufferMgrInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileSizeCompressed(uint32_t fileId) {
		return ((T (*)(IPufferMgrInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint64_t> T DownloadFile(uint32_t fileId, bool forceDownload, uint32_t priority) {
		return ((T (*)(IPufferMgrInterface*, uint32_t, bool, uint32_t))(Il2CppBase() + 0x0))(this, fileId, forceDownload, priority);
	}
	template <typename T = uint64_t> T StartRestoreFiles(uint32_t priority) {
		return ((T (*)(IPufferMgrInterface*, uint32_t))(Il2CppBase() + 0x0))(this, priority);
	}
	template <typename T = bool> T RemoveTask(uint64_t taskId) {
		return ((T (*)(IPufferMgrInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = bool> T SetDLMaxSpeed(uint64_t maxSpeed) {
		return ((T (*)(IPufferMgrInterface*, uint64_t))(Il2CppBase() + 0x0))(this, maxSpeed);
	}
	template <typename T = bool> T SetDLMaxTask(uint32_t maxTask) {
		return ((T (*)(IPufferMgrInterface*, uint32_t))(Il2CppBase() + 0x0))(this, maxTask);
	}
	template <typename T = bool> T SetTaskPriority(uint64_t taskId, uint32_t priority) {
		return ((T (*)(IPufferMgrInterface*, uint64_t, uint32_t))(Il2CppBase() + 0x0))(this, taskId, priority);
	}
	template <typename T = double> T GetCurrentSpeed() {
		return ((T (*)(IPufferMgrInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T GetBatchDirFileCount(Il2CppString* dir, bool blSubDir, uintptr_t nTotal) {
		return ((T (*)(IPufferMgrInterface*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x0))(this, dir, blSubDir, nTotal);
	}
	template <typename T = uint64_t> T DownloadBatchDir(Il2CppString* dir, bool blSubDir, bool forceSync, uint32_t priority) {
		return ((T (*)(IPufferMgrInterface*, Il2CppString*, bool, bool, uint32_t))(Il2CppBase() + 0x0))(this, dir, blSubDir, forceSync, priority);
	}
	template <typename T = uint64_t> T DownloadBatchList(Il2CppList<Il2CppString*>* lst, bool forceSync, uint32_t priority) {
		return ((T (*)(IPufferMgrInterface*, Il2CppList<Il2CppString*>*, bool, uint32_t))(Il2CppBase() + 0x0))(this, lst, forceSync, priority);
	}
	template <typename T = bool> T PauseTask(uint64_t taskId) {
		return ((T (*)(IPufferMgrInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = bool> T ResumeTask(uint64_t taskId) {
		return ((T (*)(IPufferMgrInterface*, uint64_t))(Il2CppBase() + 0x0))(this, taskId);
	}

};

}

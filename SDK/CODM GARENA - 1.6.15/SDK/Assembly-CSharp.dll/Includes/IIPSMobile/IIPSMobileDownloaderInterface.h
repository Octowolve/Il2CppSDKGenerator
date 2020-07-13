#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDownloaderInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDownloaderInterface"));
	}


	template <typename T = bool> T Init(uintptr_t callback) {
		return ((T (*)(IIPSMobileDownloaderInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = bool> T StartDownload() {
		return ((T (*)(IIPSMobileDownloaderInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T PauseDownload() {
		return ((T (*)(IIPSMobileDownloaderInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T ResumeDownload() {
		return ((T (*)(IIPSMobileDownloaderInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CancelDownload(uint32_t taskId) {
		return ((T (*)(IIPSMobileDownloaderInterface*, uint32_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = uint32_t> T GetDownloadSpeed() {
		return ((T (*)(IIPSMobileDownloaderInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SetDownloadSpeed(uint32_t downloadSpeed) {
		return ((T (*)(IIPSMobileDownloaderInterface*, uint32_t))(Il2CppBase() + 0x0))(this, downloadSpeed);
	}
	template <typename T = bool> T DownloadIfsData(uint32_t fileId, unsigned char priority, uintptr_t taskId) {
		return ((T (*)(IIPSMobileDownloaderInterface*, uint32_t, unsigned char, uintptr_t))(Il2CppBase() + 0x0))(this, fileId, priority, taskId);
	}
	template <typename T = bool> T DownloadLocalData(Il2CppString* downloadUrl, Il2CppString* savePath, unsigned char priority, uintptr_t taskID, bool bDoBrokenResume) {
		return ((T (*)(IIPSMobileDownloaderInterface*, Il2CppString*, Il2CppString*, unsigned char, uintptr_t, bool))(Il2CppBase() + 0x0))(this, downloadUrl, savePath, priority, taskID, bDoBrokenResume);
	}
	template <typename T = bool> T GetDownloadTaskInfo(uint32_t taskId, uintptr_t downloadInfo) {
		return ((T (*)(IIPSMobileDownloaderInterface*, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, taskId, downloadInfo);
	}
	template <typename T = uint32_t> T GetLastError() {
		return ((T (*)(IIPSMobileDownloaderInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}

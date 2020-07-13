#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class DataDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "DataDownloader"));
	}

	template <typename T = uintptr_t> T& mDownloader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadIfsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadTaskInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadLocalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = unsigned char> static T InitDataDownloader(uintptr_t dataDownloader, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4983A34))(0, dataDownloader, callback);
	}
	template <typename T = unsigned char> static T StartDownload(uintptr_t dataDownloader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4983B1C))(0, dataDownloader);
	}
	template <typename T = unsigned char> static T PauseDownload(uintptr_t dataDownloader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4983BFC))(0, dataDownloader);
	}
	template <typename T = unsigned char> static T ResumeDonload(uintptr_t dataDownloader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4983CDC))(0, dataDownloader);
	}
	template <typename T = uint32_t> static T GetDownloadSpeed(uintptr_t dataDownloader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4983DBC))(0, dataDownloader);
	}
	template <typename T = unsigned char> static T SetDownloadSpeed(uintptr_t dataDownloader, uint32_t downloadSpeed) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4983E9C))(0, dataDownloader, downloadSpeed);
	}
	template <typename T = unsigned char> static T DownloadIfsData(uintptr_t dataDownloader, uint32_t fileId, unsigned char priority, uintptr_t taskId) {
		return ((T (*)(void *, uintptr_t, uint32_t, unsigned char, uintptr_t))(Il2CppBase() + 0x4983F84))(0, dataDownloader, fileId, priority, taskId);
	}
	template <typename T = unsigned char> static T DownloadLocalData(uintptr_t dataDownloader, Il2CppString* downloadurl, Il2CppString* filepath, unsigned char priority, uintptr_t TaskID, unsigned char bDoBrokenResume) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, unsigned char, uintptr_t, unsigned char))(Il2CppBase() + 0x4984078))(0, dataDownloader, downloadurl, filepath, priority, TaskID, bDoBrokenResume);
	}
	template <typename T = unsigned char> static T GetDownloadTaskInfo(uintptr_t dataDownloader, uint32_t taskId, uintptr_t downloadInfo) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x49841BC))(0, dataDownloader, taskId, downloadInfo);
	}
	template <typename T = uint32_t> static T GetLastDownloaderError(uintptr_t dataDownloader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49842AC))(0, dataDownloader);
	}
	template <typename T = unsigned char> static T CancelDownload(uintptr_t dataDownloader, uint32_t taskId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498438C))(0, dataDownloader, taskId);
	}
	template <typename T = bool> T Init(uintptr_t callback) {
		return ((T (*)(DataDownloader*, uintptr_t))(Il2CppBase() + 0x4984474))(this, callback);
	}
	template <typename T = bool> T StartDownload_1() {
		return ((T (*)(DataDownloader*))(Il2CppBase() + 0x49847C0))(this);
	}
	template <typename T = bool> T PauseDownload_1() {
		return ((T (*)(DataDownloader*))(Il2CppBase() + 0x49848B8))(this);
	}
	template <typename T = bool> T ResumeDownload() {
		return ((T (*)(DataDownloader*))(Il2CppBase() + 0x49849B0))(this);
	}
	template <typename T = bool> T CancelDownload_1(uint32_t taskId) {
		return ((T (*)(DataDownloader*, uint32_t))(Il2CppBase() + 0x4984AA8))(this, taskId);
	}
	template <typename T = uint32_t> T GetDownloadSpeed_1() {
		return ((T (*)(DataDownloader*))(Il2CppBase() + 0x4984BAC))(this);
	}
	template <typename T = bool> T SetDownloadSpeed_1(uint32_t downloadSpeed) {
		return ((T (*)(DataDownloader*, uint32_t))(Il2CppBase() + 0x4984C94))(this, downloadSpeed);
	}
	template <typename T = bool> T DownloadIfsData_1(uint32_t fileId, unsigned char priority, uintptr_t taskId) {
		return ((T (*)(DataDownloader*, uint32_t, unsigned char, uintptr_t))(Il2CppBase() + 0x4984D98))(this, fileId, priority, taskId);
	}
	template <typename T = bool> T GetDownloadTaskInfo_1(uint32_t taskId, uintptr_t downloadInfo) {
		return ((T (*)(DataDownloader*, uint32_t, uintptr_t))(Il2CppBase() + 0x4984EC0))(this, taskId, downloadInfo);
	}
	template <typename T = uint32_t> T GetLastError() {
		return ((T (*)(DataDownloader*))(Il2CppBase() + 0x4984FDC))(this);
	}
	template <typename T = bool> T DownloadLocalData_1(Il2CppString* downloadUrl, Il2CppString* savePath, unsigned char priority, uintptr_t taskID, bool bDoBrokenResume) {
		return ((T (*)(DataDownloader*, Il2CppString*, Il2CppString*, unsigned char, uintptr_t, bool))(Il2CppBase() + 0x49850C4))(this, downloadUrl, savePath, priority, taskID, bDoBrokenResume);
	}

};

}

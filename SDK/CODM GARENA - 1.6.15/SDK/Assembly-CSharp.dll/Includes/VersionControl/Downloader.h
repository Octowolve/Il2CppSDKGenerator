#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace VersionControl {

class Downloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VersionControl", "Downloader"));
	}

	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MD5() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& FileDirPath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Total() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& DownloadState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MyRemoteCertificateValidationCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTotalLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TempFileIO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileDirPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTempFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888028))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(Downloader*, Il2CppString*))(Il2CppBase() + 0x4888030))(this, value);
	}
	template <typename T = Il2CppString*> T get_MD5() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888038))(this);
	}
	template <typename T = void> T set_MD5(Il2CppString* value) {
		return ((T (*)(Downloader*, Il2CppString*))(Il2CppBase() + 0x4888040))(this, value);
	}
	template <typename T = Il2CppString*> T get_FileDirPath() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888048))(this);
	}
	template <typename T = void> T set_FileDirPath(Il2CppString* value) {
		return ((T (*)(Downloader*, Il2CppString*))(Il2CppBase() + 0x4888050))(this, value);
	}
	template <typename T = int32_t> T get_Current() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888058))(this);
	}
	template <typename T = void> T set_Current(int32_t value) {
		return ((T (*)(Downloader*, int32_t))(Il2CppBase() + 0x4888060))(this, value);
	}
	template <typename T = int32_t> T get_Total() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888068))(this);
	}
	template <typename T = void> T set_Total(int32_t value) {
		return ((T (*)(Downloader*, int32_t))(Il2CppBase() + 0x4888070))(this, value);
	}
	template <typename T = uintptr_t> T get_DownloadState() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888078))(this);
	}
	template <typename T = void> T set_DownloadState(uintptr_t value) {
		return ((T (*)(Downloader*, uintptr_t))(Il2CppBase() + 0x4888080))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888088))(this);
	}
	template <typename T = void> T Init(Il2CppString* url, Il2CppString* md5) {
		return ((T (*)(Downloader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x48880BC))(this, url, md5);
	}
	template <typename T = bool> static T MyRemoteCertificateValidationCallback(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4888814))(0, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = void> T StartDownload() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888B68))(this);
	}
	template <typename T = void> T StopDownload() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888E90))(this);
	}
	template <typename T = uintptr_t> T GetTotalLength() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888DB0))(this);
	}
	template <typename T = void> T DownloadHandler() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888F44))(this);
	}
	template <typename T = void> T TempFileIO(Il2CppString* tempFilePath) {
		return ((T (*)(Downloader*, Il2CppString*))(Il2CppBase() + 0x4889684))(this, tempFilePath);
	}
	template <typename T = Il2CppString*> static T GetFileDirPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4888298))(0);
	}
	template <typename T = Il2CppString*> T GetFilePath() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x4888438))(this);
	}
	template <typename T = Il2CppString*> T GetTempFilePath() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x48885F8))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(Downloader*, bool))(Il2CppBase() + 0x488A990))(this, pauseStatus);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(Downloader*))(Il2CppBase() + 0x488AA40))(this);
	}

};

}

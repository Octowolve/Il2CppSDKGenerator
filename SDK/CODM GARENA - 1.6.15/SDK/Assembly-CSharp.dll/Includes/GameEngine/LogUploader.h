#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LogUploader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LogUploader"));
	}

	template <typename T = bool> T& isTest() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LogParentFolderPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& networkTypeString() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Upload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateUploadThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ZipUploadThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFileOverSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateZipFiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteLogZip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadForm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostForm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Upload() {
		return ((T (*)(LogUploader*))(Il2CppBase() + 0x24AD544))(this);
	}
	template <typename T = void> T CreateUploadThread() {
		return ((T (*)(LogUploader*))(Il2CppBase() + 0x24AD5E8))(this);
	}
	template <typename T = void> T ZipUploadThread() {
		return ((T (*)(LogUploader*))(Il2CppBase() + 0x24AD72C))(this);
	}
	template <typename T = bool> T IsFileOverSize(Il2CppString* filePath, int64_t size) {
		return ((T (*)(LogUploader*, Il2CppString*, int64_t))(Il2CppBase() + 0x24AE6EC))(this, filePath, size);
	}
	template <typename T = void> T CreateZipFiles(Il2CppString* sourceFilePath, uintptr_t zipStream) {
		return ((T (*)(LogUploader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24ADF60))(this, sourceFilePath, zipStream);
	}
	template <typename T = void> T DeleteLogZip(Il2CppString* destinationZipFilePath) {
		return ((T (*)(LogUploader*, Il2CppString*))(Il2CppBase() + 0x24AEB1C))(this, destinationZipFilePath);
	}
	template <typename T = void> T UploadFile(Il2CppString* fileFullPath, Il2CppString* url, Il2CppString* networkTypeString) {
		return ((T (*)(LogUploader*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x24AED0C))(this, fileFullPath, url, networkTypeString);
	}
	template <typename T = void> T UploadForm(Il2CppString* fileFullPath, Il2CppString* url) {
		return ((T (*)(LogUploader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x24AE820))(this, fileFullPath, url);
	}
	template <typename T = Il2CppString*> static T PostForm(Il2CppString* url, Il2CppList<uintptr_t>* formItems, uintptr_t cookieContainer, Il2CppString* refererUrl, uintptr_t encoding, int32_t timeOut) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x24AF5A8))(0, url, formItems, cookieContainer, refererUrl, encoding, timeOut);
	}

};

}

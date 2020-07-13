#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class IDolphinIFSDataInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "IDolphinIFSDataInterface"));
	}


	template <typename T = bool> T Init(uintptr_t initinfo) {
		return ((T (*)(IDolphinIFSDataInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, initinfo);
	}
	template <typename T = bool> T Uninit() {
		return ((T (*)(IDolphinIFSDataInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFileNewestInIFS(Il2CppString* fileName) {
		return ((T (*)(IDolphinIFSDataInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = uint32_t> T GetLastError() {
		return ((T (*)(IDolphinIFSDataInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIFSPath(bool bIfsInAPK) {
		return ((T (*)(IDolphinIFSDataInterface*, bool))(Il2CppBase() + 0x0))(this, bIfsInAPK);
	}
	template <typename T = Il2CppString*> T GetFileName(uint32_t fileId) {
		return ((T (*)(IDolphinIFSDataInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* fileName) {
		return ((T (*)(IDolphinIFSDataInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = uint32_t> T GetFileSize(uint32_t fileId) {
		return ((T (*)(IDolphinIFSDataInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = bool> T IsDirectory(uint32_t fileId) {
		return ((T (*)(IDolphinIFSDataInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = bool> T Read(uint32_t fileId, uint64_t offsetInFile, Il2CppArray<uintptr_t>* buff, uintptr_t readlength) {
		return ((T (*)(IDolphinIFSDataInterface*, uint32_t, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, fileId, offsetInFile, buff, readlength);
	}

};

}

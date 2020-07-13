#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinIFSDataImp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinIFSDataImp"));
	}

	template <typename T = uintptr_t> T& mFactory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mgr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mReader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mFinder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mInitinfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Uninit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIFSPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDirectory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getIFSConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFileNewestInIFS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T Init(uintptr_t initinfo) {
		return ((T (*)(DolphinIFSDataImp*, uintptr_t))(Il2CppBase() + 0x45230F4))(this, initinfo);
	}
	template <typename T = uint32_t> T GetLastError() {
		return ((T (*)(DolphinIFSDataImp*))(Il2CppBase() + 0x45236CC))(this);
	}
	template <typename T = bool> T Uninit() {
		return ((T (*)(DolphinIFSDataImp*))(Il2CppBase() + 0x45237F8))(this);
	}
	template <typename T = Il2CppString*> T GetIFSPath(bool bIfsInAPK) {
		return ((T (*)(DolphinIFSDataImp*, bool))(Il2CppBase() + 0x4523928))(this, bIfsInAPK);
	}
	template <typename T = bool> T Read(uint32_t fileId, uint64_t offsetInFile, Il2CppArray<uintptr_t>* buff, uintptr_t readlength) {
		return ((T (*)(DolphinIFSDataImp*, uint32_t, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45239D0))(this, fileId, offsetInFile, buff, readlength);
	}
	template <typename T = Il2CppString*> T GetFileName(uint32_t fileId) {
		return ((T (*)(DolphinIFSDataImp*, uint32_t))(Il2CppBase() + 0x4523B44))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* fileName) {
		return ((T (*)(DolphinIFSDataImp*, Il2CppString*))(Il2CppBase() + 0x4523C84))(this, fileName);
	}
	template <typename T = uint32_t> T GetFileSize(uint32_t fileId) {
		return ((T (*)(DolphinIFSDataImp*, uint32_t))(Il2CppBase() + 0x4523DC4))(this, fileId);
	}
	template <typename T = bool> T IsDirectory(uint32_t fileId) {
		return ((T (*)(DolphinIFSDataImp*, uint32_t))(Il2CppBase() + 0x4523F04))(this, fileId);
	}
	template <typename T = Il2CppString*> T getIFSConfig() {
		return ((T (*)(DolphinIFSDataImp*))(Il2CppBase() + 0x4523398))(this);
	}
	template <typename T = bool> T IsFileNewestInIFS(Il2CppString* fileName) {
		return ((T (*)(DolphinIFSDataImp*, Il2CppString*))(Il2CppBase() + 0x4524040))(this, fileName);
	}

};

}

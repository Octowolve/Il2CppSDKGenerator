#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class DataQuery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "DataQuery"));
	}

	template <typename T = uintptr_t> T& mDataQuery() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFileReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDirectory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IIPSFindFirstFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IIPSFindNextFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IIPSFindClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIfsPackagesInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastDataQueryError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T GetIFileName(uintptr_t dataQuery, uint32_t fileId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x49852C8))(0, dataQuery, fileId);
	}
	template <typename T = uint32_t> static T GetIFileId(uintptr_t dataQuery, Il2CppString* szFileName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x49853B0))(0, dataQuery, szFileName);
	}
	template <typename T = uint32_t> static T GetIFileSize(uintptr_t dataQuery, uint32_t fileId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x49854C4))(0, dataQuery, fileId);
	}
	template <typename T = unsigned char> static T IsIFileReady(uintptr_t dataQuery, uint32_t fileId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x49855AC))(0, dataQuery, fileId);
	}
	template <typename T = unsigned char> static T IsIFileDir(uintptr_t dataQuery, uint32_t fileId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4985694))(0, dataQuery, fileId);
	}
	template <typename T = uint32_t> static T IIPSFindFirstFile(uintptr_t dataQuery, uint32_t fileId, uintptr_t pInfo) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x498577C))(0, dataQuery, fileId, pInfo);
	}
	template <typename T = unsigned char> static T IIPSFindNextFile(uintptr_t dataQuery, uint32_t findHandle, uintptr_t pInfo) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x498586C))(0, dataQuery, findHandle, pInfo);
	}
	template <typename T = unsigned char> static T IIPSFindClose(uintptr_t dataQuery, uint32_t findHandle) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498595C))(0, dataQuery, findHandle);
	}
	template <typename T = uint32_t> static T GetIfsPackagesInfo(uintptr_t dataQuery, uintptr_t pInfo, uint32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x4985A44))(0, dataQuery, pInfo, count);
	}
	template <typename T = uint32_t> static T GetLastDataQueryError(uintptr_t dataQuery) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4985DE8))(0, dataQuery);
	}
	template <typename T = Il2CppString*> T GetFileName(uint32_t fileId) {
		return ((T (*)(DataQuery*, uint32_t))(Il2CppBase() + 0x4985EC8))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* fileName) {
		return ((T (*)(DataQuery*, Il2CppString*))(Il2CppBase() + 0x4986008))(this, fileName);
	}
	template <typename T = uint32_t> T GetFileSize(uint32_t fileId) {
		return ((T (*)(DataQuery*, uint32_t))(Il2CppBase() + 0x49860FC))(this, fileId);
	}
	template <typename T = bool> T IsFileReady(uint32_t fileId) {
		return ((T (*)(DataQuery*, uint32_t))(Il2CppBase() + 0x49861F0))(this, fileId);
	}
	template <typename T = bool> T IsDirectory(uint32_t fileId) {
		return ((T (*)(DataQuery*, uint32_t))(Il2CppBase() + 0x49862F4))(this, fileId);
	}
	template <typename T = uint32_t> T IIPSFindFirstFile_1(uint32_t fileId, uintptr_t pInfo) {
		return ((T (*)(DataQuery*, uint32_t, uintptr_t))(Il2CppBase() + 0x49863F8))(this, fileId, pInfo);
	}
	template <typename T = bool> T IIPSFindNextFile_1(uint32_t findHandle, uintptr_t pInfo) {
		return ((T (*)(DataQuery*, uint32_t, uintptr_t))(Il2CppBase() + 0x498650C))(this, findHandle, pInfo);
	}
	template <typename T = bool> T IIPSFindClose_1(uint32_t findHandle) {
		return ((T (*)(DataQuery*, uint32_t))(Il2CppBase() + 0x4986628))(this, findHandle);
	}
	template <typename T = uint32_t> T GetIfsPackagesInfo_1(uintptr_t pInfo, uint32_t count) {
		return ((T (*)(DataQuery*, uintptr_t, uint32_t))(Il2CppBase() + 0x498672C))(this, pInfo, count);
	}
	template <typename T = uint32_t> T GetLastDataQueryError_1() {
		return ((T (*)(DataQuery*))(Il2CppBase() + 0x4986840))(this);
	}

};

}

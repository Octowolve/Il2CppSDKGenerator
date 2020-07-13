#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDataQueryInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDataQueryInterface"));
	}


	template <typename T = Il2CppString*> T GetFileName(uint32_t fileId) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint32_t> T GetFileId(Il2CppString* fileName) {
		return ((T (*)(IIPSMobileDataQueryInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = uint32_t> T GetFileSize(uint32_t fileId) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = bool> T IsFileReady(uint32_t fileId) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = bool> T IsDirectory(uint32_t fileId) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t))(Il2CppBase() + 0x0))(this, fileId);
	}
	template <typename T = uint32_t> T IIPSFindFirstFile(uint32_t fileId, uintptr_t pInfo) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, fileId, pInfo);
	}
	template <typename T = bool> T IIPSFindNextFile(uint32_t findHandle, uintptr_t pInfo) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, findHandle, pInfo);
	}
	template <typename T = bool> T IIPSFindClose(uint32_t findHandle) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uint32_t))(Il2CppBase() + 0x0))(this, findHandle);
	}
	template <typename T = uint32_t> T GetIfsPackagesInfo(uintptr_t pInfo, uint32_t count) {
		return ((T (*)(IIPSMobileDataQueryInterface*, uintptr_t, uint32_t))(Il2CppBase() + 0x0))(this, pInfo, count);
	}
	template <typename T = uint32_t> T GetLastDataQueryError() {
		return ((T (*)(IIPSMobileDataQueryInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}

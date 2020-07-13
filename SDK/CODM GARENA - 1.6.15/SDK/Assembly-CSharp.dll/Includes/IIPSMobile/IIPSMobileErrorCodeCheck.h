#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileErrorCodeCheck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileErrorCodeCheck"));
	}

	template <typename T = int32_t> T& m_nLastCheckErrorCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIIPSErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstModuleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondModuleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorCodeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadErrorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReadDownloadErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondModuleNoticeErrorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T CheckIIPSErrorCode(int32_t nErrorCode) {
		return ((T (*)(IIPSMobileErrorCodeCheck*, int32_t))(Il2CppBase() + 0x49896C0))(this, nErrorCode);
	}
	template <typename T = int32_t> T GetFirstModuleType() {
		return ((T (*)(IIPSMobileErrorCodeCheck*))(Il2CppBase() + 0x49898F4))(this);
	}
	template <typename T = int32_t> T GetSecondModuleType() {
		return ((T (*)(IIPSMobileErrorCodeCheck*))(Il2CppBase() + 0x4989998))(this);
	}
	template <typename T = int32_t> T GetErrorCodeType() {
		return ((T (*)(IIPSMobileErrorCodeCheck*))(Il2CppBase() + 0x4989A3C))(this);
	}
	template <typename T = int32_t> T GetRealErrorCode() {
		return ((T (*)(IIPSMobileErrorCodeCheck*))(Il2CppBase() + 0x4989AE0))(this);
	}
	template <typename T = int32_t> T GetDownloadErrorType(int32_t downloaderror) {
		return ((T (*)(IIPSMobileErrorCodeCheck*, int32_t))(Il2CppBase() + 0x4989B84))(this, downloaderror);
	}
	template <typename T = int32_t> T GetReadDownloadErrorCode(int32_t downloaderror) {
		return ((T (*)(IIPSMobileErrorCodeCheck*, int32_t))(Il2CppBase() + 0x4989C2C))(this, downloaderror);
	}
	template <typename T = int32_t> T GetSecondModuleNoticeErrorType(int32_t secondModule, int32_t errorcode) {
		return ((T (*)(IIPSMobileErrorCodeCheck*, int32_t, int32_t))(Il2CppBase() + 0x4989CD4))(this, secondModule, errorcode);
	}

};

}

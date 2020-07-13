#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileVersionCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileVersionCallBack"));
	}

	template <typename T = uintptr_t> T& mCallBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pManagedObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& mImpCB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCppVersionInfoCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteCppVersionCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetNewVersionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeInstallApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> static T CreateVersionInfoCallBack(uintptr_t onGetNewVersionInfoFunc, uintptr_t onProgressFunc, uintptr_t onErrorFunc, uintptr_t onSuccessFunc, uintptr_t saveConfigFunc, uintptr_t noticeInstallApk, uintptr_t msg, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990188))(0, onGetNewVersionInfoFunc, onProgressFunc, onErrorFunc, onSuccessFunc, saveConfigFunc, noticeInstallApk, msg, callback);
	}
	template <typename T = void> static T DestroyVersionInfoCallBack(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49902F4))(0, callback);
	}
	template <typename T = uintptr_t> static T GetCallBackGCHandle(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49903D4))(0, callback);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(IIPSMobileVersionCallBack*))(Il2CppBase() + 0x49904B4))(this);
	}
	template <typename T = void> T CreateCppVersionInfoCallBack() {
		return ((T (*)(IIPSMobileVersionCallBack*))(Il2CppBase() + 0x498E01C))(this);
	}
	template <typename T = void> T DeleteCppVersionCallBack() {
		return ((T (*)(IIPSMobileVersionCallBack*))(Il2CppBase() + 0x498ECD0))(this);
	}
	template <typename T = unsigned char> static T OnGetNewVersionInfo(uintptr_t callback, uintptr_t newVersionInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x498EF64))(0, callback, newVersionInfo);
	}
	template <typename T = unsigned char> static T OnNoticeInstallApk(uintptr_t callback, Il2CppString* url) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498F2EC))(0, callback, url);
	}
	template <typename T = unsigned char> static T OnActionMsg(uintptr_t callback, Il2CppString* url) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498F55C))(0, callback, url);
	}
	template <typename T = void> static T OnProgress(uintptr_t callback, uintptr_t curVersionStage, uint64_t totalSize, uint64_t nowSize) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint64_t, uint64_t))(Il2CppBase() + 0x498F7DC))(0, callback, curVersionStage, totalSize, nowSize);
	}
	template <typename T = void> static T OnError(uintptr_t callback, uintptr_t curVersionStage, uint32_t errorCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x498FA94))(0, callback, curVersionStage, errorCode);
	}
	template <typename T = void> static T OnSuccess(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498FD00))(0, callback);
	}
	template <typename T = void> static T SaveConfig(uintptr_t callback, uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x498FF60))(0, callback, bufferSize, configBuffer);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(IIPSMobileVersionCallBack*))(Il2CppBase() + 0x4990734))(this);
	}

};

}

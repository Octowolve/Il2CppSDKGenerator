#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class DownloadCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "DownloadCallBack"));
	}

	template <typename T = uintptr_t> T& errFunc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& succFunc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& progressFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& mCBImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mCallBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T CreateDownlaodMgrCallBack(uintptr_t onDownloadError, uintptr_t onDownloadSuccess, uintptr_t onDownloadProgress, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49875F0))(0, onDownloadError, onDownloadSuccess, onDownloadProgress, callback);
	}
	template <typename T = void> static T DestroyDownlaodMgrCallBack(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4987718))(0, callback);
	}
	template <typename T = uintptr_t> static T GetDownloadCallbackGCHandle(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49877F8))(0, callback);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(DownloadCallBack*))(Il2CppBase() + 0x49878D8))(this);
	}
	template <typename T = void> static T OnDownloadError(uintptr_t callback, uint32_t taskId, uint32_t errorCode) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x4986E48))(0, callback, taskId, errorCode);
	}
	template <typename T = void> static T OnDownloadProgress(uintptr_t callback, uint32_t taskId, uintptr_t info) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x49870DC))(0, callback, taskId, info);
	}
	template <typename T = void> static T OnDownloadSuccess(uintptr_t callback, uint32_t taskId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x498739C))(0, callback, taskId);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(DownloadCallBack*))(Il2CppBase() + 0x4987AAC))(this);
	}

};

}

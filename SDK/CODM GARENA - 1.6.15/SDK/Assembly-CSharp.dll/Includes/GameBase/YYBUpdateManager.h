#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class YYBUpdateManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "YYBUpdateManager"));
	}

	template <typename T = int32_t> static T& YYBChannelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& checkUpdateFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isUpdating() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int64_t> T& receivedDataLen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& totalDataLen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& pendingDownloadSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& errorStatus() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isRequestNotAcked() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& AppUpdateTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& timeSinceRequestSent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isUpdateInYYB() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSaveUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckNeedUpdateResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadAppProgressChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadAppStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadYYBProgressChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDownloadYYBStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedUpdateResponseNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadAppProgressChangedNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadAppStateChangedNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadYYBProgressChangedNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadYYBStateChangedNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x49E97A4))(0);
	}
	template <typename T = void> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x49E9928))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9B80))(this);
	}
	template <typename T = bool> T get_CheckUpdateFinished() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C48))(this);
	}
	template <typename T = bool> T get_IsUpdating() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C50))(this);
	}
	template <typename T = int64_t> T get_ReceivedDataLen() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C58))(this);
	}
	template <typename T = int64_t> T get_TotalDataLen() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C60))(this);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C68))(this);
	}
	template <typename T = int64_t> T get_PendingDownloadSize() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C70))(this);
	}
	template <typename T = int32_t> T get_ErrorStatus() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C78))(this);
	}
	template <typename T = bool> T get_IsUpdateInYYB() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C80))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9C88))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49E9D78))(this);
	}
	template <typename T = void> T CheckAppUpdate() {
		return ((T (*)(YYBUpdateManager*))(Il2CppBase() + 0x49EA0B8))(this);
	}
	template <typename T = void> T StartSaveUpdate(bool inYYB) {
		return ((T (*)(YYBUpdateManager*, bool))(Il2CppBase() + 0x49EA230))(this, inYYB);
	}
	template <typename T = void> T FinishUpdate(uintptr_t endState) {
		return ((T (*)(YYBUpdateManager*, uintptr_t))(Il2CppBase() + 0x49E9F3C))(this, endState);
	}
	template <typename T = void> T OnCheckNeedUpdateResponse(int64_t newApkSize, Il2CppString* newFeature, int64_t patchSize, int32_t status, Il2CppString* updateDownloadUrl, int32_t updateMethod) {
		return ((T (*)(YYBUpdateManager*, int64_t, Il2CppString*, int64_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x49EA3E4))(this, newApkSize, newFeature, patchSize, status, updateDownloadUrl, updateMethod);
	}
	template <typename T = void> T OnDownloadAppProgressChanged(int64_t inReceiveDataLen, int64_t inTotalDataLen) {
		return ((T (*)(YYBUpdateManager*, int64_t, int64_t))(Il2CppBase() + 0x49EA67C))(this, inReceiveDataLen, inTotalDataLen);
	}
	template <typename T = void> T OnDownloadAppStateChanged(int32_t inState, int32_t errorCode, Il2CppString* errorMsg) {
		return ((T (*)(YYBUpdateManager*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x49EA7C4))(this, inState, errorCode, errorMsg);
	}
	template <typename T = void> T OnDownloadYYBProgressChanged(Il2CppString* url, int64_t inReceiveDataLen, int64_t inTotalDataLen) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*, int64_t, int64_t))(Il2CppBase() + 0x49EA9E4))(this, url, inReceiveDataLen, inTotalDataLen);
	}
	template <typename T = void> T OnDownloadYYBStateChanged(Il2CppString* url, int32_t inState, int32_t errorCode, Il2CppString* errorMsg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x49EAB34))(this, url, inState, errorCode, errorMsg);
	}
	template <typename T = void> T CheckNeedUpdateResponseNtf(Il2CppString* msg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*))(Il2CppBase() + 0x49EAD28))(this, msg);
	}
	template <typename T = void> T DownloadAppProgressChangedNtf(Il2CppString* msg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*))(Il2CppBase() + 0x49EB070))(this, msg);
	}
	template <typename T = void> T DownloadAppStateChangedNtf(Il2CppString* msg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*))(Il2CppBase() + 0x49EB2D8))(this, msg);
	}
	template <typename T = void> T DownloadYYBProgressChangedNtf(Il2CppString* msg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*))(Il2CppBase() + 0x49EB54C))(this, msg);
	}
	template <typename T = void> T DownloadYYBStateChangedNtf(Il2CppString* msg) {
		return ((T (*)(YYBUpdateManager*, Il2CppString*))(Il2CppBase() + 0x49EB77C))(this, msg);
	}

};

}

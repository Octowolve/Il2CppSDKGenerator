#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinClient"));
	}

	template <typename T = uintptr_t> T& mDolphinServerConfig() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mFactory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mPlugin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mUpdateCallbackImp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mUpdateConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mUpdateInitInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& mProgramVersion() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mResVersion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isUpdating() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& exitUpdate() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& mIsBeginUpdateFlag() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& mState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& sInstanceCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InstallApkCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& mWaitingRetryStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mRemainRetryTimes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& mLastHandledError() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mIIPSClientState() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isLogSucceeded() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_StartCheckUpdateTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_LastPrintLogTimestamp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& CONTEXT_NEED_RELOAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& errorCheker() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinClientState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupServerConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckIfNewVersionExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateProgressInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateMessageBoxInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeInstallApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeUpdateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeChangeSourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeFirstExtractSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_Downloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_Installing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstallApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_ConfirmingToDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_WaitingToRetry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_Succeeded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasApkNeedToInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckApkNeedToInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconCheckAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LessLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgramVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFileSavePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameMajorVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IIPSErrorCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VersionCompare_A_GreaterThan_B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeServerCfgInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = bool> T get_mNeedExtract() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetDolphinClientState() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E2F3B4))(this);
	}
	template <typename T = void> T CleanUp() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E2F454))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E2F630))(this);
	}
	template <typename T = void> T StartCheckUpdate() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E3028C))(this);
	}
	template <typename T = void> T SetupServerConfig() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E3075C))(this);
	}
	template <typename T = void> T StartCheckIfNewVersionExists() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E30350))(this);
	}
	template <typename T = bool> T HasFinished() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E2F9C8))(this);
	}
	template <typename T = void> T BeginUpdate() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E30E94))(this);
	}
	template <typename T = void> T SetupUpdateVersionCfg() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnNoticeNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(DolphinClient*, uintptr_t))(Il2CppBase() + 0x0))(this, newVersionInfo);
	}
	template <typename T = void> T OnUpdateProgressInfo(uintptr_t curVersionStage, Il2CppString* msg, uint32_t nowSize, uint32_t totalSize, bool isDownloading) {
		return ((T (*)(DolphinClient*, uintptr_t, Il2CppString*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x2E30FEC))(this, curVersionStage, msg, nowSize, totalSize, isDownloading);
	}
	template <typename T = void> T OnUpdateMessageBoxInfo(Il2CppString* msg, uintptr_t msgBoxType, bool isError, uint32_t errorCode) {
		return ((T (*)(DolphinClient*, Il2CppString*, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x2E314D4))(this, msg, msgBoxType, isError, errorCode);
	}
	template <typename T = void> T OnNoticeInstallApk(Il2CppString* path) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E31B60))(this, path);
	}
	template <typename T = void> T OnNoticeUpdateSuccess() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E31F40))(this);
	}
	template <typename T = void> T OnNoticeChangeSourceVersion(Il2CppString* newVersionStr) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E31FE4))(this, newVersionStr);
	}
	template <typename T = void> T OnNoticeFirstExtractSuccess() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E32084))(this);
	}
	template <typename T = void> T Tick_Downloading() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E32128))(this);
	}
	template <typename T = void> T Tick_Installing() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E321C0))(this);
	}
	template <typename T = bool> T InstallApk(Il2CppString* path) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E32378))(this, path);
	}
	template <typename T = void> T Tick_ConfirmingToDownload() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E325F8))(this);
	}
	template <typename T = void> T Tick_WaitingToRetry() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E32888))(this);
	}
	template <typename T = void> T Tick_Succeeded() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E3295C))(this);
	}
	template <typename T = bool> static T HasApkNeedToInstalled() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E32A08))(0);
	}
	template <typename T = bool> T CheckApkNeedToInstalled() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E31DB4))(this);
	}
	template <typename T = void> T ReportBeaconCheckAppUpdate(bool isSuccesss, int32_t inErrorCode, bool hasNewVersion) {
		return ((T (*)(DolphinClient*, bool, int32_t, bool))(Il2CppBase() + 0x2E32AAC))(this, isSuccesss, inErrorCode, hasNewVersion);
	}
	template <typename T = void> T LessLog(Il2CppString* text) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E31408))(this, text);
	}
	template <typename T = Il2CppString*> static T GetProgramVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E32E28))(0);
	}
	template <typename T = Il2CppString*> static T GetResourceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E32EC8))(0);
	}
	template <typename T = Il2CppString*> static T GetFileSavePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E335FC))(0);
	}
	template <typename T = void> T GotoState(uintptr_t cs) {
		return ((T (*)(DolphinClient*, uintptr_t))(Il2CppBase() + 0x2E2FA74))(this, cs);
	}
	template <typename T = void> T ResetParam() {
		return ((T (*)(DolphinClient*))(Il2CppBase() + 0x2E2F580))(this);
	}
	template <typename T = bool> T IsSameMajorVersion(Il2CppString* versionA, Il2CppString* versionB) {
		return ((T (*)(DolphinClient*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2E336D4))(this, versionA, versionB);
	}
	template <typename T = void> T HandleError(uint32_t errorCode) {
		return ((T (*)(DolphinClient*, uint32_t))(Il2CppBase() + 0x2E2FB1C))(this, errorCode);
	}
	template <typename T = Il2CppString*> T IIPSErrorCheck(int32_t errorType) {
		return ((T (*)(DolphinClient*, int32_t))(Il2CppBase() + 0x2E339F4))(this, errorType);
	}
	template <typename T = int32_t> T GetErrorType(uint32_t errorCode) {
		return ((T (*)(DolphinClient*, uint32_t))(Il2CppBase() + 0x2E33918))(this, errorCode);
	}
	template <typename T = int32_t> static T VersionCompare_A_GreaterThan_B(Il2CppString* A, Il2CppString* B) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2E334A4))(0, A, B);
	}
	template <typename T = unsigned char> T OnActionMsg(Il2CppString* msg) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E33B9C))(this, msg);
	}
	template <typename T = void> T OnNoticeServerCfgInfo(Il2CppString* msdg) {
		return ((T (*)(DolphinClient*, Il2CppString*))(Il2CppBase() + 0x2E33D5C))(this, msdg);
	}

};

}

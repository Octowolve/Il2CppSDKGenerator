#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinMgrImp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinMgrImp"));
	}

	template <typename T = uintptr_t> T& mCallBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mDateMgr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mUpdateInitInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mNeedFirstExtract() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCurrentUpdateType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mVersionFactroy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mVersionMgr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mWaitMessageBox() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mWaitNewVersion() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& mShouldStop() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppString*> T& mNewVersionStr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& updateVariables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mUpdateInfoString() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mUpdateErrorString() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mErrorCheck() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& speedCounter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCurVersionStage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentUpdteType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDateMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUpdateMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UninitUpdateMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartUpdateService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Continue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopUpdateService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DriveUpdateService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDownSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNeedFirstExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUpdateParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSourceCheckAndSync_Part() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSourceCheckAndSync_Full() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFirstExtractAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFirstExtractPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFirstExtractFix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSourceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgramUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSourceCheckAndSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetNewVersionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNoticeInstallApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActionMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownSizeShowString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetCurrentUpdteType() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x45246C4))(this);
	}
	template <typename T = void> T SetCallBack(uintptr_t callback) {
		return ((T (*)(DolphinMgrImp*, uintptr_t))(Il2CppBase() + 0x4522114))(this, callback);
	}
	template <typename T = void> T SetDateMgr(uintptr_t dateMgr) {
		return ((T (*)(DolphinMgrImp*, uintptr_t))(Il2CppBase() + 0x45221BC))(this, dateMgr);
	}
	template <typename T = bool> T InitUpdateMgr(uintptr_t updateInfo, bool needFirstExtract, uintptr_t strType) {
		return ((T (*)(DolphinMgrImp*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x4524764))(this, updateInfo, needFirstExtract, strType);
	}
	template <typename T = bool> T UninitUpdateMgr() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4524974))(this);
	}
	template <typename T = bool> T StartUpdateService() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4524A14))(this);
	}
	template <typename T = bool> T Continue() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452BB08))(this);
	}
	template <typename T = bool> T StopUpdateService() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452BC84))(this);
	}
	template <typename T = void> T DriveUpdateService() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452BFF4))(this);
	}
	template <typename T = uint32_t> T GetCurrentDownSpeed() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452C830))(this);
	}
	template <typename T = void> T SetNeedFirstExtract(bool needFirstExtract) {
		return ((T (*)(DolphinMgrImp*, bool))(Il2CppBase() + 0x452CAE4))(this, needFirstExtract);
	}
	template <typename T = void> T InitUpdateParam() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452CB8C))(this);
	}
	template <typename T = bool> T StartSourceCheckAndSync_Part() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4527614))(this);
	}
	template <typename T = bool> T StartSourceCheckAndSync_Full() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4528464))(this);
	}
	template <typename T = bool> T StartFirstExtractAll() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4528EE8))(this);
	}
	template <typename T = bool> T StartFirstExtractPart() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4529C44))(this);
	}
	template <typename T = bool> T StartFirstExtractFix() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452ADAC))(this);
	}
	template <typename T = bool> T StartSourceUpdate() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4524B88))(this);
	}
	template <typename T = bool> T StartProgramUpdate() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x4525A30))(this);
	}
	template <typename T = bool> T StartSourceCheckAndSync() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x45267F0))(this);
	}
	template <typename T = unsigned char> T OnGetNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(DolphinMgrImp*, uintptr_t))(Il2CppBase() + 0x452CE60))(this, newVersionInfo);
	}
	template <typename T = void> T OnProgress(uintptr_t curVersionStage, uint64_t totalSize, uint64_t nowSize) {
		return ((T (*)(DolphinMgrImp*, uintptr_t, uint64_t, uint64_t))(Il2CppBase() + 0x452D270))(this, curVersionStage, totalSize, nowSize);
	}
	template <typename T = void> T OnError(uintptr_t curVersionStage, uint32_t errorCode) {
		return ((T (*)(DolphinMgrImp*, uintptr_t, uint32_t))(Il2CppBase() + 0x452DA10))(this, curVersionStage, errorCode);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(DolphinMgrImp*))(Il2CppBase() + 0x452DAF0))(this);
	}
	template <typename T = void> T SaveConfig(uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(DolphinMgrImp*, uint32_t, uintptr_t))(Il2CppBase() + 0x452DBB8))(this, bufferSize, configBuffer);
	}
	template <typename T = unsigned char> T OnNoticeInstallApk(Il2CppString* path) {
		return ((T (*)(DolphinMgrImp*, Il2CppString*))(Il2CppBase() + 0x452DC6C))(this, path);
	}
	template <typename T = unsigned char> T OnActionMsg(Il2CppString* msg) {
		return ((T (*)(DolphinMgrImp*, Il2CppString*))(Il2CppBase() + 0x452DD4C))(this, msg);
	}
	template <typename T = Il2CppString*> T GetDownSizeShowString(uint64_t totalSize, uint64_t nowSize) {
		return ((T (*)(DolphinMgrImp*, uint64_t, uint64_t))(Il2CppBase() + 0x452D604))(this, totalSize, nowSize);
	}

};

}

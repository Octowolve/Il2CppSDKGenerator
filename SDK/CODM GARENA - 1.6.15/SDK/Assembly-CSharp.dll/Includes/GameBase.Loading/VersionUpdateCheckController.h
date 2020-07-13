#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class VersionUpdateCheckController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "VersionUpdateCheckController"));
	}

	template <typename T = uintptr_t> T& mDolphin_AppUpdate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDolphin_ResExtract() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mDolphin_ResUpdate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& FlowController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mUserUpdateAction() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& mProgramVersion() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mIsCheckingUpdateAPK() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mRemainRetryTimes() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& IsForceUpdate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> static T& CHECK_UPGRADEDISK_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_VersionUpdateInfoController() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanUpAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareExternalFolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfNewAppExists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUpdateConfirmMsgBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewestNotices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUpdateProgressBarOrQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DolphinAppUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveUnusedApk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAppStoreORGooglePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfNewExtractResourceExsists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DolphinResExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfNewResourceExsists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DolphinResUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateResDirectly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback_ErrorQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowContinueUpdateMsgBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback_ContinueUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVersionNotMatchMsgBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback_MajorVersionNotMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilePermissionFailedMsgBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpgradeDiskEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersionUpdateInfoController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x1956FC8))(this);
	}
	template <typename T = void> T set_FlowController(uintptr_t value) {
		return ((T (*)(VersionUpdateCheckController*, uintptr_t))(Il2CppBase() + 0x195706C))(this, value);
	}
	template <typename T = uintptr_t> T get_FlowController() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x1957074))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195707C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195717C))(this);
	}
	template <typename T = void> T CleanUpAll() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195728C))(this);
	}
	template <typename T = void> T CheckUpdate() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x1957548))(this);
	}
	template <typename T = void> T StartCheckUpdate() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x19576F4))(this);
	}
	template <typename T = void> T PrepareExternalFolder() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x19579C8))(this);
	}
	template <typename T = void> T CheckIfNewAppExists() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x19580C4))(this);
	}
	template <typename T = void> T ShowUpdateConfirmMsgBox(bool isUpdateRes, bool forceUpdate, Il2CppString* targetResVersion) {
		return ((T (*)(VersionUpdateCheckController*, bool, bool, Il2CppString*))(Il2CppBase() + 0x195840C))(this, isUpdateRes, forceUpdate, targetResVersion);
	}
	template <typename T = void> T GetNewestNotices(bool isUpdateRes, bool forceUpdate, bool useOperateNoticeConfig) {
		return ((T (*)(VersionUpdateCheckController*, bool, bool, bool))(Il2CppBase() + 0x19588A0))(this, isUpdateRes, forceUpdate, useOperateNoticeConfig);
	}
	template <typename T = void> T ShowUpdateProgressBarOrQuit(uintptr_t result, bool isResUpdate, bool isForce) {
		return ((T (*)(VersionUpdateCheckController*, uintptr_t, bool, bool))(Il2CppBase() + 0x1959F34))(this, result, isResUpdate, isForce);
	}
	template <typename T = void> T Tick_DolphinAppUpdate() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195A550))(this);
	}
	template <typename T = void> T RemoveUnusedApk() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195A690))(this);
	}
	template <typename T = void> T OpenAppStoreORGooglePlay() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195A2F4))(this);
	}
	template <typename T = void> T CheckIfNewExtractResourceExsists() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195AB9C))(this);
	}
	template <typename T = void> T Tick_DolphinResExtract() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195B0FC))(this);
	}
	template <typename T = void> T CheckIfNewResourceExsists() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195B398))(this);
	}
	template <typename T = void> T Tick_DolphinResUpdate() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195B600))(this);
	}
	template <typename T = void> T UpdateResDirectly() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195B8D4))(this);
	}
	template <typename T = void> T OnMessageBoxCallback_ErrorQuit(uintptr_t result, int32_t userContext) {
		return ((T (*)(VersionUpdateCheckController*, uintptr_t, int32_t))(Il2CppBase() + 0x195BB24))(this, result, userContext);
	}
	template <typename T = void> T ShowContinueUpdateMsgBox(Il2CppString* text, int32_t context) {
		return ((T (*)(VersionUpdateCheckController*, Il2CppString*, int32_t))(Il2CppBase() + 0x195BCB4))(this, text, context);
	}
	template <typename T = void> T OnMessageBoxCallback_ContinueUpdate(uintptr_t result, int32_t userContext) {
		return ((T (*)(VersionUpdateCheckController*, uintptr_t, int32_t))(Il2CppBase() + 0x195BE6C))(this, result, userContext);
	}
	template <typename T = void> T ShowVersionNotMatchMsgBox() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195C150))(this);
	}
	template <typename T = void> T OnMessageBoxCallback_MajorVersionNotMatch(uintptr_t result, int32_t userContext) {
		return ((T (*)(VersionUpdateCheckController*, uintptr_t, int32_t))(Il2CppBase() + 0x195C29C))(this, result, userContext);
	}
	template <typename T = void> T ShowFilePermissionFailedMsgBox() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195C53C))(this);
	}
	template <typename T = bool> T CheckUpgradeDiskEnough(bool isApk, Il2CppString* newVersion, uintptr_t customData) {
		return ((T (*)(VersionUpdateCheckController*, bool, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1959194))(this, isApk, newVersion, customData);
	}
	template <typename T = void> T ShowProgressBar(bool isShow) {
		return ((T (*)(VersionUpdateCheckController*, bool))(Il2CppBase() + 0x195A1D4))(this, isShow);
	}
	template <typename T = uintptr_t> T GetVersionUpdateInfoController() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x1959DC8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195C770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195C778))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(VersionUpdateCheckController*))(Il2CppBase() + 0x195C780))(this);
	}

};

}

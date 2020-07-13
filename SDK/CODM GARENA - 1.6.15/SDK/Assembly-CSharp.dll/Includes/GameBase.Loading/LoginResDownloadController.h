#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoginResDownloadController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoginResDownloadController"));
	}

	template <typename T = uintptr_t> T& InitCallbackDelegate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& InitProgressDelegate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> static T& downloadModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& FlowController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& moduleResQuality() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& netNoticeType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& retryNoticeType() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginResReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoginResFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetryNoticeBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideButtons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartLoginResDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndStartDownloadAfterPufferInitSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDownloadLoginResModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoIfNeedDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NetNoticBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleQuitApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRetry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetryCheckAndDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAfterPufferInitFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDownloaderInitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PufferDownloaderInitProgressFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModuleDownResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModuleDownProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6BFAC))(this);
	}
	template <typename T = void> T set_FlowController(uintptr_t value) {
		return ((T (*)(LoginResDownloadController*, uintptr_t))(Il2CppBase() + 0x2E5A0D8))(this, value);
	}
	template <typename T = uintptr_t> T get_FlowController() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C050))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C058))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C158))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C1F0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C288))(this);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C398))(this);
	}
	template <typename T = void> T LoginResReady() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C4D0))(this);
	}
	template <typename T = void> T LoginResFailed() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C5F8))(this);
	}
	template <typename T = void> T RetryNoticeBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoginResDownloadController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E6C75C))(this, result, userContext);
	}
	template <typename T = void> T HideButtons() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C988))(this);
	}
	template <typename T = void> T StartLoginResDownload() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E5A0E0))(this);
	}
	template <typename T = void> T CheckAndStartDownloadAfterPufferInitSuccess() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6CA20))(this);
	}
	template <typename T = void> T DoDownloadLoginResModule() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6CFDC))(this);
	}
	template <typename T = void> T DoIfNeedDownload(uint32_t needDownloadSize) {
		return ((T (*)(LoginResDownloadController*, uint32_t))(Il2CppBase() + 0x2E6CCFC))(this, needDownloadSize);
	}
	template <typename T = void> T NetNoticBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoginResDownloadController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E6D1F0))(this, result, userContext);
	}
	template <typename T = void> T HandleQuitApp() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6C8A4))(this);
	}
	template <typename T = bool> T CanRetry() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6D338))(this);
	}
	template <typename T = void> T RetryCheckAndDownload() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6D3D8))(this);
	}
	template <typename T = void> T DoAfterPufferInitFailed() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6D470))(this);
	}
	template <typename T = void> T PufferDownloaderInitCallback(bool success, uint32_t errorCode) {
		return ((T (*)(LoginResDownloadController*, bool, uint32_t))(Il2CppBase() + 0x2E6D514))(this, success, errorCode);
	}
	template <typename T = void> T PufferDownloaderInitProgressFunc(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(LoginResDownloadController*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2E6D5E8))(this, stage, nowSize, totalSize);
	}
	template <typename T = void> T OnModuleDownResult(Il2CppString* moduleName, uintptr_t resQuality, uintptr_t moduleState) {
		return ((T (*)(LoginResDownloadController*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E6D71C))(this, moduleName, resQuality, moduleState);
	}
	template <typename T = void> T OnModuleDownProgress(Il2CppString* moduleName, uintptr_t resQuality, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(LoginResDownloadController*, Il2CppString*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2E6D8B0))(this, moduleName, resQuality, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6DA70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6DA78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6DA80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6DA88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoginResDownloadController*))(Il2CppBase() + 0x2E6DA90))(this);
	}

};

}

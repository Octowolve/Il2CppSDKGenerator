#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginLobbyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginLobbyController"));
	}

	template <typename T = int32_t> static T& LOGIN_OPERATION_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LOGIN_OPERATION_NEW_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LOGIN_OPERATION_Frozon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsReconnect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& m_DownUrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLogicLoginRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerLoginCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserLoginSucc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoginResultSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerLoginMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFailMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginHelpUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinishInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFailMessageBoxCallbackNewVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoginFailMessageBoxCallback_IP_IN_BLACKLIST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsReconnect() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E5495C))(this);
	}
	template <typename T = void> T set_IsReconnect(bool value) {
		return ((T (*)(LoadingFlowLoginLobbyController*, bool))(Il2CppBase() + 0x2E54964))(this, value);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E5496C))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E54A0C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E54AD0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E54BF8))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E54CB4))(this);
	}
	template <typename T = void> T DoLogicLoginRequest() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E54ED4))(this);
	}
	template <typename T = void> T OnServerLoginCallback(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoginLobbyController*, uintptr_t))(Il2CppBase() + 0x2E55B90))(this, Msg);
	}
	template <typename T = void> T OnUserLoginSucc() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E57C94))(this);
	}
	template <typename T = bool> T IsLoginResultSuccess(int32_t ret) {
		return ((T (*)(LoadingFlowLoginLobbyController*, int32_t))(Il2CppBase() + 0x2E56A40))(this, ret);
	}
	template <typename T = void> T ProcessServerLoginMessageBox(uintptr_t data) {
		return ((T (*)(LoadingFlowLoginLobbyController*, uintptr_t))(Il2CppBase() + 0x2E56B04))(this, data);
	}
	template <typename T = void> T OnLoginFailMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoadingFlowLoginLobbyController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E57F84))(this, result, userContext);
	}
	template <typename T = Il2CppString*> T GetLoginHelpUrl() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E581D4))(this);
	}
	template <typename T = void> T OnFlowFinishInner() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E58358))(this);
	}
	template <typename T = void> T OnLoginFailMessageBoxCallbackNewVersion(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoadingFlowLoginLobbyController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E584E0))(this, result, userContext);
	}
	template <typename T = void> T OnLoginFailMessageBoxCallback_IP_IN_BLACKLIST(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoadingFlowLoginLobbyController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E58708))(this, result, userContext);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E58804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E58808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E58810))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E58818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinishInner() {
		return ((T (*)(LoadingFlowLoginLobbyController*))(Il2CppBase() + 0x2E5881C))(this);
	}

};

}

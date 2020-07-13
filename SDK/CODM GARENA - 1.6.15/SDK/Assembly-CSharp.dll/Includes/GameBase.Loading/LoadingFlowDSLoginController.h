#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowDSLoginController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowDSLoginController"));
	}

	template <typename T = int32_t> static T& LOGIN_FAIL_RETRY_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LOGIN_FAIL_RETRY_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CONNECT_FAIL_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LoginFailCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& m_ConnectFailCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LOGIN_TIMEOUT_RETRY_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LoginTimeoutCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_BoxShowTimes() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_BoxShowTimesMax() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ResLogin() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& CheckDSInfoTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_IsDsLogining() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckZoneNetwork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStartDSLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDSLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InterruptWhenFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReconnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSecondarySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSquadMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RetryConnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFailMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmConnectFail_ForceQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmConnectFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E42A94))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E42B88))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E42D70))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E42ED8))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E42FA8))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E4307C))(this);
	}
	template <typename T = bool> T CheckZoneNetwork() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E43C60))(this);
	}
	template <typename T = void> T CheckStartDSLogin() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E43DCC))(this);
	}
	template <typename T = void> T StartDSLogin() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E434D4))(this);
	}
	template <typename T = bool> T InterruptWhenFailed() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E444B4))(this);
	}
	template <typename T = bool> T IsReconnectDS() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E44838))(this);
	}
	template <typename T = void> T OnDSLoginSuccess(uintptr_t msg) {
		return ((T (*)(LoadingFlowDSLoginController*, uintptr_t))(Il2CppBase() + 0x2E44994))(this, msg);
	}
	template <typename T = void> T OnDSLoginSecondarySuccess(uintptr_t msg) {
		return ((T (*)(LoadingFlowDSLoginController*, uintptr_t))(Il2CppBase() + 0x2E44B58))(this, msg);
	}
	template <typename T = void> T CheckSquadMatch() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E44584))(this);
	}
	template <typename T = void> T OnDSLoginFailed(uintptr_t Msg) {
		return ((T (*)(LoadingFlowDSLoginController*, uintptr_t))(Il2CppBase() + 0x2E458A8))(this, Msg);
	}
	template <typename T = void> T ReconnectDS() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E45FA8))(this);
	}
	template <typename T = void> T ConnectTimeout() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46208))(this);
	}
	template <typename T = void> T RetryConnectDS() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46488))(this);
	}
	template <typename T = void> T ConnectFail(Il2CppString* msg, int32_t errorCode, bool forceQuit) {
		return ((T (*)(LoadingFlowDSLoginController*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x2E440AC))(this, msg, errorCode, forceQuit);
	}
	template <typename T = Il2CppString*> T GetFailMsg(int32_t errorCode, Il2CppString* defaultMsg) {
		return ((T (*)(LoadingFlowDSLoginController*, int32_t, Il2CppString*))(Il2CppBase() + 0x2E465BC))(this, errorCode, defaultMsg);
	}
	template <typename T = void> T OnConfirmConnectFail_ForceQuit(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoadingFlowDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E4682C))(this, result, userContext);
	}
	template <typename T = void> T OnConfirmConnectFail(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoadingFlowDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E4698C))(this, result, userContext);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46B18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46B20))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46B28))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46B2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowDSLoginController*))(Il2CppBase() + 0x2E46B30))(this);
	}

};

}

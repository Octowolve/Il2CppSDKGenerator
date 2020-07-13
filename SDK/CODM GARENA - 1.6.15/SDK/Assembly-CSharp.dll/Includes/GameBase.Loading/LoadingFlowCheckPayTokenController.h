#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowCheckPayTokenController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowCheckPayTokenController"));
	}

	template <typename T = int32_t> static T& SECONDS_AVAIABLE_PAYTOKEN_QQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SECONDS_AVAIABLE_PAYTOKEN_WECHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_HasRefreshedToken() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNotNeedsToCheckPayToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPayTokenTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPayTokenTimeForQQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPayTokenTimeForWeChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyNeedRelogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyNeedReloginCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginRefreshWeChatAccessToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshAccessTokenCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishFlowSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishFlowFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_HasRefreshedToken() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3D7FC))(this);
	}
	template <typename T = void> T set_HasRefreshedToken(bool value) {
		return ((T (*)(LoadingFlowCheckPayTokenController*, bool))(Il2CppBase() + 0x2E3D804))(this, value);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3D80C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3D8D0))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3D970))(this);
	}
	template <typename T = bool> T DoNotNeedsToCheckPayToken() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3DAC4))(this);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3DCF4))(this);
	}
	template <typename T = void> T CheckPayTokenTime() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3DC10))(this);
	}
	template <typename T = void> T CheckPayTokenTimeForQQ(int32_t payTokenLeftSeconds) {
		return ((T (*)(LoadingFlowCheckPayTokenController*, int32_t))(Il2CppBase() + 0x2E3DE70))(this, payTokenLeftSeconds);
	}
	template <typename T = void> T CheckPayTokenTimeForWeChat(int32_t payTokenLeftSeconds) {
		return ((T (*)(LoadingFlowCheckPayTokenController*, int32_t))(Il2CppBase() + 0x2E3E164))(this, payTokenLeftSeconds);
	}
	template <typename T = void> T NotifyNeedRelogin() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3DF38))(this);
	}
	template <typename T = void> T OnNotifyNeedReloginCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowCheckPayTokenController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E3E548))(this, result, context);
	}
	template <typename T = void> T BeginRefreshWeChatAccessToken() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3E228))(this);
	}
	template <typename T = void> T OnRefreshAccessTokenCallback(uintptr_t result, int32_t innerResult) {
		return ((T (*)(LoadingFlowCheckPayTokenController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E3E6B8))(this, result, innerResult);
	}
	template <typename T = void> T FinishFlowSuccess() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3DB64))(this);
	}
	template <typename T = void> T FinishFlowFail() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3E60C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3EA30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3EA34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOverTime() {
		return ((T (*)(LoadingFlowCheckPayTokenController*))(Il2CppBase() + 0x2E3EA38))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadZonePlayerProfileController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadZonePlayerProfileController"));
	}

	template <typename T = bool> static T& m_IgnoreReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_TOLOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_LOGOUTTOLOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_PAYTOKEN_EXPIRED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestToZoneSvrForPlayerProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerProfileResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBasicInformation_Step1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBasicInformation_Step2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBasicInformation_Step3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestBasicInformation_Step4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SavePlayerProfileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBeaconGetProfileFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackToLoginConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> static T get_IgnoreReconnect() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E4D520))(0);
	}
	template <typename T = void> static T set_IgnoreReconnect(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2E4D5D0))(0, value);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4D684))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4D754))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4D848))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4D9A0))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4DA8C))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E4DD24))(this, result, errorMessage);
	}
	template <typename T = void> T RequestToZoneSvrForPlayerProfile() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4DB68))(this);
	}
	template <typename T = void> T OnGetPlayerProfileResp(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t))(Il2CppBase() + 0x2E4DE20))(this, Msg);
	}
	template <typename T = void> T RequestBasicInformation_Step1() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4F7CC))(this);
	}
	template <typename T = void> T RequestBasicInformation_Step2() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4FA28))(this);
	}
	template <typename T = void> T RequestBasicInformation_Step3() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4FD84))(this);
	}
	template <typename T = void> T RequestBasicInformation_Step4() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E4FFEC))(this);
	}
	template <typename T = void> T SavePlayerProfileData(uintptr_t data) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t))(Il2CppBase() + 0x2E4EFFC))(this, data);
	}
	template <typename T = void> T ReportBeaconInLobby(bool isSuccess) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, bool))(Il2CppBase() + 0x2E4E6FC))(this, isSuccess);
	}
	template <typename T = void> T ReportBeaconGetProfileFail(int32_t errorCode, bool abortFlow) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, int32_t, bool))(Il2CppBase() + 0x2E4E4A8))(this, errorCode, abortFlow);
	}
	template <typename T = void> T ProcessError(uintptr_t data) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t))(Il2CppBase() + 0x2E4ECB4))(this, data);
	}
	template <typename T = void> T OnBackToLoginConfirm(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E503DC))(this, result, context);
	}
	template <typename T = void> T OnGetPlayerProfileRespm__0() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E505DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E505F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E505F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E50600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*))(Il2CppBase() + 0x2E50608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5060C))(this, P0, P1);
	}

};

}

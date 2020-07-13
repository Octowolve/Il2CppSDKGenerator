#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadZonePlayerProfileInMatchingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadZonePlayerProfileInMatchingController"));
	}

	template <typename T = int32_t> T& m_BoxTimes() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_BoxTimesMax() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_TOFRONTEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_PAYTOKEN_EXPIRED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MESSAGEBOX_CONTEXT_TOOMANYTIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestToZoneSvrForPlayerProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerProfileResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SavePlayerProfileData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackToLoginConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E506B8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E5077C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E508A4))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E50960))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E50A00))(this);
	}
	template <typename T = void> T RequestToZoneSvrForPlayerProfile() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E50AB4))(this);
	}
	template <typename T = void> T OnGetPlayerProfileResp(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*, uintptr_t))(Il2CppBase() + 0x2E50C4C))(this, Msg);
	}
	template <typename T = void> T SavePlayerProfileData(uintptr_t data) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*, uintptr_t))(Il2CppBase() + 0x2E511D0))(this, data);
	}
	template <typename T = void> T ProcessError(uintptr_t data) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*, uintptr_t))(Il2CppBase() + 0x2E50EA0))(this, data);
	}
	template <typename T = void> T OnBackToLoginConfirm(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E513AC))(this, result, context);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E51574))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E5157C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E51584))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileInMatchingController*))(Il2CppBase() + 0x2E51588))(this);
	}

};

}

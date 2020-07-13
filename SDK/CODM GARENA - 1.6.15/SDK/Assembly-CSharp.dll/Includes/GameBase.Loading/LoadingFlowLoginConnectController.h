#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginConnectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginConnectController"));
	}

	template <typename T = uintptr_t> T& m_LoginMainController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& privacyController() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFirstLaunchTimcostReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillReportEventData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPrivacyView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E52830))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E528F4))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E52994))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E52A34))(this);
	}
	template <typename T = void> T CheckFirstLaunchTimcostReport() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E52E4C))(this);
	}
	template <typename T = void> T FillReportEventData(uintptr_t inEventData) {
		return ((T (*)(LoadingFlowLoginConnectController*, uintptr_t))(Il2CppBase() + 0x2E532DC))(this, inEventData);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E53594))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E536BC))(this);
	}
	template <typename T = void> T OnShowPrivacyView(uintptr_t msg) {
		return ((T (*)(LoadingFlowLoginConnectController*, uintptr_t))(Il2CppBase() + 0x2E53778))(this, msg);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E538E0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E538E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E538E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E538EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoginConnectController*))(Il2CppBase() + 0x2E538F4))(this);
	}

};

}

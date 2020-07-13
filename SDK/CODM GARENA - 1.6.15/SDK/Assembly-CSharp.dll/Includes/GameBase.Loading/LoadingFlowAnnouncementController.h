#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowAnnouncementController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowAnnouncementController"));
	}

	template <typename T = uintptr_t> T& m_VersionAnnouncementController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewestNotices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnnouncementConfirmCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E374AC))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E3759C))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E3763C))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E376DC))(this);
	}
	template <typename T = void> T GetNewestNotices(bool useOperateNoticeConfig) {
		return ((T (*)(LoadingFlowAnnouncementController*, bool))(Il2CppBase() + 0x2E37A54))(this, useOperateNoticeConfig);
	}
	template <typename T = void> T OnAnnouncementConfirmCallback(uintptr_t result) {
		return ((T (*)(LoadingFlowAnnouncementController*, uintptr_t))(Il2CppBase() + 0x2E38114))(this, result);
	}
	template <typename T = void> T StartFlowm__0() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E382C0))(this);
	}
	template <typename T = void> T StartFlowm__1() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E382C8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E382D0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E38374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowAnnouncementController*))(Il2CppBase() + 0x2E38468))(this);
	}

};

}

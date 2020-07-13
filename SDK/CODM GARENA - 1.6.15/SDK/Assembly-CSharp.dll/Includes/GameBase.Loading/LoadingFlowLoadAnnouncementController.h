#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadAnnouncementController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadAnnouncementController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4AD34))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4ADF8))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4AE90))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4AF30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4AFD0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B078))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B120))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowLoadAnnouncementController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E4B1C4))(this, result, errorMessage);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B368))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B370))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadAnnouncementController*))(Il2CppBase() + 0x2E4B388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowLoadAnnouncementController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E4B38C))(this, P0, P1);
	}

};

}

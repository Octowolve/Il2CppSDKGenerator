#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoadZonePlayerProfileSecondaryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoadZonePlayerProfileSecondaryController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestToZoneSvrForPlayerProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerProfileResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E5162C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E516F0))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E51800))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E518A0))(this);
	}
	template <typename T = void> T RequestToZoneSvrForPlayerProfile() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E51A20))(this);
	}
	template <typename T = void> T OnGetPlayerProfileResp(uintptr_t Msg) {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*, uintptr_t))(Il2CppBase() + 0x2E51B44))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E52780))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E52788))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoadZonePlayerProfileSecondaryController*))(Il2CppBase() + 0x2E5278C))(this);
	}

};

}

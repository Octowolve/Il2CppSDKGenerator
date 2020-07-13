#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowLoginTDirQueryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowLoginTDirQueryController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTDirQueryFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTDirFailedMsgBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDirCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5AD70))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5AE34))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5AED4))(this);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5AF78))(this);
	}
	template <typename T = void> T OnTDirQueryFailed() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5B01C))(this);
	}
	template <typename T = void> T OnTDirFailedMsgBoxCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowLoginTDirQueryController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E5B2EC))(this, result, context);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5B410))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowLoginTDirQueryController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5B52C))(this, result, errorMessage);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5B6A0))(this);
	}
	template <typename T = void> T OnDirCallback(uintptr_t tree, uintptr_t errCode) {
		return ((T (*)(LoadingFlowLoginTDirQueryController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E5BA84))(this, tree, errCode);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5BD0C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_RunTimeLimitation() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5BD10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOverTime() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5BD14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5BD18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFlowFinish(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(LoadingFlowLoginTDirQueryController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5BD20))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowLoginTDirQueryController*))(Il2CppBase() + 0x2E5BD24))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowBaseController"));
	}

	template <typename T = uintptr_t> T& LoadingFlowManagerController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_LoadingTargetMapId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LoadingFlowStatus() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsLoginToLobby() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsMatchBackToLobby() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> T& m_Result() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_ErrorMessage() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunTimeLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpectedProcessingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearOverTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinishInner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOverTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_LoadingFlowManagerController() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39400))(this);
	}
	template <typename T = void> T set_LoadingFlowManagerController(uintptr_t value) {
		return ((T (*)(LoadingFlowBaseController*, uintptr_t))(Il2CppBase() + 0x2E39408))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39410))(this);
	}
	template <typename T = int32_t> T get_LoadingTargetMapId() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E394B0))(this);
	}
	template <typename T = void> T set_LoadingTargetMapId(int32_t value) {
		return ((T (*)(LoadingFlowBaseController*, int32_t))(Il2CppBase() + 0x2E394B8))(this, value);
	}
	template <typename T = uintptr_t> T get_LoadingFlowStatus() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E394C0))(this);
	}
	template <typename T = void> T set_LoadingFlowStatus(uintptr_t value) {
		return ((T (*)(LoadingFlowBaseController*, uintptr_t))(Il2CppBase() + 0x2E394C8))(this, value);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E382D4))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E394D0))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E38378))(this);
	}
	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E379A4))(this);
	}
	template <typename T = void> T OnFlowStart() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39570))(this);
	}
	template <typename T = float> T GetExpectedProcessingTime() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39778))(this);
	}
	template <typename T = void> T OnFlowProcessing(Il2CppString* tips, float progress) {
		return ((T (*)(LoadingFlowBaseController*, Il2CppString*, float))(Il2CppBase() + 0x2E39840))(this, tips, progress);
	}
	template <typename T = void> T ClearOverTimer() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39990))(this);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowBaseController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E39A84))(this, result, errorMessage);
	}
	template <typename T = void> T OnFlowFinishInner() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39C28))(this);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39E1C))(this);
	}
	template <typename T = uintptr_t> T GetLoadingType() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E39F54))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadingFlowBaseController*))(Il2CppBase() + 0x2E3A080))(this);
	}

};

}

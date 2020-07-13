#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowManagerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowManagerController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& CheckableControllerList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LoadingType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_LoadingTargetMapId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurrentMainLoadingFlow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_CurrentLoadingFlowIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LoadingFlows() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOGIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_FRONTEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_FRONTEND_FROMMATCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_BACK_TO_FRONTEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_PVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_IN_GAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_LOADING_PVP_NO_ZONE_CONN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_RECONNECTED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_AFTERZONERECONNECT_IN_MATCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FLOWCONTROLLER_AFTERZONERECONNECT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckableControllerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCheckableController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCheckableController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingFlowManagerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessNextMainFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllMainFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishMainFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishAllFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingFlows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T get_Callback() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C5B4))(this);
	}
	template <typename T = void> T set_Callback(uintptr_t value) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5C5AC))(this, value);
	}
	template <typename T = int32_t> T GetCheckableControllerCount() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C5BC))(this);
	}
	template <typename T = void> T AddCheckableController(uintptr_t controller) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5C6C0))(this, controller);
	}
	template <typename T = void> T RemoveCheckableController(uintptr_t controller) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5C7D0))(this, controller);
	}
	template <typename T = uintptr_t> T get_LoadingType() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C8D4))(this);
	}
	template <typename T = uintptr_t> T GetLoadingFlowManagerType() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C8DC))(this);
	}
	template <typename T = int32_t> T get_LoadingTargetMapId() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C9AC))(this);
	}
	template <typename T = void> T set_LoadingTargetMapId(int32_t value) {
		return ((T (*)(LoadingFlowManagerController*, int32_t))(Il2CppBase() + 0x2E5C9B4))(this, value);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5C9BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5CA94))(this);
	}
	template <typename T = void> T StartFlows() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5CBAC))(this);
	}
	template <typename T = void> T ProcessNextMainFlow(uintptr_t lastFloatResult, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5DB58))(this, lastFloatResult, errorMessage);
	}
	template <typename T = void> T RunFlow(uintptr_t flow) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5E684))(this, flow);
	}
	template <typename T = void> T FinishFlow(uintptr_t flow, uintptr_t result) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E5DF14))(this, flow, result);
	}
	template <typename T = void> T CheckAllFlowsFinish() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5E89C))(this);
	}
	template <typename T = void> T CheckAllMainFlowsFinish(uintptr_t result) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5E514))(this, result);
	}
	template <typename T = void> T StopFlows(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5E230))(this, result, errorMessage);
	}
	template <typename T = void> T FinishMainFlows(uintptr_t result) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5EBD4))(this, result);
	}
	template <typename T = void> T FinishAllFlows(uintptr_t result) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5E9EC))(this, result);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetLoadingFlows() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5D0F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetLoadingTypes() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5EDE8))(this);
	}
	template <typename T = void> T FlowStart(uintptr_t controller) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5F518))(this, controller);
	}
	template <typename T = bool> T ShouldShowProgressBar() {
		return ((T (*)(LoadingFlowManagerController*))(Il2CppBase() + 0x2E5F678))(this);
	}
	template <typename T = void> T FlowProcessing(uintptr_t controller, float progress, Il2CppString* tips) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x2E5F894))(this, controller, progress, tips);
	}
	template <typename T = void> T FlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2E5FB48))(this, controller, result, errorMessage);
	}
	template <typename T = bool> T OnUIEvent(uintptr_t Msg) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E5FF6C))(this, Msg);
	}
	template <typename T = bool> T OnZoneEvent(uintptr_t Msg) {
		return ((T (*)(LoadingFlowManagerController*, uintptr_t))(Il2CppBase() + 0x2E600D0))(this, Msg);
	}

};

}

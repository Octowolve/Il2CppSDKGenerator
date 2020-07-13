#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZoneNetworkController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZoneNetworkController"));
	}

	template <typename T = int32_t> static T& ZONE_MODEL_REQUEST_LOADING_CONTEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_CurrentLoadingRequestCmd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_CurrentLoadingRequestCmdList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& kShowLoadingHeartBeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kShowLoadingTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kShowLoadingOthers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& kSendCmd_HeartBeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& kSendCmd_TLOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LoadingFlowCheckPayTokenController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneModelRequestQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneModelRequestBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneModelRequestEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportNetworkLatency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaitingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRequestModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideRequestModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceHideRequestModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginCheckPayToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportPayToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshAccessTokenQueryPlayerInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckableControllerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCheckableController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCheckableController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingFlowManagerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6A0AC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6A308))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6A3A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6A590))(this);
	}
	template <typename T = void> T OnZoneModelRequestQueue(uintptr_t msg) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6A674))(this, msg);
	}
	template <typename T = void> T OnZoneModelRequestBegin(uintptr_t msg) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6AA78))(this, msg);
	}
	template <typename T = void> T OnZoneModelRequestEnd(uintptr_t msg) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6AB58))(this, msg);
	}
	template <typename T = void> T ReportNetworkLatency(uintptr_t request, float deltaTime) {
		return ((T (*)(ZoneNetworkController*, uintptr_t, float))(Il2CppBase() + 0x2A6B008))(this, request, deltaTime);
	}
	template <typename T = float> T GetWaitingTime(uint32_t sendCmd) {
		return ((T (*)(ZoneNetworkController*, uint32_t))(Il2CppBase() + 0x2A6B2E8))(this, sendCmd);
	}
	template <typename T = void> T ShowRequestModel(uintptr_t request) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6A7B8))(this, request);
	}
	template <typename T = void> T HideRequestModel(uintptr_t request) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6AD5C))(this, request);
	}
	template <typename T = void> T ForceHideRequestModel(uintptr_t msg) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6B3BC))(this, msg);
	}
	template <typename T = void> T BeginCheckPayToken() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6B54C))(this);
	}
	template <typename T = void> T ReportPayToken() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6B6E8))(this);
	}
	template <typename T = void> T OnRefreshAccessTokenQueryPlayerInfoCallback(uintptr_t result) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6B8A4))(this, result);
	}
	template <typename T = int32_t> T GetCheckableControllerCount() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6B994))(this);
	}
	template <typename T = void> T AddCheckableController(uintptr_t controller) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6BA34))(this, controller);
	}
	template <typename T = void> T RemoveCheckableController(uintptr_t controller) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6BAD4))(this, controller);
	}
	template <typename T = uintptr_t> T GetLoadingFlowManagerType() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6BB74))(this);
	}
	template <typename T = void> T FlowStart(uintptr_t controller) {
		return ((T (*)(ZoneNetworkController*, uintptr_t))(Il2CppBase() + 0x2A6BC14))(this, controller);
	}
	template <typename T = void> T FlowProcessing(uintptr_t controller, float progress, Il2CppString* tips) {
		return ((T (*)(ZoneNetworkController*, uintptr_t, float, Il2CppString*))(Il2CppBase() + 0x2A6BCB4))(this, controller, progress, tips);
	}
	template <typename T = void> T FlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(ZoneNetworkController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2A6BD70))(this, controller, result, errorMessage);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6BE2C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6BE30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6BE34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZoneNetworkController*))(Il2CppBase() + 0x2A6BE38))(this);
	}

};

}

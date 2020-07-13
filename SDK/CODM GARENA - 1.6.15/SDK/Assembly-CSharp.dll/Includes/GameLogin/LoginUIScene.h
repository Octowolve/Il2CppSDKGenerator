#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginUIScene"));
	}

	template <typename T = uintptr_t> T& m_LoadingFlowControllerManager() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ShowNetworkError() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_StartVideo() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentFlow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_FlowsFailCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& MAX_FAIL_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIMSDKAuthorizationError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKingConnectError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneErrorMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowsStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> static T CreateGameUIScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x25246E0))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x25247B0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2524A7C))(this);
	}
	template <typename T = void> T OnIMSDKAuthorizationError(uintptr_t msg) {
		return ((T (*)(LoginUIScene*, uintptr_t))(Il2CppBase() + 0x2524C9C))(this, msg);
	}
	template <typename T = void> T OnKingConnectError(uintptr_t msg) {
		return ((T (*)(LoginUIScene*, uintptr_t))(Il2CppBase() + 0x25250C0))(this, msg);
	}
	template <typename T = void> T OnZoneError(uintptr_t msg) {
		return ((T (*)(LoginUIScene*, uintptr_t))(Il2CppBase() + 0x25255A4))(this, msg);
	}
	template <typename T = void> T OnZoneErrorMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LoginUIScene*, uintptr_t, int32_t))(Il2CppBase() + 0x2525BE4))(this, result, userContext);
	}
	template <typename T = void> T LoadAudioBank(bool bLoad) {
		return ((T (*)(LoginUIScene*, bool))(Il2CppBase() + 0x2525CC8))(this, bLoad);
	}
	template <typename T = void> T OnLoadVideo(uintptr_t msg) {
		return ((T (*)(LoginUIScene*, uintptr_t))(Il2CppBase() + 0x2525E34))(this, msg);
	}
	template <typename T = void> T OnCloseVideo() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2524B88))(this);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2526308))(this);
	}
	template <typename T = void> T OnFlowStart(uintptr_t controller) {
		return ((T (*)(LoginUIScene*, uintptr_t))(Il2CppBase() + 0x2526468))(this, controller);
	}
	template <typename T = void> T OnFlowProcessing(uintptr_t controller, float progress, Il2CppString* tips, bool showprogress) {
		return ((T (*)(LoginUIScene*, uintptr_t, float, Il2CppString*, bool))(Il2CppBase() + 0x2526510))(this, controller, progress, tips, showprogress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoginUIScene*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2526720))(this, controller, result, errorMessage);
	}
	template <typename T = void> T OnFlowsStart() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x252688C))(this);
	}
	template <typename T = void> T OnMainFlowsFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LoginUIScene*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2526930))(this, result, errorMessage);
	}
	template <typename T = void> T OnAllFlowsFinish() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2526E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2526EAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2526EB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadAudioBank(bool P0) {
		return ((T (*)(LoginUIScene*, bool))(Il2CppBase() + 0x2526EBC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(LoginUIScene*))(Il2CppBase() + 0x2526EC4))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowChatMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowChatMessage"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfStopOnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestOfflineChatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFetchMessageResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B320))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B3E4))(this);
	}
	template <typename T = bool> T IfStopOnError() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B484))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B524))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B6DC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B7EC))(this);
	}
	template <typename T = void> T RequestOfflineChatMessage() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B5D0))(this);
	}
	template <typename T = void> T OnFetchMessageResp(uintptr_t Msg) {
		return ((T (*)(LoadingFlowChatMessage*, uintptr_t))(Il2CppBase() + 0x2E3B8A4))(this, Msg);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMainFlow() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B9EC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfStopOnError() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B9F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartFlow() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B9F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3B9F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadingFlowChatMessage*))(Il2CppBase() + 0x2E3BA00))(this);
	}

};

}

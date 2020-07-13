#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_playerDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_PushCodLiveOps() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickClam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReclam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushCodliveOpsOnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStackTraceModelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoginPlaform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseBaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385F770))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385F814))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385F964))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385FA04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385FC70))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385FE60))(this);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x385FFB4))(this);
	}
	template <typename T = void> T ForceClose() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3860728))(this);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x38607DC))(this);
	}
	template <typename T = void> T OnClickClam() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3860ABC))(this);
	}
	template <typename T = void> T OnClickReclam() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3860D44))(this);
	}
	template <typename T = void> T OnNotifyRefreshView(uintptr_t Msg) {
		return ((T (*)(SignMainController*, uintptr_t))(Il2CppBase() + 0x3860FE8))(this, Msg);
	}
	template <typename T = void> T PushCodliveOpsOnClose(bool flag) {
		return ((T (*)(SignMainController*, bool))(Il2CppBase() + 0x3861094))(this, flag);
	}
	template <typename T = Il2CppString*> static T GetStackTraceModelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x386113C))(0);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(SignMainController*, bool, bool, bool))(Il2CppBase() + 0x3861470))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T ShowLoginPlaform() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3861550))(this);
	}
	template <typename T = void> T OnBtnCloseBaseClick() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x386183C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3861950))(this);
	}
	template <typename T = void> T OnBtnCloseBaseClick__BaseCallProxy0() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862020))(this);
	}
	template <typename T = void> T OnBtnCloseBaseClickm__0() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862028))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862038))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862048))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862050))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(SignMainController*, bool, bool, bool))(Il2CppBase() + 0x3862060))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnCloseBaseClick() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SignMainController*))(Il2CppBase() + 0x3862088))(this);
	}

};

}

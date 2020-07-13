#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class NoTeamWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "NoTeamWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTeamUpWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryAgainBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeamUpBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D250))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D2F4))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D400))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D4A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D640))(this);
	}
	template <typename T = void> T OpenTeamUpWindow() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D7BC))(this);
	}
	template <typename T = void> T OnTryAgainBtnClick() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1D8A0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DB64))(this);
	}
	template <typename T = void> T OnTeamUpBtnClick() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DD2C))(this);
	}
	template <typename T = void> T OnTeamUpBtnClickm__0() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF78))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF84))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DF9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(NoTeamWindowController*))(Il2CppBase() + 0x3A1DFA4))(this);
	}

};

}

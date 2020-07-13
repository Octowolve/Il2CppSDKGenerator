#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class TurnOnMicWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "TurnOnMicWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryTurnOnMic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurnOnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1EDC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1EE6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1EF78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1F110))(this);
	}
	template <typename T = bool> T TryTurnOnMic() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1F284))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1F7F0))(this);
	}
	template <typename T = void> T OnTurnOnBtnClick() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1F974))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1FD7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1FD84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1FD8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1FD94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreCloseAnimation() {
		return ((T (*)(TurnOnMicWindowController*))(Il2CppBase() + 0x3A1FD9C))(this);
	}

};

}

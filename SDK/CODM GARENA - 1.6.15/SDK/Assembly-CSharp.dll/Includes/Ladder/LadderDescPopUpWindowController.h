#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ladder {

class LadderDescPopUpWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ladder", "LadderDescPopUpWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x4924150))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x492425C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x4924300))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x49243A8))(this);
	}
	template <typename T = void> T UpdateView(Il2CppString* locTitle, Il2CppString* locContent, Il2CppString* headTitle) {
		return ((T (*)(LadderDescPopUpWindowController*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4924450))(this, locTitle, locContent, headTitle);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x4924714))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x492471C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x4924724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LadderDescPopUpWindowController*))(Il2CppBase() + 0x492472C))(this);
	}

};

}

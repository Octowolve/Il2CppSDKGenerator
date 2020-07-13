#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Room {

class SpvpMultiSelectTipWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Room", "SpvpMultiSelectTipWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnOKClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x413299C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132A40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132B4C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132BF4))(this);
	}
	template <typename T = void> T OnBtnOKClick() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132C9C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132D50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132D58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132D60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpMultiSelectTipWindowController*))(Il2CppBase() + 0x4132D68))(this);
	}

};

}

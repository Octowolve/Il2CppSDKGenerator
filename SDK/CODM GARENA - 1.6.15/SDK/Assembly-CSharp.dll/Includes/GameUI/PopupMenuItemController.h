#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PopupMenuItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PopupMenuItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MenuController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickedButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A97FF0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A980FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A9824C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A9839C))(this);
	}
	template <typename T = void> T SetData(uintptr_t menuController, uintptr_t data, int32_t width, int32_t height) {
		return ((T (*)(PopupMenuItemController*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3A971D4))(this, menuController, data, width, height);
	}
	template <typename T = void> T OnClickedButton() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A9843C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A98540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A98548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A98550))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PopupMenuItemController*))(Il2CppBase() + 0x3A98558))(this);
	}

};

}

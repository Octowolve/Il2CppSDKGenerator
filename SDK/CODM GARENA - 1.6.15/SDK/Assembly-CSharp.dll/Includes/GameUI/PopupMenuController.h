#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PopupMenuController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PopupMenuController"));
	}

	template <typename T = int32_t> T& CellWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& CellHeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PanelMaxWidth() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PanelMaxHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Border() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& Pivot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& ShowBorder() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_MenuItemCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppVector3>*> static T& ms_PivotOffsetRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaskClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A96B40))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A96CA4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A96E24))(this);
	}
	template <typename T = void> T SetData(Il2CppList<uintptr_t>* data) {
		return ((T (*)(PopupMenuController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3A96FA4))(this, data);
	}
	template <typename T = void> T Show() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97408))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97950))(this);
	}
	template <typename T = Il2CppVector3> T GetOffset() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A977A8))(this);
	}
	template <typename T = void> T OnMaskClicked() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97E5C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PopupMenuController*))(Il2CppBase() + 0x3A97E64))(this);
	}

};

}

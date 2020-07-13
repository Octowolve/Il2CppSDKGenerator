#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ItemDescTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ItemDescTipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_BindDescTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherAreaClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F1758))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F17FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F1908))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F1A38))(this);
	}
	template <typename T = void> T BindDescTips(uintptr_t widget, int32_t ItemId, Il2CppVector3 offset, bool bPressOrClick) {
		return ((T (*)(ItemDescTipsController*, uintptr_t, int32_t, Il2CppVector3, bool))(Il2CppBase() + 0x49F1AE0))(this, widget, ItemId, offset, bPressOrClick);
	}
	template <typename T = void> T OnIconPress(uintptr_t obj, bool bPress) {
		return ((T (*)(ItemDescTipsController*, uintptr_t, bool))(Il2CppBase() + 0x49F2078))(this, obj, bPress);
	}
	template <typename T = void> T OnIconClick(uintptr_t obj) {
		return ((T (*)(ItemDescTipsController*, uintptr_t))(Il2CppBase() + 0x49F241C))(this, obj);
	}
	template <typename T = void> T OnOtherAreaClick(uintptr_t obj, bool bPress) {
		return ((T (*)(ItemDescTipsController*, uintptr_t, bool))(Il2CppBase() + 0x49F265C))(this, obj, bPress);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F2744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F274C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F2754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ItemDescTipsController*))(Il2CppBase() + 0x49F275C))(this);
	}

};

}

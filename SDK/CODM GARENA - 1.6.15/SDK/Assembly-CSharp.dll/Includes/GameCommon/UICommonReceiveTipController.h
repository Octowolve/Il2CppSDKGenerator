#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICommonReceiveTipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICommonReceiveTipController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F7668))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F7774))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F7818))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F78C0))(this);
	}
	template <typename T = void> T SetTip(bool show, int32_t itemId, uintptr_t descType, Il2CppVector3 worldPos, int32_t width, int32_t height, uintptr_t tipSide, int32_t panel) {
		return ((T (*)(UICommonReceiveTipController*, bool, int32_t, uintptr_t, Il2CppVector3, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x49F7968))(this, show, itemId, descType, worldPos, width, height, tipSide, panel);
	}
	template <typename T = void> T SetTip_1(bool show, Il2CppString* descText, uintptr_t descType, Il2CppVector3 worldPos, int32_t width, int32_t height, uintptr_t tipSide, int32_t panel) {
		return ((T (*)(UICommonReceiveTipController*, bool, Il2CppString*, uintptr_t, Il2CppVector3, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x49F8100))(this, show, descText, descType, worldPos, width, height, tipSide, panel);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F8490))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F8498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F84A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveTipController*))(Il2CppBase() + 0x49F84A8))(this);
	}

};

}

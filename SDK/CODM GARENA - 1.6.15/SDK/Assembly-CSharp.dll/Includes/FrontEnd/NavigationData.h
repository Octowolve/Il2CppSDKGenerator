#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class NavigationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "NavigationData"));
	}

	template <typename T = int32_t> T& m_RTPC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_MainTitleLocID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_SubTitleLocID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ContentControllerType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_DisplayAnimation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IfControllerNearlyCreated() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& m_HideTopBar() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& IsShowSettingAndFriendBar() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = bool> T& NeedRecursively() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BarStyle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BarParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsShowMenuBtn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsShowSideMenu() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WindowParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_PlayerItemData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_RTPC() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B5E0))(this);
	}
	template <typename T = void> T set_RTPC(int32_t value) {
		return ((T (*)(NavigationData*, int32_t))(Il2CppBase() + 0x383B5E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MainTitleLocID() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B5F0))(this);
	}
	template <typename T = void> T set_MainTitleLocID(Il2CppString* value) {
		return ((T (*)(NavigationData*, Il2CppString*))(Il2CppBase() + 0x383B4A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitleLocID() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B600))(this);
	}
	template <typename T = void> T set_SubTitleLocID(Il2CppString* value) {
		return ((T (*)(NavigationData*, Il2CppString*))(Il2CppBase() + 0x383B4A8))(this, value);
	}
	template <typename T = uintptr_t> T get_ContentControllerType() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383A968))(this);
	}
	template <typename T = void> T set_ContentControllerType(uintptr_t value) {
		return ((T (*)(NavigationData*, uintptr_t))(Il2CppBase() + 0x383B610))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B618))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(NavigationData*, int32_t))(Il2CppBase() + 0x383B620))(this, value);
	}
	template <typename T = bool> T get_DisplayAnimation() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B628))(this);
	}
	template <typename T = void> T set_DisplayAnimation(bool value) {
		return ((T (*)(NavigationData*, bool))(Il2CppBase() + 0x383B678))(this, value);
	}
	template <typename T = bool> T get_IfControllerNearlyCreated() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B670))(this);
	}
	template <typename T = void> T set_IfControllerNearlyCreated(bool value) {
		return ((T (*)(NavigationData*, bool))(Il2CppBase() + 0x383AD2C))(this, value);
	}
	template <typename T = bool> T get_HideTopBar() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B680))(this);
	}
	template <typename T = void> T set_HideTopBar(bool value) {
		return ((T (*)(NavigationData*, bool))(Il2CppBase() + 0x383B688))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WindowParam() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B4B0))(this);
	}
	template <typename T = void> T set_WindowParam(Il2CppList<uintptr_t>* value) {
		return ((T (*)(NavigationData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x383B4B8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWindowParam() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B690))(this);
	}
	template <typename T = uintptr_t> T get_PlayerItemData() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B844))(this);
	}
	template <typename T = void> T set_PlayerItemData(uintptr_t value) {
		return ((T (*)(NavigationData*, uintptr_t))(Il2CppBase() + 0x383B84C))(this, value);
	}
	template <typename T = bool> T IsRoot() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B2E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B854))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(NavigationData*))(Il2CppBase() + 0x383B9E8))(this);
	}

};

}

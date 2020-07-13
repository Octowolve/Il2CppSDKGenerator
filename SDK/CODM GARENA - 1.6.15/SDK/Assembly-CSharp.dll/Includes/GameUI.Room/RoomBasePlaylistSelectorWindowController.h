#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBasePlaylistSelectorWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBasePlaylistSelectorWindowController"));
	}

	template <typename T = uintptr_t> T& m_BaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PlaylistState() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsOwner() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_AdaptWidth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenAnimatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCloseAnimatorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnXClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_PlaylistViewState() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF4C8))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF4D0))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF580))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF630))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF6E0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF7EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEF88C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CEFC44))(this);
	}
	template <typename T = void> T UpdateView(int32_t adaptWidth) {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2CEFE08))(this, adaptWidth);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF010C))(this);
	}
	template <typename T = void> T RunCloseAnimator() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF01A4))(this);
	}
	template <typename T = Il2CppString*> T GetOpenAnimatorName() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF044C))(this);
	}
	template <typename T = Il2CppString*> T GetCloseAnimatorName() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF0504))(this);
	}
	template <typename T = void> T OnBtnXClick() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF05BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF06A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF06AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF06B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBasePlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF06BC))(this);
	}

};

}

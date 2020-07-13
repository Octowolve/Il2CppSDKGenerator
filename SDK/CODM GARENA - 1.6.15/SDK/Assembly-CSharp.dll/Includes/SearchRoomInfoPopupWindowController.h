#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchRoomInfoPopupWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchRoomInfoPopupWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_RoomSvrAddress() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmSearchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClearClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseWindowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPasswordClearClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnJoinRoomClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputPasswordChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputRoomIdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInputDefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRefreshSearchRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C03DEC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C03E9C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C03FA8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C0404C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C04618))(this);
	}
	template <typename T = void> T OnBtnConfirmSearchClick() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C04B08))(this);
	}
	template <typename T = void> T OnBtnClearClick() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C04CF0))(this);
	}
	template <typename T = void> T OnBtnCloseWindowClick() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C04EC8))(this);
	}
	template <typename T = void> T OnBtnPasswordClearClick() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C04F7C))(this);
	}
	template <typename T = void> T OnBtnJoinRoomClick() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C05154))(this);
	}
	template <typename T = void> T OnInputPasswordChange() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C055B8))(this);
	}
	template <typename T = void> T OnInputRoomIdChange() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C0589C))(this);
	}
	template <typename T = void> T InitInputDefaultValue() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C05B00))(this);
	}
	template <typename T = void> T OnResRefreshSearchRoomInfo(uintptr_t message) {
		return ((T (*)(SearchRoomInfoPopupWindowController*, uintptr_t))(Il2CppBase() + 0x3C05F34))(this, message);
	}
	template <typename T = void> T SaveRoomInfo(uintptr_t info) {
		return ((T (*)(SearchRoomInfoPopupWindowController*, uintptr_t))(Il2CppBase() + 0x3C06258))(this, info);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C06434))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C0643C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C06444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SearchRoomInfoPopupWindowController*))(Il2CppBase() + 0x3C0644C))(this);
	}

};

}

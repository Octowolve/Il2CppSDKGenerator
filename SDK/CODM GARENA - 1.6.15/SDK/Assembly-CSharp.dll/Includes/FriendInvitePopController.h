#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendInvitePopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendInvitePopController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControlInviteBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessengerBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLineBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSystemBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWhatsAppBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSMSBtnClick_Invite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9164))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9208))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9368))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C97D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9B80))(this);
	}
	template <typename T = void> T ControlInviteBtnActive() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9538))(this);
	}
	template <typename T = void> T OnMessengerBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9E90))(this);
	}
	template <typename T = void> T OnGarenaBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9F34))(this);
	}
	template <typename T = void> T OnLineBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32C9FD4))(this);
	}
	template <typename T = void> T OnSystemBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA078))(this);
	}
	template <typename T = void> T OnWhatsAppBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA11C))(this);
	}
	template <typename T = void> T OnSMSBtnClick_Invite() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA1C0))(this);
	}
	template <typename T = void> T OnHideView(uintptr_t msg) {
		return ((T (*)(FriendInvitePopController*, uintptr_t))(Il2CppBase() + 0x32CA264))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FriendInvitePopController*))(Il2CppBase() + 0x32CA340))(this);
	}

};

}

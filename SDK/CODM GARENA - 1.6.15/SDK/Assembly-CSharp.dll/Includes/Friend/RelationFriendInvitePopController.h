#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class RelationFriendInvitePopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "RelationFriendInvitePopController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessengerBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGarenaBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLineBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSystemBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWhatsAppBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSMSBtnClick_InviteTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C1BD8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C1C7C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C1D88))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C20D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C2480))(this);
	}
	template <typename T = void> T ControlInviteBtnActive() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C1E38))(this);
	}
	template <typename T = void> T OnMessengerBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C2B20))(this);
	}
	template <typename T = void> T OnGarenaBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C2EF4))(this);
	}
	template <typename T = void> T OnLineBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C3294))(this);
	}
	template <typename T = void> T OnSystemBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C3370))(this);
	}
	template <typename T = void> T OnWhatsAppBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C344C))(this);
	}
	template <typename T = void> T OnSMSBtnClick_InviteTeam() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C3528))(this);
	}
	template <typename T = void> T OnHideView(uintptr_t msg) {
		return ((T (*)(RelationFriendInvitePopController*, uintptr_t))(Il2CppBase() + 0x32C3604))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C36C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C36C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C36D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C36D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RelationFriendInvitePopController*))(Il2CppBase() + 0x32C36E0))(this);
	}

};

}

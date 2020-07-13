#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFriendRequestItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFriendRequestItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendRequestBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBDD90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBDE34))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBDF40))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBE074))(this);
	}
	template <typename T = void> T OnFriendRequestBtnClick() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBE190))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildFriendRequestItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3BBE900))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBF22C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBF234))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBF23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildFriendRequestItemController*))(Il2CppBase() + 0x3BBF244))(this);
	}

};

}

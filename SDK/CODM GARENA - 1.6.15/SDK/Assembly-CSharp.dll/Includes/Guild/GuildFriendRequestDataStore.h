#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFriendRequestDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFriendRequestDataStore"));
	}

	template <typename T = int32_t> T& AllFriendsNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& OnlineFriendsNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& RequestNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FriendList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanInviteToGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GuildSystemUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteFriendSortValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInviteCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_FriendList() {
		return ((T (*)(GuildFriendRequestDataStore*))(Il2CppBase() + 0x3BBD2B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetFriends() {
		return ((T (*)(GuildFriendRequestDataStore*))(Il2CppBase() + 0x3BBB804))(this);
	}
	template <typename T = bool> T CanInviteToGuild(uintptr_t info) {
		return ((T (*)(GuildFriendRequestDataStore*, uintptr_t))(Il2CppBase() + 0x3BBD5E0))(this, info);
	}
	template <typename T = bool> T GuildSystemUnlock(uintptr_t info) {
		return ((T (*)(GuildFriendRequestDataStore*, uintptr_t))(Il2CppBase() + 0x3BBD704))(this, info);
	}
	template <typename T = int32_t> T GetInviteFriendSortValue(uintptr_t info) {
		return ((T (*)(GuildFriendRequestDataStore*, uintptr_t))(Il2CppBase() + 0x3BBD820))(this, info);
	}
	template <typename T = void> T UpdateInviteCount(uint32_t num) {
		return ((T (*)(GuildFriendRequestDataStore*, uint32_t))(Il2CppBase() + 0x3BBD964))(this, num);
	}
	template <typename T = int32_t> T GetFriendsm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(GuildFriendRequestDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BBDA20))(this, a, b);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoomFriendInviteReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomFriendInviteReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& RoomId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PlayerNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsViewExpanded() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& InvitationNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& InvitationSuccessNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& InvitationNumFromAll() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& InvitationNumFromFriend() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& InvitationNumFromGuild() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& InvitationNumFromRecent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& IsEachTabOpen() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsGameStart() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_CachePlayerIdList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInviteSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(RoomFriendInviteReport*))(Il2CppBase() + 0x495125C))(this);
	}
	template <typename T = void> T SetRoomInfo(bool isGameStart) {
		return ((T (*)(RoomFriendInviteReport*, bool))(Il2CppBase() + 0x49512D4))(this, isGameStart);
	}
	template <typename T = void> T SetTabOpen(int32_t tab) {
		return ((T (*)(RoomFriendInviteReport*, int32_t))(Il2CppBase() + 0x49514DC))(this, tab);
	}
	template <typename T = void> T SetInvite(uint64_t playerId, int32_t tab) {
		return ((T (*)(RoomFriendInviteReport*, uint64_t, int32_t))(Il2CppBase() + 0x49515C4))(this, playerId, tab);
	}
	template <typename T = bool> T CheckInviteSuccess(uint64_t playerId) {
		return ((T (*)(RoomFriendInviteReport*, uint64_t))(Il2CppBase() + 0x49517A4))(this, playerId);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(RoomFriendInviteReport*))(Il2CppBase() + 0x4951928))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(RoomFriendInviteReport*))(Il2CppBase() + 0x4951A48))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs() {
		return ((T (*)(RoomFriendInviteReport*))(Il2CppBase() + 0x4951DD8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(RoomFriendInviteReport*))(Il2CppBase() + 0x4951F48))(this);
	}

};

}

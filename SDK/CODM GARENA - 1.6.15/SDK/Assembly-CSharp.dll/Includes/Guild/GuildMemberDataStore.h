#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMemberDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMemberDataStore"));
	}

	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& WaitingForData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MemberInfoList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MemberInfoListForRoom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SelectedMemberIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EventInfoList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& WaitingForData_Event() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_SortType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_SelfRank() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGuildID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetGuildMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetGuildMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMemberState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberListForListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberListForWeekStarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberListForRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnlineFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareMemberListForRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PriorityOfGuildMemberState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SortMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfMemberInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildFireMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildFireMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestQuitGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseQuitGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAppointViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAppointViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDeposeViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseDeposeViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestSwitchCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseSwitchCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetGuildEventList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetGuildEventList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteJoinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uint64_t> T get_GuildID() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCD0AC))(this);
	}
	template <typename T = void> T set_GuildID(uint64_t value) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BCD0B4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MemberInfoList() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCA1BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_EventInfoList() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BBA39C))(this);
	}
	template <typename T = int32_t> T get_SelfRank() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCD0C4))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCD0CC))(this);
	}
	template <typename T = void> T SetGuildID(uint64_t guildID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BB38FC))(this, guildID);
	}
	template <typename T = Il2CppString*> T GetMemberName(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BCD210))(this, playerID);
	}
	template <typename T = uintptr_t> T GetGuildMemberInfo(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BCD3F8))(this, playerID);
	}
	template <typename T = void> T RequestGetGuildMemberList() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BC6884))(this);
	}
	template <typename T = void> T ResponseGetGuildMemberList(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BCD584))(this, response);
	}
	template <typename T = void> T RefreshMemberState(uintptr_t state, bool bPartUpdate) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t, bool))(Il2CppBase() + 0x3BCDE98))(this, state, bPartUpdate);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMemberListForListView() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCE274))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMemberListForWeekStarView() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BC626C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMemberListForRoom() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCE48C))(this);
	}
	template <typename T = Il2CppString*> T GetOnlineFormat() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCE5AC))(this);
	}
	template <typename T = int32_t> T CompareMemberListForRoom(uintptr_t a, uintptr_t b) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BCE7B8))(this, a, b);
	}
	template <typename T = int32_t> T PriorityOfGuildMemberState(uintptr_t type) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BCEA48))(this, type);
	}
	template <typename T = void> T SortMemberList(uintptr_t sortInfo, Il2CppList<uintptr_t>* list) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3BCE364))(this, sortInfo, list);
	}
	template <typename T = void> T SortMemberList_1(Il2CppList<uintptr_t>* list, int32_t localPlayerWeight, int32_t onLineWeight, int32_t inGameWeight, int32_t roleTypeWeight, int32_t activityWeight_Daily, int32_t activityWeight_Weekly, int32_t activityWeight_Seasonal, int32_t playerIDWeight, int32_t joinTimeWeight) {
		return ((T (*)(GuildMemberDataStore*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3BCEB18))(this, list, localPlayerWeight, onLineWeight, inGameWeight, roleTypeWeight, activityWeight_Daily, activityWeight_Weekly, activityWeight_Seasonal, playerIDWeight, joinTimeWeight);
	}
	template <typename T = uintptr_t> T GetSelfMemberInfo() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCF03C))(this);
	}
	template <typename T = void> T RequestGuildFireMember(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BCF234))(this, playerID);
	}
	template <typename T = void> T ResponseGuildFireMember(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BCF3E4))(this, response);
	}
	template <typename T = void> T RequestQuitGuild() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCF7A4))(this);
	}
	template <typename T = void> T ResponseQuitGuild(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BCF8F0))(this, response);
	}
	template <typename T = void> T RequestGuildImpeachment() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BCFD58))(this);
	}
	template <typename T = void> T ResponseGuildImpeachment(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BCFE8C))(this, response);
	}
	template <typename T = void> T RequestAppointViceCaptain(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BD0488))(this, playerID);
	}
	template <typename T = void> T ResponseAppointViceCaptain(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BD05E4))(this, response);
	}
	template <typename T = void> T RequestDeposeViceCaptain(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BD09E8))(this, playerID);
	}
	template <typename T = void> T ResponseDeposeViceCaptain(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BD0B44))(this, response);
	}
	template <typename T = void> T RequestSwitchCaptain(uint64_t playerID) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BD0F48))(this, playerID);
	}
	template <typename T = void> T ResponseSwitchCaptain(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BD10A4))(this, response);
	}
	template <typename T = void> T RequestGetGuildEventList() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BB9F18))(this);
	}
	template <typename T = void> T ResponseGetGuildEventList(uintptr_t response) {
		return ((T (*)(GuildMemberDataStore*, uintptr_t))(Il2CppBase() + 0x3BD14A8))(this, response);
	}
	template <typename T = void> T SetInviteJoinTime(uint64_t playerId) {
		return ((T (*)(GuildMemberDataStore*, uint64_t))(Il2CppBase() + 0x3BD1CC8))(this, playerId);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildMemberDataStore*))(Il2CppBase() + 0x3BD1F14))(this);
	}

};

}

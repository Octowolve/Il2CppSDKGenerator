#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildApplyMsgDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildApplyMsgDataStore"));
	}

	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsWaitingForData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ApplyNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ApplyInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_RedPointFlag() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetApplyJoinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildApplyMsgInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsApplyMsgInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetApplyMsgPlayerIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGetApplyJoinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateApplyNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDeleteAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResonseDeleteAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildApproveJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildApproveJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetApplyMsgIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsWaitingForData() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3BE7C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ApplyInfoList() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3A4D4))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3BE84))(this);
	}
	template <typename T = void> T SetGuildID(uint64_t guildID) {
		return ((T (*)(GuildApplyMsgDataStore*, uint64_t))(Il2CppBase() + 0x3E3BF70))(this, guildID);
	}
	template <typename T = void> T RequestGetApplyJoinList() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3A000))(this);
	}
	template <typename T = uintptr_t> T BuildApplyMsgInfo(uintptr_t rawData) {
		return ((T (*)(GuildApplyMsgDataStore*, uintptr_t))(Il2CppBase() + 0x3E3C04C))(this, rawData);
	}
	template <typename T = bool> T ContainsApplyMsgInfo(uintptr_t rawData) {
		return ((T (*)(GuildApplyMsgDataStore*, uintptr_t))(Il2CppBase() + 0x3E3C53C))(this, rawData);
	}
	template <typename T = int32_t> T GetApplyMsgPlayerIndex(uint64_t playerID) {
		return ((T (*)(GuildApplyMsgDataStore*, uint64_t))(Il2CppBase() + 0x3E3C6FC))(this, playerID);
	}
	template <typename T = void> T ResponseGetApplyJoinList(uintptr_t response) {
		return ((T (*)(GuildApplyMsgDataStore*, uintptr_t))(Il2CppBase() + 0x3E3C864))(this, response);
	}
	template <typename T = void> T CalculateApplyNum() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3D0F4))(this);
	}
	template <typename T = void> T RequestDeleteAll() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3BACC))(this);
	}
	template <typename T = void> T ResonseDeleteAll(uintptr_t response) {
		return ((T (*)(GuildApplyMsgDataStore*, uintptr_t))(Il2CppBase() + 0x3E3D254))(this, response);
	}
	template <typename T = void> T RequestGuildApproveJoin(uint64_t playerID, bool agree) {
		return ((T (*)(GuildApplyMsgDataStore*, uint64_t, bool))(Il2CppBase() + 0x3E3D430))(this, playerID, agree);
	}
	template <typename T = void> T ResponseGuildApproveJoin(uintptr_t response) {
		return ((T (*)(GuildApplyMsgDataStore*, uintptr_t))(Il2CppBase() + 0x3E3D680))(this, response);
	}
	template <typename T = int32_t> T GetApplyMsgIndex(uint64_t playerID) {
		return ((T (*)(GuildApplyMsgDataStore*, uint64_t))(Il2CppBase() + 0x3E3DBBC))(this, playerID);
	}
	template <typename T = void> T SetServerRedPointFlag(bool flag) {
		return ((T (*)(GuildApplyMsgDataStore*, bool))(Il2CppBase() + 0x3E3DD24))(this, flag);
	}
	template <typename T = int32_t> T CheckRedPoint() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3DDE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildApplyMsgDataStore*))(Il2CppBase() + 0x3E3DE8C))(this);
	}

};

}

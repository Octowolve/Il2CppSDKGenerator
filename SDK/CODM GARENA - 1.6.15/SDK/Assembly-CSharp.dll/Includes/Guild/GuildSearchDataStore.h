#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSearchDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSearchDataStore"));
	}

	template <typename T = bool> T& m_IsWaitingForData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SearchInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildSearch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildSearch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildSearchInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestJoinGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildApplyJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAutoJoinGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAutoJoinGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsWaitingForData() {
		return ((T (*)(GuildSearchDataStore*))(Il2CppBase() + 0x3BEF250))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SearchInfoList() {
		return ((T (*)(GuildSearchDataStore*))(Il2CppBase() + 0x3BED680))(this);
	}
	template <typename T = void> T RequestGuildSearch(Il2CppString* content, int32_t mode, bool noneed_approval) {
		return ((T (*)(GuildSearchDataStore*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x3BEB430))(this, content, mode, noneed_approval);
	}
	template <typename T = void> T ResponseGuildSearch(uintptr_t response) {
		return ((T (*)(GuildSearchDataStore*, uintptr_t))(Il2CppBase() + 0x3BEC188))(this, response);
	}
	template <typename T = uintptr_t> T BuildSearchInfo(uintptr_t summaryInfo) {
		return ((T (*)(GuildSearchDataStore*, uintptr_t))(Il2CppBase() + 0x3BEF258))(this, summaryInfo);
	}
	template <typename T = void> T RequestJoinGuild(uint64_t guildID, bool isAutoJoin, uint64_t inviterId) {
		return ((T (*)(GuildSearchDataStore*, uint64_t, bool, uint64_t))(Il2CppBase() + 0x3BEBC78))(this, guildID, isAutoJoin, inviterId);
	}
	template <typename T = void> T ResponseGuildApplyJoin(uintptr_t response) {
		return ((T (*)(GuildSearchDataStore*, uintptr_t))(Il2CppBase() + 0x3BEFAB8))(this, response);
	}
	template <typename T = void> T RequestAutoJoinGuild() {
		return ((T (*)(GuildSearchDataStore*))(Il2CppBase() + 0x3BEECFC))(this);
	}
	template <typename T = void> T ResponseAutoJoinGuild(uintptr_t response) {
		return ((T (*)(GuildSearchDataStore*, uintptr_t))(Il2CppBase() + 0x3BF09E8))(this, response);
	}

};

}

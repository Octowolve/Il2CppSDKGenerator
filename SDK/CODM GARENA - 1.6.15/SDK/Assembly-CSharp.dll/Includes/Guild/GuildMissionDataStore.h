#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMissionDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMissionDataStore"));
	}

	template <typename T = uintptr_t> T& mGuildMissionInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& mMissionAwardGetInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mMissionConf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& red_point_flag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& is_init() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uint64_t> T& m_GuildID() {
		return *(T*)((uintptr_t)this + 0x38);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildMissionAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseGuildMissionAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyGuildMissionCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRedPointFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HaveAwardCanGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAwardCanGetCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObtainActiveLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAwardResived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_GuildMissionConf() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDB83C))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDD310))(this);
	}
	template <typename T = void> T SetGuildID(uint64_t guildID) {
		return ((T (*)(GuildMissionDataStore*, uint64_t))(Il2CppBase() + 0x3BB39D8))(this, guildID);
	}
	template <typename T = void> T RequestGuildMission() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDAF34))(this);
	}
	template <typename T = void> T ResponseGuildMission(uintptr_t response) {
		return ((T (*)(GuildMissionDataStore*, uintptr_t))(Il2CppBase() + 0x3BDD454))(this, response);
	}
	template <typename T = void> T RequestGuildMissionAward() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDCB64))(this);
	}
	template <typename T = void> T ResponseGuildMissionAward(uintptr_t response) {
		return ((T (*)(GuildMissionDataStore*, uintptr_t))(Il2CppBase() + 0x3BDD748))(this, response);
	}
	template <typename T = void> T NotifyGuildMissionCompleted(uintptr_t ntf) {
		return ((T (*)(GuildMissionDataStore*, uintptr_t))(Il2CppBase() + 0x3BDD9B8))(this, ntf);
	}
	template <typename T = void> T ResetRedPointFlag() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDDA78))(this);
	}
	template <typename T = bool> T HaveAwardCanGet() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDC860))(this);
	}
	template <typename T = int32_t> T GetAwardCanGetCount() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BB80C4))(this);
	}
	template <typename T = int32_t> T GetObtainActiveLimit() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDC6D8))(this);
	}
	template <typename T = bool> T IsAwardResived(int32_t index) {
		return ((T (*)(GuildMissionDataStore*, int32_t))(Il2CppBase() + 0x3BDC594))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(GuildMissionDataStore*))(Il2CppBase() + 0x3BDDB30))(this);
	}

};

}

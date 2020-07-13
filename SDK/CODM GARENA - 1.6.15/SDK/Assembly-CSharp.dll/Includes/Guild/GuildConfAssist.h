#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildConfAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildConfAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeekPrizeConf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SeasonPrizeConf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EventConf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LeveConf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BaseConf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildSeasonPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildWeekPrizeForShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildSeasonPrizeForShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGuildWeekPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCsGuildLevelConfByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendMaxRequestNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_WeekPrizeConf() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E47098))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SeasonPrizeConf() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E470A0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_EventConf() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E470A8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_LeveConf() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E470B0))(this);
	}
	template <typename T = uintptr_t> T get_BaseConf() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E470B8))(this);
	}
	template <typename T = void> T UpdateConf(uintptr_t res) {
		return ((T (*)(GuildConfAssist*, uintptr_t))(Il2CppBase() + 0x3E470C0))(this, res);
	}
	template <typename T = uintptr_t> T GetGuildSeasonPrize(int32_t rank, int32_t per) {
		return ((T (*)(GuildConfAssist*, int32_t, int32_t))(Il2CppBase() + 0x3E472B8))(this, rank, per);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGuildWeekPrizeForShow() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E474E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetGuildSeasonPrizeForShow() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E4772C))(this);
	}
	template <typename T = uintptr_t> T GetGuildWeekPrize(int32_t rank, int32_t per) {
		return ((T (*)(GuildConfAssist*, int32_t, int32_t))(Il2CppBase() + 0x3E47978))(this, rank, per);
	}
	template <typename T = uintptr_t> T GetCsGuildLevelConfByLevel(int32_t level) {
		return ((T (*)(GuildConfAssist*, int32_t))(Il2CppBase() + 0x3E47BA0))(this, level);
	}
	template <typename T = uint32_t> T GetFriendMaxRequestNum() {
		return ((T (*)(GuildConfAssist*))(Il2CppBase() + 0x3E47D94))(this);
	}

};

}

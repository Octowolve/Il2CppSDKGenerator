#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGuildActiveWeekRankPrizeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GuildActiveWeekRankPrizeNtf"));
	}

	template <typename T = uint32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _guild_active() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _player_active() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _min_active() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prize_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _member_rank_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _permile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_rank() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB850))(this);
	}
	template <typename T = void> T set_rank(uint32_t value) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, uint32_t))(Il2CppBase() + 0x51DB858))(this, value);
	}
	template <typename T = uint32_t> T get_guild_active() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB860))(this);
	}
	template <typename T = void> T set_guild_active(uint32_t value) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, uint32_t))(Il2CppBase() + 0x51DB868))(this, value);
	}
	template <typename T = uint32_t> T get_player_active() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB870))(this);
	}
	template <typename T = void> T set_player_active(uint32_t value) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, uint32_t))(Il2CppBase() + 0x51DB878))(this, value);
	}
	template <typename T = uint32_t> T get_min_active() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB880))(this);
	}
	template <typename T = void> T set_min_active(uint32_t value) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, uint32_t))(Il2CppBase() + 0x51DB888))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prize_info() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB890))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_member_rank_list() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB898))(this);
	}
	template <typename T = uint32_t> T get_permile() {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*))(Il2CppBase() + 0x51DB8A0))(this);
	}
	template <typename T = void> T set_permile(uint32_t value) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, uint32_t))(Il2CppBase() + 0x51DB8A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGuildActiveWeekRankPrizeNtf*, bool))(Il2CppBase() + 0x51DB8B0))(this, createIfMissing);
	}

};

}

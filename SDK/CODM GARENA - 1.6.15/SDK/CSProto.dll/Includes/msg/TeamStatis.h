#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TeamStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TeamStatis"));
	}

	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _team_br_match_mmr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _team_br_ladder_hidden_score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_bot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _human_team_rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _teammate_statis() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _team_rank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA194))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(TeamStatis*, uint32_t))(Il2CppBase() + 0x51AA19C))(this, value);
	}
	template <typename T = int32_t> T get_team_br_match_mmr() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1A4))(this);
	}
	template <typename T = void> T set_team_br_match_mmr(int32_t value) {
		return ((T (*)(TeamStatis*, int32_t))(Il2CppBase() + 0x51AA1AC))(this, value);
	}
	template <typename T = int32_t> T get_team_br_ladder_hidden_score() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1B4))(this);
	}
	template <typename T = void> T set_team_br_ladder_hidden_score(int32_t value) {
		return ((T (*)(TeamStatis*, int32_t))(Il2CppBase() + 0x51AA1BC))(this, value);
	}
	template <typename T = bool> T get_is_bot() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1C4))(this);
	}
	template <typename T = void> T set_is_bot(bool value) {
		return ((T (*)(TeamStatis*, bool))(Il2CppBase() + 0x51AA1CC))(this, value);
	}
	template <typename T = int32_t> T get_human_team_rank() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1D4))(this);
	}
	template <typename T = void> T set_human_team_rank(int32_t value) {
		return ((T (*)(TeamStatis*, int32_t))(Il2CppBase() + 0x51AA1DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_teammate_statis() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1E4))(this);
	}
	template <typename T = int32_t> T get_team_rank() {
		return ((T (*)(TeamStatis*))(Il2CppBase() + 0x51AA1EC))(this);
	}
	template <typename T = void> T set_team_rank(int32_t value) {
		return ((T (*)(TeamStatis*, int32_t))(Il2CppBase() + 0x51AA1F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TeamStatis*, bool))(Il2CppBase() + 0x51AA1FC))(this, createIfMissing);
	}

};

}

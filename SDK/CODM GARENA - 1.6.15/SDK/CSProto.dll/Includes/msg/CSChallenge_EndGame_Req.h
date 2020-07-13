#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeEndGameReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_EndGame_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _round_score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _win() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _kill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _headshot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _tlog_ntf() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _fight_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _end_type() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5EAC))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, int32_t))(Il2CppBase() + 0x51E5EB4))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5EBC))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, int32_t))(Il2CppBase() + 0x51E5EC4))(this, value);
	}
	template <typename T = int32_t> T get_round_score() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5ECC))(this);
	}
	template <typename T = void> T set_round_score(int32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, int32_t))(Il2CppBase() + 0x51E5ED4))(this, value);
	}
	template <typename T = bool> T get_win() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5EDC))(this);
	}
	template <typename T = void> T set_win(bool value) {
		return ((T (*)(CSChallengeEndGameReq*, bool))(Il2CppBase() + 0x51E5EE4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5EEC))(this);
	}
	template <typename T = uint32_t> T get_kill() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5EF4))(this);
	}
	template <typename T = void> T set_kill(uint32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, uint32_t))(Il2CppBase() + 0x51E5EFC))(this, value);
	}
	template <typename T = uint32_t> T get_headshot() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5F04))(this);
	}
	template <typename T = void> T set_headshot(uint32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, uint32_t))(Il2CppBase() + 0x51E5F0C))(this, value);
	}
	template <typename T = uintptr_t> T get_tlog_ntf() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5F14))(this);
	}
	template <typename T = void> T set_tlog_ntf(uintptr_t value) {
		return ((T (*)(CSChallengeEndGameReq*, uintptr_t))(Il2CppBase() + 0x51E5F1C))(this, value);
	}
	template <typename T = uintptr_t> T get_fight_info() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5F24))(this);
	}
	template <typename T = void> T set_fight_info(uintptr_t value) {
		return ((T (*)(CSChallengeEndGameReq*, uintptr_t))(Il2CppBase() + 0x51E5F2C))(this, value);
	}
	template <typename T = int32_t> T get_end_type() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5F34))(this);
	}
	template <typename T = void> T set_end_type(int32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, int32_t))(Il2CppBase() + 0x51E5F3C))(this, value);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(CSChallengeEndGameReq*))(Il2CppBase() + 0x51E5F44))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(CSChallengeEndGameReq*, uint32_t))(Il2CppBase() + 0x51E5F4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeEndGameReq*, bool))(Il2CppBase() + 0x51E5F54))(this, createIfMissing);
	}

};

}

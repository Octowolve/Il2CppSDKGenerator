#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeStartGameRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_StartGame_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _section_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _award() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _day_play_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skip_result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _add_card_res() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _current_score() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _is_skip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _expert_numers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF13C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, int32_t))(Il2CppBase() + 0x51CF144))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF14C))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, int32_t))(Il2CppBase() + 0x51CF154))(this, value);
	}
	template <typename T = int32_t> T get_section_id() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF15C))(this);
	}
	template <typename T = void> T set_section_id(int32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, int32_t))(Il2CppBase() + 0x51CF164))(this, value);
	}
	template <typename T = uintptr_t> T get_award() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF16C))(this);
	}
	template <typename T = void> T set_award(uintptr_t value) {
		return ((T (*)(CSChallengeStartGameRes*, uintptr_t))(Il2CppBase() + 0x51CF174))(this, value);
	}
	template <typename T = int32_t> T get_day_play_count() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF17C))(this);
	}
	template <typename T = void> T set_day_play_count(int32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, int32_t))(Il2CppBase() + 0x51CF184))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_skip_result() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF18C))(this);
	}
	template <typename T = uintptr_t> T get_add_card_res() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF194))(this);
	}
	template <typename T = void> T set_add_card_res(uintptr_t value) {
		return ((T (*)(CSChallengeStartGameRes*, uintptr_t))(Il2CppBase() + 0x51CF19C))(this, value);
	}
	template <typename T = int32_t> T get_current_score() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF1A4))(this);
	}
	template <typename T = void> T set_current_score(int32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, int32_t))(Il2CppBase() + 0x51CF1AC))(this, value);
	}
	template <typename T = bool> T get_is_skip() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF1B4))(this);
	}
	template <typename T = void> T set_is_skip(bool value) {
		return ((T (*)(CSChallengeStartGameRes*, bool))(Il2CppBase() + 0x51CF1BC))(this, value);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF1C4))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(CSChallengeStartGameRes*, uint32_t))(Il2CppBase() + 0x51CF1CC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_expert_numers() {
		return ((T (*)(CSChallengeStartGameRes*))(Il2CppBase() + 0x51CF1D4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeStartGameRes*, bool))(Il2CppBase() + 0x51CF1DC))(this, createIfMissing);
	}

};

}

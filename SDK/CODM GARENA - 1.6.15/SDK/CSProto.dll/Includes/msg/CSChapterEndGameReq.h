#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterEndGameReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterEndGameReq"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _match_result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _score_star() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _star_content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _base_score() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _game_duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _kill() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _headshot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _tlog_ntf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _fight_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _end_type() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF5BC))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF5C4))(this, value);
	}
	template <typename T = int32_t> T get_match_result() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF5CC))(this);
	}
	template <typename T = void> T set_match_result(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF5D4))(this, value);
	}
	template <typename T = int32_t> T get_score_star() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF5DC))(this);
	}
	template <typename T = void> T set_score_star(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF5E4))(this, value);
	}
	template <typename T = int32_t> T get_star_content() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF5EC))(this);
	}
	template <typename T = void> T set_star_content(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF5F4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF5FC))(this);
	}
	template <typename T = int32_t> T get_base_score() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF604))(this);
	}
	template <typename T = void> T set_base_score(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF60C))(this, value);
	}
	template <typename T = int32_t> T get_game_duration() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF614))(this);
	}
	template <typename T = void> T set_game_duration(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF61C))(this, value);
	}
	template <typename T = uint32_t> T get_kill() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF624))(this);
	}
	template <typename T = void> T set_kill(uint32_t value) {
		return ((T (*)(CSChapterEndGameReq*, uint32_t))(Il2CppBase() + 0x51CF62C))(this, value);
	}
	template <typename T = uint32_t> T get_headshot() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF634))(this);
	}
	template <typename T = void> T set_headshot(uint32_t value) {
		return ((T (*)(CSChapterEndGameReq*, uint32_t))(Il2CppBase() + 0x51CF63C))(this, value);
	}
	template <typename T = uintptr_t> T get_tlog_ntf() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF644))(this);
	}
	template <typename T = void> T set_tlog_ntf(uintptr_t value) {
		return ((T (*)(CSChapterEndGameReq*, uintptr_t))(Il2CppBase() + 0x51CF64C))(this, value);
	}
	template <typename T = uintptr_t> T get_fight_info() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF654))(this);
	}
	template <typename T = void> T set_fight_info(uintptr_t value) {
		return ((T (*)(CSChapterEndGameReq*, uintptr_t))(Il2CppBase() + 0x51CF65C))(this, value);
	}
	template <typename T = int32_t> T get_end_type() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF664))(this);
	}
	template <typename T = void> T set_end_type(int32_t value) {
		return ((T (*)(CSChapterEndGameReq*, int32_t))(Il2CppBase() + 0x51CF66C))(this, value);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(CSChapterEndGameReq*))(Il2CppBase() + 0x51CF674))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(CSChapterEndGameReq*, uint32_t))(Il2CppBase() + 0x51CF67C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterEndGameReq*, bool))(Il2CppBase() + 0x51CF684))(this, createIfMissing);
	}

};

}

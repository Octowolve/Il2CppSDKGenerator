#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterEndGameRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterEndGameRes"));
	}

	template <typename T = int32_t> T& _result() {
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
	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _chapter_result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _unlock_chapter_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _lottery_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _lottery_data_change() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6A0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF6A8))(this, value);
	}
	template <typename T = int32_t> T get_match_result() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6B0))(this);
	}
	template <typename T = void> T set_match_result(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF6B8))(this, value);
	}
	template <typename T = int32_t> T get_score_star() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6C0))(this);
	}
	template <typename T = void> T set_score_star(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF6C8))(this, value);
	}
	template <typename T = int32_t> T get_star_content() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6D0))(this);
	}
	template <typename T = void> T set_star_content(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF6D8))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6E0))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF6E8))(this, value);
	}
	template <typename T = uintptr_t> T get_chapter_result() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF6F0))(this);
	}
	template <typename T = void> T set_chapter_result(uintptr_t value) {
		return ((T (*)(CSChapterEndGameRes*, uintptr_t))(Il2CppBase() + 0x51CF6F8))(this, value);
	}
	template <typename T = int32_t> T get_unlock_chapter_id() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF700))(this);
	}
	template <typename T = void> T set_unlock_chapter_id(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF708))(this, value);
	}
	template <typename T = int32_t> T get_lottery_id() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF710))(this);
	}
	template <typename T = void> T set_lottery_id(int32_t value) {
		return ((T (*)(CSChapterEndGameRes*, int32_t))(Il2CppBase() + 0x51CF718))(this, value);
	}
	template <typename T = uintptr_t> T get_lottery_data_change() {
		return ((T (*)(CSChapterEndGameRes*))(Il2CppBase() + 0x51CF720))(this);
	}
	template <typename T = void> T set_lottery_data_change(uintptr_t value) {
		return ((T (*)(CSChapterEndGameRes*, uintptr_t))(Il2CppBase() + 0x51CF728))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterEndGameRes*, bool))(Il2CppBase() + 0x51CF730))(this, createIfMissing);
	}

};

}

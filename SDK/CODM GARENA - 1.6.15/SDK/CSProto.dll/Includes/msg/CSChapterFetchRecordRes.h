#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterFetchRecordRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterFetchRecordRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _chapter_record() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _normal_level_star() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _normal_level_chapter_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _hard_level_star() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _hard_level_chapter_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _hell_level_star() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _hell_level_chapter_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF798))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF7A0))(this, value);
	}
	template <typename T = uintptr_t> T get_chapter_record() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7A8))(this);
	}
	template <typename T = void> T set_chapter_record(uintptr_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, uintptr_t))(Il2CppBase() + 0x51CF7B0))(this, value);
	}
	template <typename T = int32_t> T get_normal_level_star() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7B8))(this);
	}
	template <typename T = void> T set_normal_level_star(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF7C0))(this, value);
	}
	template <typename T = int32_t> T get_normal_level_chapter_id() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7C8))(this);
	}
	template <typename T = void> T set_normal_level_chapter_id(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF7D0))(this, value);
	}
	template <typename T = int32_t> T get_hard_level_star() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7D8))(this);
	}
	template <typename T = void> T set_hard_level_star(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF7E0))(this, value);
	}
	template <typename T = int32_t> T get_hard_level_chapter_id() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7E8))(this);
	}
	template <typename T = void> T set_hard_level_chapter_id(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF7F0))(this, value);
	}
	template <typename T = int32_t> T get_hell_level_star() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF7F8))(this);
	}
	template <typename T = void> T set_hell_level_star(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF800))(this, value);
	}
	template <typename T = int32_t> T get_hell_level_chapter_id() {
		return ((T (*)(CSChapterFetchRecordRes*))(Il2CppBase() + 0x51CF808))(this);
	}
	template <typename T = void> T set_hell_level_chapter_id(int32_t value) {
		return ((T (*)(CSChapterFetchRecordRes*, int32_t))(Il2CppBase() + 0x51CF810))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterFetchRecordRes*, bool))(Il2CppBase() + 0x51CF818))(this, createIfMissing);
	}

};

}

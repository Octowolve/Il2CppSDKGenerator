#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Announcement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Announcement"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _label() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _priority() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _intervalTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _startDate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& _endDate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _needpush() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _showinds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _picurl() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actionurl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint64_t> T& _actStartDate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& _actEndDate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& _languageCode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _enable_abtest() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _action_target_type() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_pic() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_pic_url() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _area_id() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B7C0))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B7C8))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B7D0))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B7D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_tab() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B7E0))(this);
	}
	template <typename T = void> T set_tab(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B7E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B7F0))(this);
	}
	template <typename T = void> T set_title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B7F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_content() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B800))(this);
	}
	template <typename T = void> T set_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B808))(this, value);
	}
	template <typename T = int32_t> T get_label() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B810))(this);
	}
	template <typename T = void> T set_label(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B818))(this, value);
	}
	template <typename T = int32_t> T get_priority() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B820))(this);
	}
	template <typename T = void> T set_priority(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B828))(this, value);
	}
	template <typename T = int32_t> T get_intervalTime() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B830))(this);
	}
	template <typename T = void> T set_intervalTime(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B838))(this, value);
	}
	template <typename T = uint64_t> T get_startDate() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B840))(this);
	}
	template <typename T = void> T set_startDate(uint64_t value) {
		return ((T (*)(Announcement*, uint64_t))(Il2CppBase() + 0x510B848))(this, value);
	}
	template <typename T = uint64_t> T get_endDate() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B858))(this);
	}
	template <typename T = void> T set_endDate(uint64_t value) {
		return ((T (*)(Announcement*, uint64_t))(Il2CppBase() + 0x510B860))(this, value);
	}
	template <typename T = uint32_t> T get_needpush() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B870))(this);
	}
	template <typename T = void> T set_needpush(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B878))(this, value);
	}
	template <typename T = uint32_t> T get_showinds() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B880))(this);
	}
	template <typename T = void> T set_showinds(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B888))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_picurl() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B890))(this);
	}
	template <typename T = void> T set_picurl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B898))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_actionurl() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8A0))(this);
	}
	template <typename T = uint64_t> T get_actStartDate() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8A8))(this);
	}
	template <typename T = void> T set_actStartDate(uint64_t value) {
		return ((T (*)(Announcement*, uint64_t))(Il2CppBase() + 0x510B8B0))(this, value);
	}
	template <typename T = uint64_t> T get_actEndDate() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8C0))(this);
	}
	template <typename T = void> T set_actEndDate(uint64_t value) {
		return ((T (*)(Announcement*, uint64_t))(Il2CppBase() + 0x510B8C8))(this, value);
	}
	template <typename T = uint32_t> T get_languageCode() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8D8))(this);
	}
	template <typename T = void> T set_languageCode(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B8E0))(this, value);
	}
	template <typename T = uint32_t> T get_version() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8E8))(this);
	}
	template <typename T = void> T set_version(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B8F0))(this, value);
	}
	template <typename T = bool> T get_enable_abtest() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B8F8))(this);
	}
	template <typename T = void> T set_enable_abtest(bool value) {
		return ((T (*)(Announcement*, bool))(Il2CppBase() + 0x510B900))(this, value);
	}
	template <typename T = int32_t> T get_action_target_type() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B908))(this);
	}
	template <typename T = void> T set_action_target_type(int32_t value) {
		return ((T (*)(Announcement*, int32_t))(Il2CppBase() + 0x510B910))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B918))(this);
	}
	template <typename T = void> T set_pic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B920))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_pic() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B928))(this);
	}
	template <typename T = void> T set_show_pic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B930))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_pic_url() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B938))(this);
	}
	template <typename T = void> T set_show_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Announcement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B940))(this, value);
	}
	template <typename T = uint32_t> T get_area_id() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B948))(this);
	}
	template <typename T = void> T set_area_id(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B950))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B958))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(Announcement*, uint32_t))(Il2CppBase() + 0x510B960))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(Announcement*))(Il2CppBase() + 0x510B968))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(Announcement*, uintptr_t))(Il2CppBase() + 0x510B970))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Announcement*, bool))(Il2CppBase() + 0x510B978))(this, createIfMissing);
	}

};

}

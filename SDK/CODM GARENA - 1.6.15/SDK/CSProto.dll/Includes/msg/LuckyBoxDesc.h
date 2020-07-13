#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxDesc"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _box_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _box_color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _max_lucky_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _group_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _show_promise() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _promise_locid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _promise_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _promise_item_locid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _board_list() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _show_draw_bonus() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title_cdn() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3910))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(LuckyBoxDesc*, uint32_t))(Il2CppBase() + 0x4EA3918))(this, value);
	}
	template <typename T = uint32_t> T get_box_type() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3920))(this);
	}
	template <typename T = void> T set_box_type(uint32_t value) {
		return ((T (*)(LuckyBoxDesc*, uint32_t))(Il2CppBase() + 0x4EA3928))(this, value);
	}
	template <typename T = uint32_t> T get_box_color() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3930))(this);
	}
	template <typename T = void> T set_box_color(uint32_t value) {
		return ((T (*)(LuckyBoxDesc*, uint32_t))(Il2CppBase() + 0x4EA3938))(this, value);
	}
	template <typename T = uint32_t> T get_max_lucky_value() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3940))(this);
	}
	template <typename T = void> T set_max_lucky_value(uint32_t value) {
		return ((T (*)(LuckyBoxDesc*, uint32_t))(Il2CppBase() + 0x4EA3948))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_group_list() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3950))(this);
	}
	template <typename T = bool> T get_show_promise() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3958))(this);
	}
	template <typename T = void> T set_show_promise(bool value) {
		return ((T (*)(LuckyBoxDesc*, bool))(Il2CppBase() + 0x4EA3960))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_promise_locid() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3968))(this);
	}
	template <typename T = void> T set_promise_locid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3970))(this, value);
	}
	template <typename T = int32_t> T get_promise_num() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3978))(this);
	}
	template <typename T = void> T set_promise_num(int32_t value) {
		return ((T (*)(LuckyBoxDesc*, int32_t))(Il2CppBase() + 0x4EA3980))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_promise_item_locid() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3988))(this);
	}
	template <typename T = void> T set_promise_item_locid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA3990))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_board_list() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA3998))(this);
	}
	template <typename T = bool> T get_show_draw_bonus() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA39A0))(this);
	}
	template <typename T = void> T set_show_draw_bonus(bool value) {
		return ((T (*)(LuckyBoxDesc*, bool))(Il2CppBase() + 0x4EA39A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title_cdn() {
		return ((T (*)(LuckyBoxDesc*))(Il2CppBase() + 0x4EA39B0))(this);
	}
	template <typename T = void> T set_title_cdn(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LuckyBoxDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA39B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxDesc*, bool))(Il2CppBase() + 0x4EA39C0))(this, createIfMissing);
	}

};

}

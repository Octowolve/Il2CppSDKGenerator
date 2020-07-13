#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxData"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _lucky_draw_flag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _open_count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA37B4))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(LuckyBoxData*, uint32_t))(Il2CppBase() + 0x4EA37BC))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA37C4))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(LuckyBoxData*, uint64_t))(Il2CppBase() + 0x4EA37CC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA37DC))(this);
	}
	template <typename T = uint32_t> T get_lucky_draw_flag() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA37E4))(this);
	}
	template <typename T = void> T set_lucky_draw_flag(uint32_t value) {
		return ((T (*)(LuckyBoxData*, uint32_t))(Il2CppBase() + 0x4EA37EC))(this, value);
	}
	template <typename T = uint32_t> T get_count() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA37F4))(this);
	}
	template <typename T = void> T set_count(uint32_t value) {
		return ((T (*)(LuckyBoxData*, uint32_t))(Il2CppBase() + 0x4EA37FC))(this, value);
	}
	template <typename T = uint32_t> T get_open_count() {
		return ((T (*)(LuckyBoxData*))(Il2CppBase() + 0x4EA3804))(this);
	}
	template <typename T = void> T set_open_count(uint32_t value) {
		return ((T (*)(LuckyBoxData*, uint32_t))(Il2CppBase() + 0x4EA380C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxData*, bool))(Il2CppBase() + 0x4EA3814))(this, createIfMissing);
	}

};

}

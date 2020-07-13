#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxRecord"));
	}

	template <typename T = uint32_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _lucky_value_sum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _group_record_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _open_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _receive_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _load_config_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_box_id() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA40D0))(this);
	}
	template <typename T = void> T set_box_id(uint32_t value) {
		return ((T (*)(LuckyBoxRecord*, uint32_t))(Il2CppBase() + 0x4EA40D8))(this, value);
	}
	template <typename T = uint32_t> T get_lucky_value_sum() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA40E0))(this);
	}
	template <typename T = void> T set_lucky_value_sum(uint32_t value) {
		return ((T (*)(LuckyBoxRecord*, uint32_t))(Il2CppBase() + 0x4EA40E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_group_record_list() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA40F0))(this);
	}
	template <typename T = uint32_t> T get_open_count() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA40F8))(this);
	}
	template <typename T = void> T set_open_count(uint32_t value) {
		return ((T (*)(LuckyBoxRecord*, uint32_t))(Il2CppBase() + 0x4EA4100))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_receive_list() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA4108))(this);
	}
	template <typename T = uint64_t> T get_load_config_time() {
		return ((T (*)(LuckyBoxRecord*))(Il2CppBase() + 0x4EA4110))(this);
	}
	template <typename T = void> T set_load_config_time(uint64_t value) {
		return ((T (*)(LuckyBoxRecord*, uint64_t))(Il2CppBase() + 0x4EA4118))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxRecord*, bool))(Il2CppBase() + 0x4EA4128))(this, createIfMissing);
	}

};

}

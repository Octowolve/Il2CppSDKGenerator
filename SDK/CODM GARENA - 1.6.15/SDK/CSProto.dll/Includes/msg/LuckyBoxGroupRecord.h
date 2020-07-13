#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxGroupRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxGroupRecord"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _hit_sum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _continuou_miss_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_record_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(LuckyBoxGroupRecord*))(Il2CppBase() + 0x4EA3C7C))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(LuckyBoxGroupRecord*, uint32_t))(Il2CppBase() + 0x4EA3C84))(this, value);
	}
	template <typename T = uint32_t> T get_hit_sum() {
		return ((T (*)(LuckyBoxGroupRecord*))(Il2CppBase() + 0x4EA3C8C))(this);
	}
	template <typename T = void> T set_hit_sum(uint32_t value) {
		return ((T (*)(LuckyBoxGroupRecord*, uint32_t))(Il2CppBase() + 0x4EA3C94))(this, value);
	}
	template <typename T = uint32_t> T get_continuou_miss_times() {
		return ((T (*)(LuckyBoxGroupRecord*))(Il2CppBase() + 0x4EA3C9C))(this);
	}
	template <typename T = void> T set_continuou_miss_times(uint32_t value) {
		return ((T (*)(LuckyBoxGroupRecord*, uint32_t))(Il2CppBase() + 0x4EA3CA4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_record_list() {
		return ((T (*)(LuckyBoxGroupRecord*))(Il2CppBase() + 0x4EA3CAC))(this);
	}
	template <typename T = uint32_t> T get_index() {
		return ((T (*)(LuckyBoxGroupRecord*))(Il2CppBase() + 0x4EA3CB4))(this);
	}
	template <typename T = void> T set_index(uint32_t value) {
		return ((T (*)(LuckyBoxGroupRecord*, uint32_t))(Il2CppBase() + 0x4EA3CBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxGroupRecord*, bool))(Il2CppBase() + 0x4EA3CC4))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxPropRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxPropRecord"));
	}

	template <typename T = uint32_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _hit_sum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _continuou_miss_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_prop_id() {
		return ((T (*)(LuckyBoxPropRecord*))(Il2CppBase() + 0x4EA3F9C))(this);
	}
	template <typename T = void> T set_prop_id(uint32_t value) {
		return ((T (*)(LuckyBoxPropRecord*, uint32_t))(Il2CppBase() + 0x4EA3FA4))(this, value);
	}
	template <typename T = uint32_t> T get_hit_sum() {
		return ((T (*)(LuckyBoxPropRecord*))(Il2CppBase() + 0x4EA3FAC))(this);
	}
	template <typename T = void> T set_hit_sum(uint32_t value) {
		return ((T (*)(LuckyBoxPropRecord*, uint32_t))(Il2CppBase() + 0x4EA3FB4))(this, value);
	}
	template <typename T = uint32_t> T get_continuou_miss_times() {
		return ((T (*)(LuckyBoxPropRecord*))(Il2CppBase() + 0x4EA3FBC))(this);
	}
	template <typename T = void> T set_continuou_miss_times(uint32_t value) {
		return ((T (*)(LuckyBoxPropRecord*, uint32_t))(Il2CppBase() + 0x4EA3FC4))(this, value);
	}
	template <typename T = uint32_t> T get_index() {
		return ((T (*)(LuckyBoxPropRecord*))(Il2CppBase() + 0x4EA3FCC))(this);
	}
	template <typename T = void> T set_index(uint32_t value) {
		return ((T (*)(LuckyBoxPropRecord*, uint32_t))(Il2CppBase() + 0x4EA3FD4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxPropRecord*, bool))(Il2CppBase() + 0x4EA3FDC))(this, createIfMissing);
	}

};

}

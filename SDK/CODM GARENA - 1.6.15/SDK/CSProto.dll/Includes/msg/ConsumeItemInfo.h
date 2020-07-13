#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ConsumeItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ConsumeItemInfo"));
	}

	template <typename T = int64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _item_cnt() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int64_t> T get_item_id() {
		return ((T (*)(ConsumeItemInfo*))(Il2CppBase() + 0x516F0B4))(this);
	}
	template <typename T = void> T set_item_id(int64_t value) {
		return ((T (*)(ConsumeItemInfo*, int64_t))(Il2CppBase() + 0x516F0BC))(this, value);
	}
	template <typename T = uint32_t> T get_item_cnt() {
		return ((T (*)(ConsumeItemInfo*))(Il2CppBase() + 0x516F0CC))(this);
	}
	template <typename T = void> T set_item_cnt(uint32_t value) {
		return ((T (*)(ConsumeItemInfo*, uint32_t))(Il2CppBase() + 0x516F0D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ConsumeItemInfo*, bool))(Il2CppBase() + 0x516F0DC))(this, createIfMissing);
	}

};

}

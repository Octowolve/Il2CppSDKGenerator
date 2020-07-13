#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ConsumableItemStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ConsumableItemStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _use_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(ConsumableItemStatis*))(Il2CppBase() + 0x516F078))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(ConsumableItemStatis*, uint32_t))(Il2CppBase() + 0x516F080))(this, value);
	}
	template <typename T = int32_t> T get_use_num() {
		return ((T (*)(ConsumableItemStatis*))(Il2CppBase() + 0x516F088))(this);
	}
	template <typename T = void> T set_use_num(int32_t value) {
		return ((T (*)(ConsumableItemStatis*, int32_t))(Il2CppBase() + 0x516F090))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ConsumableItemStatis*, bool))(Il2CppBase() + 0x516F098))(this, createIfMissing);
	}

};

}

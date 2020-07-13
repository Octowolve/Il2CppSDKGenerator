#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PickupItemStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PickupItemStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _pickup_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(PickupItemStatis*))(Il2CppBase() + 0x4EA6114))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(PickupItemStatis*, uint32_t))(Il2CppBase() + 0x4EA611C))(this, value);
	}
	template <typename T = uint32_t> T get_pickup_num() {
		return ((T (*)(PickupItemStatis*))(Il2CppBase() + 0x4EA6124))(this);
	}
	template <typename T = void> T set_pickup_num(uint32_t value) {
		return ((T (*)(PickupItemStatis*, uint32_t))(Il2CppBase() + 0x4EA612C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PickupItemStatis*, bool))(Il2CppBase() + 0x4EA6134))(this, createIfMissing);
	}

};

}

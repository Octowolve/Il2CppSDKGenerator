#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AdvertisingReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AdvertisingReward"));
	}

	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(AdvertisingReward*))(Il2CppBase() + 0x510B56C))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(AdvertisingReward*, uint64_t))(Il2CppBase() + 0x510B574))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(AdvertisingReward*))(Il2CppBase() + 0x510B584))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(AdvertisingReward*, uint32_t))(Il2CppBase() + 0x510B58C))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(AdvertisingReward*))(Il2CppBase() + 0x510B594))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(AdvertisingReward*, int32_t))(Il2CppBase() + 0x510B59C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AdvertisingReward*, bool))(Il2CppBase() + 0x510B5A4))(this, createIfMissing);
	}

};

}

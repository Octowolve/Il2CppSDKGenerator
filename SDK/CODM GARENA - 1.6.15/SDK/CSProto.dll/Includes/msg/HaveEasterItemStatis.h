#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class HaveEasterItemStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "HaveEasterItemStatis"));
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
		return ((T (*)(HaveEasterItemStatis*))(Il2CppBase() + 0x50D0328))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(HaveEasterItemStatis*, uint32_t))(Il2CppBase() + 0x50D0330))(this, value);
	}
	template <typename T = uint32_t> T get_pickup_num() {
		return ((T (*)(HaveEasterItemStatis*))(Il2CppBase() + 0x50D0338))(this);
	}
	template <typename T = void> T set_pickup_num(uint32_t value) {
		return ((T (*)(HaveEasterItemStatis*, uint32_t))(Il2CppBase() + 0x50D0340))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(HaveEasterItemStatis*, bool))(Il2CppBase() + 0x50D0348))(this, createIfMissing);
	}

};

}

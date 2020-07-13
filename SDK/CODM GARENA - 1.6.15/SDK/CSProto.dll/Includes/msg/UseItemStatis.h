#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UseItemStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UseItemStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _use_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(UseItemStatis*))(Il2CppBase() + 0x51AAA8C))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(UseItemStatis*, uint32_t))(Il2CppBase() + 0x51AAA94))(this, value);
	}
	template <typename T = uint32_t> T get_use_times() {
		return ((T (*)(UseItemStatis*))(Il2CppBase() + 0x51AAA9C))(this);
	}
	template <typename T = void> T set_use_times(uint32_t value) {
		return ((T (*)(UseItemStatis*, uint32_t))(Il2CppBase() + 0x51AAAA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UseItemStatis*, bool))(Il2CppBase() + 0x51AAAAC))(this, createIfMissing);
	}

};

}

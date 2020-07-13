#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Reward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Reward"));
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
		return ((T (*)(Reward*))(Il2CppBase() + 0x5071C4C))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(Reward*, uint64_t))(Il2CppBase() + 0x5071C54))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(Reward*))(Il2CppBase() + 0x5071C64))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(Reward*, uint32_t))(Il2CppBase() + 0x5071C6C))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(Reward*))(Il2CppBase() + 0x5071C74))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(Reward*, int32_t))(Il2CppBase() + 0x5071C7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Reward*, bool))(Il2CppBase() + 0x5071C84))(this, createIfMissing);
	}

};

}

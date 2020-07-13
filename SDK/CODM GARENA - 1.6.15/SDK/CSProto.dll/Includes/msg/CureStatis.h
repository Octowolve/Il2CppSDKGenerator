#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CureStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CureStatis"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _cure_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(CureStatis*))(Il2CppBase() + 0x51B75F0))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CureStatis*, uint32_t))(Il2CppBase() + 0x51B75F8))(this, value);
	}
	template <typename T = uint32_t> T get_cure_value() {
		return ((T (*)(CureStatis*))(Il2CppBase() + 0x51B7600))(this);
	}
	template <typename T = void> T set_cure_value(uint32_t value) {
		return ((T (*)(CureStatis*, uint32_t))(Il2CppBase() + 0x51B7608))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CureStatis*, bool))(Il2CppBase() + 0x51B7610))(this, createIfMissing);
	}

};

}

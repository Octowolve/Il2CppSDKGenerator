#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RechargeSpecialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RechargeSpecialInfo"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(RechargeSpecialInfo*))(Il2CppBase() + 0x5070808))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(RechargeSpecialInfo*, uint32_t))(Il2CppBase() + 0x5070810))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(RechargeSpecialInfo*))(Il2CppBase() + 0x5070818))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(RechargeSpecialInfo*, uint32_t))(Il2CppBase() + 0x5070820))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RechargeSpecialInfo*, bool))(Il2CppBase() + 0x5070828))(this, createIfMissing);
	}

};

}

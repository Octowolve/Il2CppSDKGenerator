#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerStaminaBuyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerStaminaBuyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _item_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPlayerStaminaBuyRes*))(Il2CppBase() + 0x51F16A4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPlayerStaminaBuyRes*, int32_t))(Il2CppBase() + 0x51F16AC))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(CSPlayerStaminaBuyRes*))(Il2CppBase() + 0x51F16B4))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSPlayerStaminaBuyRes*, int32_t))(Il2CppBase() + 0x51F16BC))(this, value);
	}
	template <typename T = int32_t> T get_item_type() {
		return ((T (*)(CSPlayerStaminaBuyRes*))(Il2CppBase() + 0x51F16C4))(this);
	}
	template <typename T = void> T set_item_type(int32_t value) {
		return ((T (*)(CSPlayerStaminaBuyRes*, int32_t))(Il2CppBase() + 0x51F16CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerStaminaBuyRes*, bool))(Il2CppBase() + 0x51F16D4))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerStaminaBuyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerStaminaBuyReq"));
	}

	template <typename T = int32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _item_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(CSPlayerStaminaBuyReq*))(Il2CppBase() + 0x51F1668))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSPlayerStaminaBuyReq*, int32_t))(Il2CppBase() + 0x51F1670))(this, value);
	}
	template <typename T = int32_t> T get_item_type() {
		return ((T (*)(CSPlayerStaminaBuyReq*))(Il2CppBase() + 0x51F1678))(this);
	}
	template <typename T = void> T set_item_type(int32_t value) {
		return ((T (*)(CSPlayerStaminaBuyReq*, int32_t))(Il2CppBase() + 0x51F1680))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerStaminaBuyReq*, bool))(Il2CppBase() + 0x51F1688))(this, createIfMissing);
	}

};

}

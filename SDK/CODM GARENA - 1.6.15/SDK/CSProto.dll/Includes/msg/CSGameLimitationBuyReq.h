#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameLimitationBuyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameLimitationBuyReq"));
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
		return ((T (*)(CSGameLimitationBuyReq*))(Il2CppBase() + 0x51D21E4))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSGameLimitationBuyReq*, int32_t))(Il2CppBase() + 0x51D21EC))(this, value);
	}
	template <typename T = int32_t> T get_item_type() {
		return ((T (*)(CSGameLimitationBuyReq*))(Il2CppBase() + 0x51D21F4))(this);
	}
	template <typename T = void> T set_item_type(int32_t value) {
		return ((T (*)(CSGameLimitationBuyReq*, int32_t))(Il2CppBase() + 0x51D21FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameLimitationBuyReq*, bool))(Il2CppBase() + 0x51D2204))(this, createIfMissing);
	}

};

}

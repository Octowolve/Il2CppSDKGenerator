#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGameLimitationBuyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGameLimitationBuyRes"));
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
		return ((T (*)(CSGameLimitationBuyRes*))(Il2CppBase() + 0x51D2220))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGameLimitationBuyRes*, int32_t))(Il2CppBase() + 0x51D2228))(this, value);
	}
	template <typename T = int32_t> T get_pve_level_id() {
		return ((T (*)(CSGameLimitationBuyRes*))(Il2CppBase() + 0x51D2230))(this);
	}
	template <typename T = void> T set_pve_level_id(int32_t value) {
		return ((T (*)(CSGameLimitationBuyRes*, int32_t))(Il2CppBase() + 0x51D2238))(this, value);
	}
	template <typename T = int32_t> T get_item_type() {
		return ((T (*)(CSGameLimitationBuyRes*))(Il2CppBase() + 0x51D2240))(this);
	}
	template <typename T = void> T set_item_type(int32_t value) {
		return ((T (*)(CSGameLimitationBuyRes*, int32_t))(Il2CppBase() + 0x51D2248))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGameLimitationBuyRes*, bool))(Il2CppBase() + 0x51D2250))(this, createIfMissing);
	}

};

}

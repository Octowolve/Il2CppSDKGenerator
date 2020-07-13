#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OtoSpecialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OtoSpecialInfo"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _last_buy_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(OtoSpecialInfo*))(Il2CppBase() + 0x4EA5D38))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(OtoSpecialInfo*, uint32_t))(Il2CppBase() + 0x4EA5D40))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(OtoSpecialInfo*))(Il2CppBase() + 0x4EA5D48))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(OtoSpecialInfo*, uint32_t))(Il2CppBase() + 0x4EA5D50))(this, value);
	}
	template <typename T = uint32_t> T get_last_buy_time() {
		return ((T (*)(OtoSpecialInfo*))(Il2CppBase() + 0x4EA5D58))(this);
	}
	template <typename T = void> T set_last_buy_time(uint32_t value) {
		return ((T (*)(OtoSpecialInfo*, uint32_t))(Il2CppBase() + 0x4EA5D60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OtoSpecialInfo*, bool))(Il2CppBase() + 0x4EA5D68))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LimitationGoods
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LimitationGoods"));
	}

	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _bought_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _bought_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _limit_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(LimitationGoods*))(Il2CppBase() + 0x4EA29B4))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(LimitationGoods*, int32_t))(Il2CppBase() + 0x4EA29BC))(this, value);
	}
	template <typename T = uint32_t> T get_bought_time() {
		return ((T (*)(LimitationGoods*))(Il2CppBase() + 0x4EA29C4))(this);
	}
	template <typename T = void> T set_bought_time(uint32_t value) {
		return ((T (*)(LimitationGoods*, uint32_t))(Il2CppBase() + 0x4EA29CC))(this, value);
	}
	template <typename T = int32_t> T get_bought_num() {
		return ((T (*)(LimitationGoods*))(Il2CppBase() + 0x4EA29D4))(this);
	}
	template <typename T = void> T set_bought_num(int32_t value) {
		return ((T (*)(LimitationGoods*, int32_t))(Il2CppBase() + 0x4EA29DC))(this, value);
	}
	template <typename T = int32_t> T get_limit_id() {
		return ((T (*)(LimitationGoods*))(Il2CppBase() + 0x4EA29E4))(this);
	}
	template <typename T = void> T set_limit_id(int32_t value) {
		return ((T (*)(LimitationGoods*, int32_t))(Il2CppBase() + 0x4EA29EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LimitationGoods*, bool))(Il2CppBase() + 0x4EA29F4))(this, createIfMissing);
	}

};

}

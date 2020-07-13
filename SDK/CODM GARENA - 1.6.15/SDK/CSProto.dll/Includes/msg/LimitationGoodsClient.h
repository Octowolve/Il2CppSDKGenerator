#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LimitationGoodsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LimitationGoodsClient"));
	}

	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _reset_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _bought_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(LimitationGoodsClient*))(Il2CppBase() + 0x4EA2A10))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(LimitationGoodsClient*, int32_t))(Il2CppBase() + 0x4EA2A18))(this, value);
	}
	template <typename T = uint32_t> T get_reset_time() {
		return ((T (*)(LimitationGoodsClient*))(Il2CppBase() + 0x4EA2A20))(this);
	}
	template <typename T = void> T set_reset_time(uint32_t value) {
		return ((T (*)(LimitationGoodsClient*, uint32_t))(Il2CppBase() + 0x4EA2A28))(this, value);
	}
	template <typename T = int32_t> T get_bought_num() {
		return ((T (*)(LimitationGoodsClient*))(Il2CppBase() + 0x4EA2A30))(this);
	}
	template <typename T = void> T set_bought_num(int32_t value) {
		return ((T (*)(LimitationGoodsClient*, int32_t))(Il2CppBase() + 0x4EA2A38))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LimitationGoodsClient*, bool))(Il2CppBase() + 0x4EA2A40))(this, createIfMissing);
	}

};

}

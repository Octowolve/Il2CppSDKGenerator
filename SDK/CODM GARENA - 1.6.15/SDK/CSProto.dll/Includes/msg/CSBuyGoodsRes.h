#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBuyGoodsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBuyGoodsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _midas_result_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBuyGoodsRes*))(Il2CppBase() + 0x51E58FC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBuyGoodsRes*, int32_t))(Il2CppBase() + 0x51E5904))(this, value);
	}
	template <typename T = uintptr_t> T get_midas_result_info() {
		return ((T (*)(CSBuyGoodsRes*))(Il2CppBase() + 0x51E590C))(this);
	}
	template <typename T = void> T set_midas_result_info(uintptr_t value) {
		return ((T (*)(CSBuyGoodsRes*, uintptr_t))(Il2CppBase() + 0x51E5914))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBuyGoodsRes*, bool))(Il2CppBase() + 0x51E591C))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DiamondCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DiamondCard"));
	}

	template <typename T = Il2CppString*> T& _product_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _remain_days() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_product_id() {
		return ((T (*)(DiamondCard*))(Il2CppBase() + 0x5226618))(this);
	}
	template <typename T = void> T set_product_id(Il2CppString* value) {
		return ((T (*)(DiamondCard*, Il2CppString*))(Il2CppBase() + 0x5226620))(this, value);
	}
	template <typename T = int32_t> T get_remain_days() {
		return ((T (*)(DiamondCard*))(Il2CppBase() + 0x5226628))(this);
	}
	template <typename T = void> T set_remain_days(int32_t value) {
		return ((T (*)(DiamondCard*, int32_t))(Il2CppBase() + 0x5226630))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DiamondCard*, bool))(Il2CppBase() + 0x5226638))(this, createIfMissing);
	}

};

}

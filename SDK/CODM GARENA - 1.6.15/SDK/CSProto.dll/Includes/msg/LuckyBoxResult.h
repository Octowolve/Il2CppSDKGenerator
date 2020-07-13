#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxResult"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _inventory_prop_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _account_prop_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _prop_order_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bp_prop_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_inventory_prop_list() {
		return ((T (*)(LuckyBoxResult*))(Il2CppBase() + 0x4EA424C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_account_prop_list() {
		return ((T (*)(LuckyBoxResult*))(Il2CppBase() + 0x4EA4254))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_prop_order_list() {
		return ((T (*)(LuckyBoxResult*))(Il2CppBase() + 0x4EA425C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bp_prop_list() {
		return ((T (*)(LuckyBoxResult*))(Il2CppBase() + 0x4EA4264))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxResult*, bool))(Il2CppBase() + 0x4EA426C))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Any2InventoryChgLuckyBoxNumReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Any2Inventory_ChgLuckyBoxNumReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _lucky_box_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _op_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _lobby_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_lucky_box_list() {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*))(Il2CppBase() + 0x510BD38))(this);
	}
	template <typename T = uint32_t> T get_op_type() {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*))(Il2CppBase() + 0x510BD40))(this);
	}
	template <typename T = void> T set_op_type(uint32_t value) {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*, uint32_t))(Il2CppBase() + 0x510BD48))(this, value);
	}
	template <typename T = uint32_t> T get_lobby_addr() {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*))(Il2CppBase() + 0x510BD50))(this);
	}
	template <typename T = void> T set_lobby_addr(uint32_t value) {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*, uint32_t))(Il2CppBase() + 0x510BD58))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Any2InventoryChgLuckyBoxNumReq*, bool))(Il2CppBase() + 0x510BD60))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InventoryStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InventoryStatis"));
	}

	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _firearm_stat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _role_stat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _grenada_stat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _appreance_stat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _individuation_stat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _parachute_stat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _winsuit_stat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _vehicleskin_stat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _professionchip_stat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _perk_stat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _item_list() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0850))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(InventoryStatis*, uint32_t))(Il2CppBase() + 0x50D0858))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_firearm_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0860))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_role_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0868))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_grenada_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0870))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_appreance_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0878))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_individuation_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0880))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_parachute_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0888))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_winsuit_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0890))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_vehicleskin_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D0898))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_professionchip_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D08A0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_perk_stat() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D08A8))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_item_list() {
		return ((T (*)(InventoryStatis*))(Il2CppBase() + 0x50D08B0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InventoryStatis*, bool))(Il2CppBase() + 0x50D08B8))(this, createIfMissing);
	}

};

}

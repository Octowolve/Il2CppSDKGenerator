#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BagWeaponStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BagWeaponStatis"));
	}

	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _damage_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _attachment_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _camo_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(BagWeaponStatis*))(Il2CppBase() + 0x510C9D4))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(BagWeaponStatis*, uint64_t))(Il2CppBase() + 0x510C9DC))(this, value);
	}
	template <typename T = uint64_t> T get_damage_value() {
		return ((T (*)(BagWeaponStatis*))(Il2CppBase() + 0x510C9EC))(this);
	}
	template <typename T = void> T set_damage_value(uint64_t value) {
		return ((T (*)(BagWeaponStatis*, uint64_t))(Il2CppBase() + 0x510C9F4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_attachment_id() {
		return ((T (*)(BagWeaponStatis*))(Il2CppBase() + 0x510CA04))(this);
	}
	template <typename T = uint32_t> T get_camo_id() {
		return ((T (*)(BagWeaponStatis*))(Il2CppBase() + 0x510CA0C))(this);
	}
	template <typename T = void> T set_camo_id(uint32_t value) {
		return ((T (*)(BagWeaponStatis*, uint32_t))(Il2CppBase() + 0x510CA14))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BagWeaponStatis*, bool))(Il2CppBase() + 0x510CA1C))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EquipInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EquipInfo"));
	}

	template <typename T = uint32_t> T& _equip_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_equip_id() {
		return ((T (*)(EquipInfo*))(Il2CppBase() + 0x5226D64))(this);
	}
	template <typename T = void> T set_equip_id(uint32_t value) {
		return ((T (*)(EquipInfo*, uint32_t))(Il2CppBase() + 0x5226D6C))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(EquipInfo*))(Il2CppBase() + 0x5226D74))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(EquipInfo*, bool))(Il2CppBase() + 0x5226D7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(EquipInfo*, bool))(Il2CppBase() + 0x5226D84))(this, createIfMissing);
	}

};

}

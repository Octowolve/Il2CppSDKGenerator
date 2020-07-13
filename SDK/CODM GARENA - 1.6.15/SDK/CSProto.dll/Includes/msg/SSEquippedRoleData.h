#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquippedRoleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquippedRoleData"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _aiid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _equip_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _skills() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93A4))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(SSEquippedRoleData*, uint32_t))(Il2CppBase() + 0x51A93AC))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93B4))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(SSEquippedRoleData*, uint64_t))(Il2CppBase() + 0x51A93BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93CC))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(SSEquippedRoleData*, Il2CppString*))(Il2CppBase() + 0x51A93D4))(this, value);
	}
	template <typename T = uint32_t> T get_aiid() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93DC))(this);
	}
	template <typename T = void> T set_aiid(uint32_t value) {
		return ((T (*)(SSEquippedRoleData*, uint32_t))(Il2CppBase() + 0x51A93E4))(this, value);
	}
	template <typename T = int32_t> T get_equip_level() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93EC))(this);
	}
	template <typename T = void> T set_equip_level(int32_t value) {
		return ((T (*)(SSEquippedRoleData*, int32_t))(Il2CppBase() + 0x51A93F4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_skills() {
		return ((T (*)(SSEquippedRoleData*))(Il2CppBase() + 0x51A93FC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquippedRoleData*, bool))(Il2CppBase() + 0x51A9404))(this, createIfMissing);
	}

};

}

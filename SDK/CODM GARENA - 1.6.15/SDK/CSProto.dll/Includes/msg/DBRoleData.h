#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBRoleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBRoleData"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _gain_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _duration_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _SkillData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _br_appearance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B949C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(DBRoleData*, uint32_t))(Il2CppBase() + 0x51B94A4))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94AC))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(DBRoleData*, uint64_t))(Il2CppBase() + 0x51B94B4))(this, value);
	}
	template <typename T = int32_t> T get_gain_type() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94C4))(this);
	}
	template <typename T = void> T set_gain_type(int32_t value) {
		return ((T (*)(DBRoleData*, int32_t))(Il2CppBase() + 0x51B94CC))(this, value);
	}
	template <typename T = int32_t> T get_duration_type() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94D4))(this);
	}
	template <typename T = void> T set_duration_type(int32_t value) {
		return ((T (*)(DBRoleData*, int32_t))(Il2CppBase() + 0x51B94DC))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94E4))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(DBRoleData*, uint32_t))(Il2CppBase() + 0x51B94EC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SkillData() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94F4))(this);
	}
	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B94FC))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBRoleData*, uintptr_t))(Il2CppBase() + 0x51B9504))(this, value);
	}
	template <typename T = uintptr_t> T get_br_appearance() {
		return ((T (*)(DBRoleData*))(Il2CppBase() + 0x51B950C))(this);
	}
	template <typename T = void> T set_br_appearance(uintptr_t value) {
		return ((T (*)(DBRoleData*, uintptr_t))(Il2CppBase() + 0x51B9514))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBRoleData*, bool))(Il2CppBase() + 0x51B951C))(this, createIfMissing);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountGetDBReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_GetDBReq"));
	}

	template <typename T = uint64_t> T& _db_key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _table_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_db_key() {
		return ((T (*)(CSAccountGetDBReq*))(Il2CppBase() + 0x516F46C))(this);
	}
	template <typename T = void> T set_db_key(uint64_t value) {
		return ((T (*)(CSAccountGetDBReq*, uint64_t))(Il2CppBase() + 0x516F474))(this, value);
	}
	template <typename T = uint32_t> T get_table_id() {
		return ((T (*)(CSAccountGetDBReq*))(Il2CppBase() + 0x516F484))(this);
	}
	template <typename T = void> T set_table_id(uint32_t value) {
		return ((T (*)(CSAccountGetDBReq*, uint32_t))(Il2CppBase() + 0x516F48C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountGetDBReq*, bool))(Il2CppBase() + 0x516F494))(this, createIfMissing);
	}

};

}

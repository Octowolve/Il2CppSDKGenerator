#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountGetDBRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_GetDBRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _db_key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _table_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _body() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountGetDBRes*))(Il2CppBase() + 0x516F4B0))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountGetDBRes*, uint32_t))(Il2CppBase() + 0x516F4B8))(this, value);
	}
	template <typename T = uint64_t> T get_db_key() {
		return ((T (*)(CSAccountGetDBRes*))(Il2CppBase() + 0x516F4C0))(this);
	}
	template <typename T = void> T set_db_key(uint64_t value) {
		return ((T (*)(CSAccountGetDBRes*, uint64_t))(Il2CppBase() + 0x516F4C8))(this, value);
	}
	template <typename T = uint32_t> T get_table_id() {
		return ((T (*)(CSAccountGetDBRes*))(Il2CppBase() + 0x516F4D8))(this);
	}
	template <typename T = void> T set_table_id(uint32_t value) {
		return ((T (*)(CSAccountGetDBRes*, uint32_t))(Il2CppBase() + 0x516F4E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_body() {
		return ((T (*)(CSAccountGetDBRes*))(Il2CppBase() + 0x516F4E8))(this);
	}
	template <typename T = void> T set_body(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountGetDBRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516F4F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountGetDBRes*, bool))(Il2CppBase() + 0x516F4F8))(this, createIfMissing);
	}

};

}

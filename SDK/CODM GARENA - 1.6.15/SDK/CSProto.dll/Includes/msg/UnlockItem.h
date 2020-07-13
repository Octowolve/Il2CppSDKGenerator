#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UnlockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UnlockItem"));
	}

	template <typename T = int32_t> T& _unlock_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _cdt_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cdt_value1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cdt_value2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cdt_value3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cdt_value4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _unlocked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_unlock_id() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AA9B4))(this);
	}
	template <typename T = void> T set_unlock_id(int32_t value) {
		return ((T (*)(UnlockItem*, int32_t))(Il2CppBase() + 0x51AA9BC))(this, value);
	}
	template <typename T = int32_t> T get_cdt_type() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AA9C4))(this);
	}
	template <typename T = void> T set_cdt_type(int32_t value) {
		return ((T (*)(UnlockItem*, int32_t))(Il2CppBase() + 0x51AA9CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cdt_value1() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AA9D4))(this);
	}
	template <typename T = void> T set_cdt_value1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA9DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cdt_value2() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AA9E4))(this);
	}
	template <typename T = void> T set_cdt_value2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA9EC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cdt_value3() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AA9F4))(this);
	}
	template <typename T = void> T set_cdt_value3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA9FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cdt_value4() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AAA04))(this);
	}
	template <typename T = void> T set_cdt_value4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnlockItem*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AAA0C))(this, value);
	}
	template <typename T = bool> T get_unlocked() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x51AAA14))(this);
	}
	template <typename T = void> T set_unlocked(bool value) {
		return ((T (*)(UnlockItem*, bool))(Il2CppBase() + 0x51AAA1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UnlockItem*, bool))(Il2CppBase() + 0x51AAA24))(this, createIfMissing);
	}

};

}

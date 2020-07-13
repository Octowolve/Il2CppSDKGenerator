#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SyncHashtable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "SyncHashtable"));
	}

	template <typename T = uintptr_t> T& host() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D48C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(SyncHashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363D524))(this, info, context);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D5C8))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D5FC))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D604))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D638))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D66C))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363D73C))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(SyncHashtable*, uintptr_t))(Il2CppBase() + 0x363D80C))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(SyncHashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363D840))(this, key, value);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(SyncHashtable*, uintptr_t, int32_t))(Il2CppBase() + 0x363D914))(this, array, arrayIndex);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(SyncHashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363D948))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363DA1C))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(SyncHashtable*, uintptr_t))(Il2CppBase() + 0x363DAE0))(this, key);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363DB18))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(SyncHashtable*, uintptr_t))(Il2CppBase() + 0x363DBB0))(this, key);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(SyncHashtable*, uintptr_t))(Il2CppBase() + 0x363DC7C))(this, key);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SyncHashtable*))(Il2CppBase() + 0x363DCB0))(this);
	}

};

}

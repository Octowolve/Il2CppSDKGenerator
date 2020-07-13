#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class HybridDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "HybridDictionary"));
	}

	template <typename T = bool> T& caseInsensitive() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hashtable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C99EA0))(this);
	}
	template <typename T = uintptr_t> T get_inner() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C99FA0))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C99FB4))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A0B0))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A0B8))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(HybridDictionary*, uintptr_t))(Il2CppBase() + 0x4C9A0C0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(HybridDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9A1C4))(this, key, value);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A488))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A584))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A588))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(HybridDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9A684))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A7B8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(HybridDictionary*, uintptr_t))(Il2CppBase() + 0x4C9A8B4))(this, key);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(HybridDictionary*, uintptr_t, int32_t))(Il2CppBase() + 0x4C9A9B8))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C99EA4))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(HybridDictionary*, uintptr_t))(Il2CppBase() + 0x4C9AAC4))(this, key);
	}
	template <typename T = void> T Switch() {
		return ((T (*)(HybridDictionary*))(Il2CppBase() + 0x4C9A2F8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.ObjectModel {

class KeyedCollection2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.ObjectModel", "KeyedCollection`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& dictionaryCreationThreshold() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(KeyedCollection2*, uintptr_t))(Il2CppBase() + 0x26CF16C))(this, key);
	}
	template <typename T = int32_t> T IndexOfKey(uintptr_t key) {
		return ((T (*)(KeyedCollection2*, uintptr_t))(Il2CppBase() + 0x26CF1BC))(this, key);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(KeyedCollection2*, uintptr_t))(Il2CppBase() + 0x26CF2EC))(this, key);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(KeyedCollection2*))(Il2CppBase() + 0x26CF3F0))(this);
	}
	template <typename T = uintptr_t> T GetKeyForItem(uintptr_t item) {
		return ((T (*)(KeyedCollection2*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item) {
		return ((T (*)(KeyedCollection2*, int32_t, uintptr_t))(Il2CppBase() + 0x26CF43C))(this, index, item);
	}
	template <typename T = void> T RemoveItem(int32_t index) {
		return ((T (*)(KeyedCollection2*, int32_t))(Il2CppBase() + 0x26CF83C))(this, index);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t item) {
		return ((T (*)(KeyedCollection2*, int32_t, uintptr_t))(Il2CppBase() + 0x26CF8E0))(this, index, item);
	}
	template <typename T = void*> T get_Dictionary() {
		return ((T (*)(KeyedCollection2*))(Il2CppBase() + 0x26CF9C8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JPropertyKeyedCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JPropertyKeyedCollection"));
	}

	template <typename T = void*> static T& Comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _dictionary() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T AddKey(Il2CppString* key, uintptr_t item) {
		return ((T (*)(JPropertyKeyedCollection*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x395FD74))(this, key, item);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(JPropertyKeyedCollection*))(Il2CppBase() + 0x395FF28))(this);
	}
	template <typename T = bool> T Contains(Il2CppString* key) {
		return ((T (*)(JPropertyKeyedCollection*, Il2CppString*))(Il2CppBase() + 0x395FFD8))(this, key);
	}
	template <typename T = void> T EnsureDictionary() {
		return ((T (*)(JPropertyKeyedCollection*))(Il2CppBase() + 0x395FE24))(this);
	}
	template <typename T = Il2CppString*> T GetKeyForItem(uintptr_t item) {
		return ((T (*)(JPropertyKeyedCollection*, uintptr_t))(Il2CppBase() + 0x39600D0))(this, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item) {
		return ((T (*)(JPropertyKeyedCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x396018C))(this, index, item);
	}
	template <typename T = void> T RemoveItem(int32_t index) {
		return ((T (*)(JPropertyKeyedCollection*, int32_t))(Il2CppBase() + 0x3960238))(this, index);
	}
	template <typename T = void> T RemoveKey(Il2CppString* key) {
		return ((T (*)(JPropertyKeyedCollection*, Il2CppString*))(Il2CppBase() + 0x3960394))(this, key);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t item) {
		return ((T (*)(JPropertyKeyedCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x3960428))(this, index, item);
	}
	template <typename T = bool> T TryGetValue(Il2CppString* key, uintptr_t* value) {
		return ((T (*)(JPropertyKeyedCollection*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x39606E0))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(JPropertyKeyedCollection*))(Il2CppBase() + 0x3960788))(this);
	}
	template <typename T = int32_t> T IndexOfReference(uintptr_t t) {
		return ((T (*)(JPropertyKeyedCollection*, uintptr_t))(Il2CppBase() + 0x3960828))(this, t);
	}
	template <typename T = bool> T Compare(uintptr_t other) {
		return ((T (*)(JPropertyKeyedCollection*, uintptr_t))(Il2CppBase() + 0x39608E4))(this, other);
	}

};

}

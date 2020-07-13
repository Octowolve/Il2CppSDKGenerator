#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IDictionary`2"));
	}


	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(IDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(IDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(IDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(IDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(IDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(IDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(IDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(IDictionary2*))(Il2CppBase() + 0x0))(this);
	}

};

}

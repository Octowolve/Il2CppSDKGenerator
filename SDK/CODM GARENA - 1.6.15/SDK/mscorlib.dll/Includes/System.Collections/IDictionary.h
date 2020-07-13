#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IDictionary"));
	}


	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(IDictionary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(IDictionary*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(IDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(IDictionary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(IDictionary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(IDictionary*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(IDictionary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(IDictionary*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(IDictionary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(IDictionary*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}

};

}

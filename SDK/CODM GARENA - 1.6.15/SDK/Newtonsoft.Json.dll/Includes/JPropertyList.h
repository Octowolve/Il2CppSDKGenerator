#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JPropertyList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "JPropertyList"));
	}

	template <typename T = uintptr_t> T& _token() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(JPropertyList*))(Il2CppBase() + 0x40CAF10))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(JPropertyList*))(Il2CppBase() + 0x40CAFDC))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(JPropertyList*, uintptr_t))(Il2CppBase() + 0x40CAFE0))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(JPropertyList*))(Il2CppBase() + 0x40CAFE8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(JPropertyList*, uintptr_t))(Il2CppBase() + 0x40CAFF4))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(JPropertyList*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x40CB008))(this, array, arrayIndex);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(JPropertyList*, uintptr_t))(Il2CppBase() + 0x40CB078))(this, item);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(JPropertyList*))(Il2CppBase() + 0x40CB098))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(JPropertyList*))(Il2CppBase() + 0x40CB0A8))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(JPropertyList*, uintptr_t))(Il2CppBase() + 0x40CA578))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(JPropertyList*, int32_t, uintptr_t))(Il2CppBase() + 0x40CB0B0))(this, index, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(JPropertyList*, int32_t))(Il2CppBase() + 0x40CB0BC))(this, index);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(JPropertyList*, int32_t))(Il2CppBase() + 0x40CB0CC))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(JPropertyList*, int32_t, uintptr_t))(Il2CppBase() + 0x40CB0E0))(this, index, value);
	}

};

}

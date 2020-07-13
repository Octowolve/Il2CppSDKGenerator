#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JArray"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _values() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T get_ChildrenTokens() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C11A4))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C11AC))(this);
	}
	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C17B0))(this, node);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C1C08))(this);
	}
	template <typename T = uintptr_t> static T Load(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x408F344))(0, reader);
	}
	template <typename T = uintptr_t> static T Load_1(uintptr_t reader, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C1C98))(0, reader, settings);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JArray*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40C2100))(this, writer, converters);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C2244))(this, key);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t index) {
		return ((T (*)(JArray*, int32_t))(Il2CppBase() + 0x408F34C))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(JArray*, int32_t, uintptr_t))(Il2CppBase() + 0x40C23F0))(this, index, value);
	}
	template <typename T = int32_t> T IndexOfItem(uintptr_t item) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C2400))(this, item);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C2490))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(JArray*, int32_t, uintptr_t))(Il2CppBase() + 0x40C24A0))(this, index, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(JArray*, int32_t))(Il2CppBase() + 0x40C24CC))(this, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C24DC))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C2588))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C2598))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C25A8))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(JArray*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x40C25B8))(this, array, arrayIndex);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C25C8))(this);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(JArray*, uintptr_t))(Il2CppBase() + 0x40C25D0))(this, item);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JArray*))(Il2CppBase() + 0x40C25E0))(this);
	}

};

}

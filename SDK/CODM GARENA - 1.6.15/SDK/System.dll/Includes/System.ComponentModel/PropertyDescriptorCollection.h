#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class PropertyDescriptorCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "PropertyDescriptorCollection"));
	}

	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& properties() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& readOnly() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB010C))(this, value);
	}
	template <typename T = void> T System_Collections_IDictionary_Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB01A0))(this, key, value);
	}
	template <typename T = void> T System_Collections_IList_Clear() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB02B4))(this);
	}
	template <typename T = void> T System_Collections_IDictionary_Clear() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0388))(this);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB038C))(this, value);
	}
	template <typename T = bool> T System_Collections_IDictionary_Contains(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB0454))(this, value);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB04E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_GetEnumerator() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB04F8))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB058C))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4CB0654))(this, index, value);
	}
	template <typename T = void> T System_Collections_IDictionary_Remove(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB07D0))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB093C))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t))(Il2CppBase() + 0x4CB09D0))(this, index);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0AAC))(this);
	}
	template <typename T = bool> T System_Collections_IDictionary_get_IsReadOnly() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0AB4))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0B90))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0B98))(this);
	}
	template <typename T = int32_t> T System_Collections_ICollection_get_Count() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0BA0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0BD8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Keys() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0BE0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Values() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0F7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IDictionary_get_Item(uintptr_t key) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB1024))(this, key);
	}
	template <typename T = void> T System_Collections_IDictionary_set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB10D4))(this, key, value);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t))(Il2CppBase() + 0x4CB12B4))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4CB12E8))(this, index, value);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CA13D0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB02B8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB0420))(this, value);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4CB13C8))(this, array, index);
	}
	template <typename T = uintptr_t> T Find(Il2CppString* name, bool ignoreCase) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppString*, bool))(Il2CppBase() + 0x4CB13FC))(this, name, ignoreCase);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB161C))(this);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB0620))(this, value);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4CB06F0))(this, index, value);
	}
	template <typename T = void> T Remove(uintptr_t value) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB0864))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(PropertyDescriptorCollection*, int32_t))(Il2CppBase() + 0x4CB09D4))(this, index);
	}
	template <typename T = uintptr_t> T CloneCollection() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB1650))(this);
	}
	template <typename T = uintptr_t> T Sort(Il2CppArray<uintptr_t>* order) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CB1734))(this, order);
	}
	template <typename T = void> T InternalSort(uintptr_t ic) {
		return ((T (*)(PropertyDescriptorCollection*, uintptr_t))(Il2CppBase() + 0x4CB17E0))(this, ic);
	}
	template <typename T = void> T InternalSort_1(Il2CppArray<uintptr_t>* order) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CB1770))(this, order);
	}
	template <typename T = uintptr_t> T ExtractItems(Il2CppArray<uintptr_t>* names) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CB1828))(this, names);
	}
	template <typename T = uintptr_t> T Filter(Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CAD5F0))(this, attributes);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PropertyDescriptorCollection*))(Il2CppBase() + 0x4CB0BA4))(this);
	}
	template <typename T = uintptr_t> T get_Item(Il2CppString* s) {
		return ((T (*)(PropertyDescriptorCollection*, Il2CppString*))(Il2CppBase() + 0x4CB1AE0))(this, s);
	}

};

}

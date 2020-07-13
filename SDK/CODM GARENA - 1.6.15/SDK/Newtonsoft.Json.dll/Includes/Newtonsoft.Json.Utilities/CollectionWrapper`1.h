#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class CollectionWrapper1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "CollectionWrapper`1"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _genericCollection() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _syncRoot() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B62448))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B625BC))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B62728))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(CollectionWrapper1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4B6289C))(this, array, arrayIndex);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B62A18))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B62B74))(this);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B62CD0))(this, item);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B62EF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B63038))(this);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B63194))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B63228))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B632B8))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(CollectionWrapper1*, int32_t))(Il2CppBase() + 0x4B63468))(this, index);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B635C0))(this, index, value);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B63768))(this);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, uintptr_t))(Il2CppBase() + 0x4B638D4))(this, value);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(CollectionWrapper1*, int32_t))(Il2CppBase() + 0x4B63958))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(CollectionWrapper1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B63AB0))(this, index, value);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(CollectionWrapper1*, uintptr_t, int32_t))(Il2CppBase() + 0x4B63C58))(this, array, arrayIndex);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B63CC0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B63CC8))(this);
	}
	template <typename T = void> static T VerifyValueType(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B63D88))(0, value);
	}
	template <typename T = bool> static T IsCompatibleObject(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B63F50))(0, value);
	}
	template <typename T = uintptr_t> T get_UnderlyingCollection() {
		return ((T (*)(CollectionWrapper1*))(Il2CppBase() + 0x4B64114))(this);
	}

};

}

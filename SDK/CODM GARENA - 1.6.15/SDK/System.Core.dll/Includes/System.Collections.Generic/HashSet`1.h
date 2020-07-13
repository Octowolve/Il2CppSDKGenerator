#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class HashSet1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Collections.Generic", "HashSet`1"));
	}

	template <typename T = int32_t> static T& INITIAL_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DEFAULT_LOAD_FACTOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NO_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HASH_FLAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& links() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& slots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& touched() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& empty_slot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& threshold() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& si() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& generation() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C3028C))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C302E8))(this);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(HashSet1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4C302F0))(this, array, index);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_Add(uintptr_t item) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C30324))(this, item);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C30358))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C303B4))(this);
	}
	template <typename T = void> T Init(int32_t capacity, void* comparer) {
		return ((T (*)(HashSet1*, int32_t, void*))(Il2CppBase() + 0x4C303BC))(this, capacity, comparer);
	}
	template <typename T = void> T InitArrays(int32_t size) {
		return ((T (*)(HashSet1*, int32_t))(Il2CppBase() + 0x4C30560))(this, size);
	}
	template <typename T = bool> T SlotsContainsAt(int32_t index, int32_t hash, uintptr_t item) {
		return ((T (*)(HashSet1*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4C306B4))(this, index, hash, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(HashSet1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4C3089C))(this, array, index);
	}
	template <typename T = void> T CopyTo_1(Il2CppArray<uintptr_t>* array, int32_t index, int32_t count) {
		return ((T (*)(HashSet1*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4C308E0))(this, array, index, count);
	}
	template <typename T = void> T Resize() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C30B1C))(this);
	}
	template <typename T = int32_t> T GetLinkHashCode(int32_t index) {
		return ((T (*)(HashSet1*, int32_t))(Il2CppBase() + 0x4C30E80))(this, index);
	}
	template <typename T = int32_t> T GetItemHashCode(uintptr_t item) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C30EC8))(this, item);
	}
	template <typename T = bool> T Add(uintptr_t item) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C30F80))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C311A8))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C31250))(this, item);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C312E8))(this, item);
	}
	template <typename T = int32_t> T RemoveWhere(void* predicate) {
		return ((T (*)(HashSet1*, void*))(Il2CppBase() + 0x4C31728))(this, predicate);
	}
	template <typename T = void> T ExceptWith(void* other) {
		return ((T (*)(HashSet1*, void*))(Il2CppBase() + 0x4C318E0))(this, other);
	}
	template <typename T = void> T SymmetricExceptWith(void* other) {
		return ((T (*)(HashSet1*, void*))(Il2CppBase() + 0x4C31C2C))(this, other);
	}
	template <typename T = void> T UnionWith(void* other) {
		return ((T (*)(HashSet1*, void*))(Il2CppBase() + 0x4C31FB8))(this, other);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(HashSet1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C32304))(this, info, context);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(HashSet1*, uintptr_t))(Il2CppBase() + 0x4C32398))(this, sender);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(HashSet1*))(Il2CppBase() + 0x4C3243C))(this);
	}

};

}

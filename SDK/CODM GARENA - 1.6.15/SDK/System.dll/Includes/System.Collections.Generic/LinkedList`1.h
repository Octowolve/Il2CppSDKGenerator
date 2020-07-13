#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class LinkedList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Generic", "LinkedList`1"));
	}

	template <typename T = Il2CppString*> static T& DataArrayKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VersionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& syncRoot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& first() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& si() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_Generic_ICollectionT_Add(uintptr_t value) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C1890))(this, value);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(LinkedList1*, uintptr_t, int32_t))(Il2CppBase() + 0x48C18C4))(this, array, index);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C19DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C1A54))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C1ACC))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C1AD4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C1ADC))(this);
	}
	template <typename T = void> T VerifyReferencedNode(void* node) {
		return ((T (*)(LinkedList1*, void*))(Il2CppBase() + 0x48C1AE4))(this, node);
	}
	template <typename T = void> static T VerifyBlankNode(void* newNode) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x48C1BF0))(0, newNode);
	}
	template <typename T = void*> T AddLast(uintptr_t value) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C1D14))(this, value);
	}
	template <typename T = void> T AddLast_1(void* node) {
		return ((T (*)(LinkedList1*, void*))(Il2CppBase() + 0x48C1DF4))(this, node);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C1EB4))(this);
	}
	template <typename T = bool> T Contains(uintptr_t value) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C1EF0))(this, value);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(LinkedList1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x48C1F84))(this, array, index);
	}
	template <typename T = void*> T Find(uintptr_t value) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C2204))(this, value);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C22C8))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(LinkedList1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48C22E0))(this, info, context);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C2460))(this, sender);
	}
	template <typename T = bool> T Remove(uintptr_t value) {
		return ((T (*)(LinkedList1*, uintptr_t))(Il2CppBase() + 0x48C2704))(this, value);
	}
	template <typename T = void> T Remove_1(void* node) {
		return ((T (*)(LinkedList1*, void*))(Il2CppBase() + 0x48C2770))(this, node);
	}
	template <typename T = void> T RemoveFirst() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C282C))(this);
	}
	template <typename T = void> T RemoveLast() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C2850))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C2874))(this);
	}
	template <typename T = void*> T get_First() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C287C))(this);
	}
	template <typename T = void*> T get_Last() {
		return ((T (*)(LinkedList1*))(Il2CppBase() + 0x48C2884))(this);
	}

};

}

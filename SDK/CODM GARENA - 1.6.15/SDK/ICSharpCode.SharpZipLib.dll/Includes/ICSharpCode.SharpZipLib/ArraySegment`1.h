#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib {

class ArraySegment1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib", "ArraySegment`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Array() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B59FC0))(this);
	}
	template <typename T = int32_t> T get_Offset() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B59FC8))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B59FD0))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B59FD8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4B5A0C8))(this, obj);
	}
	template <typename T = bool> T Equals_1(void* obj) {
		return ((T (*)(ArraySegment1*, void*))(Il2CppBase() + 0x4B5A0D0))(this, obj);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IListT_get_Item(int32_t index) {
		return ((T (*)(ArraySegment1*, int32_t))(Il2CppBase() + 0x4B5A240))(this, index);
	}
	template <typename T = void> T System_Collections_Generic_IListT_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ArraySegment1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B5A384))(this, index, value);
	}
	template <typename T = int32_t> T System_Collections_Generic_IListT_IndexOf(uintptr_t item) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4B5A524))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_IListT_Insert(int32_t index, uintptr_t item) {
		return ((T (*)(ArraySegment1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B5A5C0))(this, index, item);
	}
	template <typename T = void> T System_Collections_Generic_IListT_RemoveAt(int32_t index) {
		return ((T (*)(ArraySegment1*, int32_t))(Il2CppBase() + 0x4B5A664))(this, index);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_get_IsReadOnly() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B5A674))(this);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_Add(uintptr_t item) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4B5A710))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_Clear() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B5A7B4))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_Contains(uintptr_t item) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4B5A950))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionT_CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(ArraySegment1*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4B5AA44))(this, array, arrayIndex);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionT_Remove(uintptr_t item) {
		return ((T (*)(ArraySegment1*, uintptr_t))(Il2CppBase() + 0x4B5AAE0))(this, item);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B5AC2C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ArraySegment1*))(Il2CppBase() + 0x4B5AD70))(this);
	}

};

}

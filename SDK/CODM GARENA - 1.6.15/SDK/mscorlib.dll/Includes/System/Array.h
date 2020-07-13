#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Array
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Array"));
	}


	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361F3E0))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(Array*, int32_t, uintptr_t))(Il2CppBase() + 0x361F594))(this, index, value);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x361F6F4))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Clear() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361F788))(this);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x361F964))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x361FA98))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(Array*, int32_t, uintptr_t))(Il2CppBase() + 0x361FBDC))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x361FC70))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361FD04))(this, index);
	}
	template <typename T = int32_t> T System_Collections_ICollection_get_Count() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FD98))(this);
	}
	template <typename T = int32_t> T InternalArray__ICollection_get_Count() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FD9C))(this);
	}
	template <typename T = bool> T InternalArray__ICollection_get_IsReadOnly() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FDA0))(this);
	}
	template <typename T = void*> T InternalArray__IEnumerable_GetEnumerator() {
		return ((T (*)(Array*))(Il2CppBase() + 0x21CF348))(this);
	}
	template <typename T = void> T InternalArray__ICollection_Clear() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FDA8))(this);
	}
	template <typename T = void> T InternalArray__ICollection_Add(uintptr_t item) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x205917C))(this, item);
	}
	template <typename T = bool> T InternalArray__ICollection_Remove(uintptr_t item) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x45E8E14))(this, item);
	}
	template <typename T = bool> T InternalArray__ICollection_Contains(uintptr_t item) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x1BDC984))(this, item);
	}
	template <typename T = void> T InternalArray__ICollection_CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(Array*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x20AF57C))(this, array, index);
	}
	template <typename T = void> T InternalArray__Insert(int32_t index, uintptr_t item) {
		return ((T (*)(Array*, int32_t, uintptr_t))(Il2CppBase() + 0x3106074))(this, index, item);
	}
	template <typename T = void> T InternalArray__RemoveAt(int32_t index) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361FE50))(this, index);
	}
	template <typename T = int32_t> T InternalArray__IndexOf(uintptr_t item) {
		return ((T (*)(Array*, uintptr_t))(Il2CppBase() + 0x1E58BA0))(this, item);
	}
	template <typename T = uintptr_t> T InternalArray__get_Item(int32_t index) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x338D5B4))(this, index);
	}
	template <typename T = void> T InternalArray__set_Item(int32_t index, uintptr_t item) {
		return ((T (*)(Array*, int32_t, uintptr_t))(Il2CppBase() + 0x313DDF8))(this, index, item);
	}
	template <typename T = void> T GetGenericValueImpl(int32_t pos, uintptr_t* value) {
		return ((T (*)(Array*, int32_t, uintptr_t*))(Il2CppBase() + 0x0))(this, pos, value);
	}
	template <typename T = void> T SetGenericValueImpl(int32_t pos, uintptr_t value) {
		return ((T (*)(Array*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, pos, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361F534))(this);
	}
	template <typename T = int64_t> T get_LongLength() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FEFC))(this);
	}
	template <typename T = int32_t> T get_Rank() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361F58C))(this);
	}
	template <typename T = int32_t> T GetRank() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF10))(this);
	}
	template <typename T = int32_t> T GetLength(int32_t dimension) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361FEF8))(this, dimension);
	}
	template <typename T = int64_t> T GetLongLength(int32_t dimension) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361FF14))(this, dimension);
	}
	template <typename T = int32_t> T GetLowerBound(int32_t dimension) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361F7C4))(this, dimension);
	}
	template <typename T = uintptr_t> T GetValue(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(Array*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361FF28))(this, indices);
	}
	template <typename T = void> T SetValue(uintptr_t value, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(Array*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361FF2C))(this, value, indices);
	}
	template <typename T = uintptr_t> T GetValueImpl(int32_t pos) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x361F590))(this, pos);
	}
	template <typename T = void> T SetValueImpl(uintptr_t value, int32_t pos) {
		return ((T (*)(Array*, uintptr_t, int32_t))(Il2CppBase() + 0x361F6F0))(this, value, pos);
	}
	template <typename T = bool> static T FastCopy(uintptr_t source, int32_t source_idx, uintptr_t dest, int32_t dest_idx, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x361FF30))(0, source, source_idx, dest, dest_idx, length);
	}
	template <typename T = uintptr_t> static T CreateInstanceImpl(uintptr_t elementType, Il2CppArray<uintptr_t>* lengths, Il2CppArray<uintptr_t>* bounds) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361FF64))(0, elementType, lengths, bounds);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF74))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF7C))(this);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF80))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF88))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Array*))(Il2CppBase() + 0x361FF90))(this);
	}
	template <typename T = int32_t> T GetUpperBound(int32_t dimension) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x3620068))(this, dimension);
	}
	template <typename T = uintptr_t> T GetValue_1(int32_t index) {
		return ((T (*)(Array*, int32_t))(Il2CppBase() + 0x3620098))(this, index);
	}
	template <typename T = uintptr_t> T GetValue_2(int32_t index1, int32_t index2) {
		return ((T (*)(Array*, int32_t, int32_t))(Il2CppBase() + 0x362022C))(this, index1, index2);
	}
	template <typename T = uintptr_t> T GetValue_3(int32_t index1, int32_t index2, int32_t index3) {
		return ((T (*)(Array*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3620318))(this, index1, index2, index3);
	}
	template <typename T = uintptr_t> T GetValue_4(int64_t index) {
		return ((T (*)(Array*, int64_t))(Il2CppBase() + 0x3620420))(this, index);
	}
	template <typename T = uintptr_t> T GetValue_5(int64_t index1, int64_t index2) {
		return ((T (*)(Array*, int64_t, int64_t))(Il2CppBase() + 0x3620524))(this, index1, index2);
	}
	template <typename T = uintptr_t> T GetValue_6(int64_t index1, int64_t index2, int64_t index3) {
		return ((T (*)(Array*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x3620694))(this, index1, index2, index3);
	}
	template <typename T = void> T SetValue_1(uintptr_t value, int64_t index) {
		return ((T (*)(Array*, uintptr_t, int64_t))(Il2CppBase() + 0x362087C))(this, value, index);
	}
	template <typename T = void> T SetValue_2(uintptr_t value, int64_t index1, int64_t index2) {
		return ((T (*)(Array*, uintptr_t, int64_t, int64_t))(Il2CppBase() + 0x3620B24))(this, value, index1, index2);
	}
	template <typename T = void> T SetValue_3(uintptr_t value, int64_t index1, int64_t index2, int64_t index3) {
		return ((T (*)(Array*, uintptr_t, int64_t, int64_t, int64_t))(Il2CppBase() + 0x3620D14))(this, value, index1, index2, index3);
	}
	template <typename T = void> T SetValue_4(uintptr_t value, int32_t index) {
		return ((T (*)(Array*, uintptr_t, int32_t))(Il2CppBase() + 0x3620988))(this, value, index);
	}
	template <typename T = void> T SetValue_5(uintptr_t value, int32_t index1, int32_t index2) {
		return ((T (*)(Array*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3620F8C))(this, value, index1, index2);
	}
	template <typename T = void> T SetValue_6(uintptr_t value, int32_t index1, int32_t index2, int32_t index3) {
		return ((T (*)(Array*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3621080))(this, value, index1, index2, index3);
	}
	template <typename T = uintptr_t> static T CreateInstance(uintptr_t elementType, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3621190))(0, elementType, length);
	}
	template <typename T = uintptr_t> static T CreateInstance_1(uintptr_t elementType, int32_t length1, int32_t length2) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3621544))(0, elementType, length1, length2);
	}
	template <typename T = uintptr_t> static T CreateInstance_2(uintptr_t elementType, int32_t length1, int32_t length2, int32_t length3) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3621630))(0, elementType, length1, length2, length3);
	}
	template <typename T = uintptr_t> static T CreateInstance_3(uintptr_t elementType, Il2CppArray<uintptr_t>* lengths) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621260))(0, elementType, lengths);
	}
	template <typename T = uintptr_t> static T CreateInstance_4(uintptr_t elementType, Il2CppArray<uintptr_t>* lengths, Il2CppArray<uintptr_t>* lowerBounds) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621738))(0, elementType, lengths, lowerBounds);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIntArray(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621C18))(0, values);
	}
	template <typename T = uintptr_t> static T CreateInstance_5(uintptr_t elementType, Il2CppArray<uintptr_t>* lengths) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621DC0))(0, elementType, lengths);
	}
	template <typename T = uintptr_t> T GetValue_7(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(Array*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621E8C))(this, indices);
	}
	template <typename T = void> T SetValue_7(uintptr_t value, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(Array*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3621F58))(this, value, indices);
	}
	template <typename T = int32_t> static T BinarySearch(uintptr_t array, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x362202C))(0, array, value);
	}
	template <typename T = int32_t> static T BinarySearch_1(uintptr_t array, uintptr_t value, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3622520))(0, array, value, comparer);
	}
	template <typename T = int32_t> static T BinarySearch_2(uintptr_t array, int32_t index, int32_t length, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3622744))(0, array, index, length, value);
	}
	template <typename T = int32_t> static T BinarySearch_3(uintptr_t array, int32_t index, int32_t length, uintptr_t value, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3622A60))(0, array, index, length, value, comparer);
	}
	template <typename T = int32_t> static T DoBinarySearch(uintptr_t array, int32_t index, int32_t length, uintptr_t value, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3622248))(0, array, index, length, value, comparer);
	}
	template <typename T = void> static T Clear(uintptr_t array, int32_t index, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x361F7C8))(0, array, index, length);
	}
	template <typename T = void> static T ClearInternal(uintptr_t a, int32_t index, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3622D80))(0, a, index, count);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Array*))(Il2CppBase() + 0x3622D90))(this);
	}
	template <typename T = void> static T Copy(uintptr_t sourceArray, uintptr_t destinationArray, int32_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3622D94))(0, sourceArray, destinationArray, length);
	}
	template <typename T = void> static T Copy_1(uintptr_t sourceArray, int32_t sourceIndex, uintptr_t destinationArray, int32_t destinationIndex, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3622EBC))(0, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
	}
	template <typename T = void> static T Copy_2(uintptr_t sourceArray, int64_t sourceIndex, uintptr_t destinationArray, int64_t destinationIndex, int64_t length) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t, int64_t, int64_t))(Il2CppBase() + 0x36237E4))(0, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
	}
	template <typename T = void> static T Copy_3(uintptr_t sourceArray, uintptr_t destinationArray, int64_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x3623A3C))(0, sourceArray, destinationArray, length);
	}
	template <typename T = int32_t> static T IndexOf(uintptr_t array, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3623B50))(0, array, value);
	}
	template <typename T = int32_t> static T IndexOf_1(uintptr_t array, uintptr_t value, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3623E2C))(0, array, value, startIndex);
	}
	template <typename T = int32_t> static T IndexOf_2(uintptr_t array, uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3623C2C))(0, array, value, startIndex, count);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(Array*))(Il2CppBase() + 0x3623F10))(this);
	}
	template <typename T = int32_t> static T LastIndexOf(uintptr_t array, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3623F14))(0, array, value);
	}
	template <typename T = int32_t> static T LastIndexOf_1(uintptr_t array, uintptr_t value, int32_t startIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3624014))(0, array, value, startIndex);
	}
	template <typename T = int32_t> static T LastIndexOf_2(uintptr_t array, uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3624100))(0, array, value, startIndex, count);
	}
	template <typename T = uintptr_t> static T get_swapper(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3624308))(0, array);
	}
	template <typename T = uintptr_t> static T get_swapper_1(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B877B8))(0, array);
	}
	template <typename T = void> static T Reverse(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3624494))(0, array);
	}
	template <typename T = void> static T Reverse_1(uintptr_t array, int32_t index, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x362457C))(0, array, index, length);
	}
	template <typename T = void> static T Sort(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3624BCC))(0, array);
	}
	template <typename T = void> static T Sort_1(uintptr_t keys, uintptr_t items) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36251F8))(0, keys, items);
	}
	template <typename T = void> static T Sort_2(uintptr_t array, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36252EC))(0, array, comparer);
	}
	template <typename T = void> static T Sort_3(uintptr_t array, int32_t index, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x36253DC))(0, array, index, length);
	}
	template <typename T = void> static T Sort_4(uintptr_t keys, uintptr_t items, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x362540C))(0, keys, items, comparer);
	}
	template <typename T = void> static T Sort_5(uintptr_t keys, uintptr_t items, int32_t index, int32_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3625500))(0, keys, items, index, length);
	}
	template <typename T = void> static T Sort_6(uintptr_t array, int32_t index, int32_t length, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3625528))(0, array, index, length, comparer);
	}
	template <typename T = void> static T Sort_7(uintptr_t keys, uintptr_t items, int32_t index, int32_t length, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3624CBC))(0, keys, items, index, length, comparer);
	}
	template <typename T = void> T int_swapper(int32_t i, int32_t j) {
		return ((T (*)(Array*, int32_t, int32_t))(Il2CppBase() + 0x3625BE8))(this, i, j);
	}
	template <typename T = void> T obj_swapper(int32_t i, int32_t j) {
		return ((T (*)(Array*, int32_t, int32_t))(Il2CppBase() + 0x3625CFC))(this, i, j);
	}
	template <typename T = void> T slow_swapper(int32_t i, int32_t j) {
		return ((T (*)(Array*, int32_t, int32_t))(Il2CppBase() + 0x3625E60))(this, i, j);
	}
	template <typename T = void> T double_swapper(int32_t i, int32_t j) {
		return ((T (*)(Array*, int32_t, int32_t))(Il2CppBase() + 0x3625EAC))(this, i, j);
	}
	template <typename T = int32_t> static T new_gap(int32_t gap) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3625FC8))(0, gap);
	}
	template <typename T = void> static T combsort(Il2CppArray<uintptr_t>* array, int32_t start, int32_t size, uintptr_t swap_items) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3625558))(0, array, start, size, swap_items);
	}
	template <typename T = void> static T combsort_1(Il2CppArray<uintptr_t>* array, int32_t start, int32_t size, uintptr_t swap_items) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3625720))(0, array, start, size, swap_items);
	}
	template <typename T = void> static T combsort_2(Il2CppArray<uintptr_t>* array, int32_t start, int32_t size, uintptr_t swap_items) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x36258D4))(0, array, start, size, swap_items);
	}
	template <typename T = void> static T qsort(uintptr_t keys, uintptr_t items, int32_t low0, int32_t high0, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3625AA4))(0, keys, items, low0, high0, comparer);
	}
	template <typename T = void> static T swap(uintptr_t keys, uintptr_t items, int32_t i, int32_t j) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x36261F0))(0, keys, items, i, j);
	}
	template <typename T = int32_t> static T compare(uintptr_t value1, uintptr_t value2, uintptr_t comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626010))(0, value1, value2, comparer);
	}
	template <typename T = void> static T Sort_8(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x25DB140))(0, array);
	}
	template <typename T = void> static T Sort_9(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x25DAA84))(0, keys, items);
	}
	template <typename T = void> static T Sort_10(Il2CppArray<uintptr_t>* array, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x25DB234))(0, array, comparer);
	}
	template <typename T = void> static T Sort_11(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x25DAB7C))(0, keys, items, comparer);
	}
	template <typename T = void> static T Sort_12(Il2CppArray<uintptr_t>* array, int32_t index, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x25DB62C))(0, array, index, length);
	}
	template <typename T = void> static T Sort_13(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items, int32_t index, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x25DAC74))(0, keys, items, index, length);
	}
	template <typename T = void> static T Sort_14(Il2CppArray<uintptr_t>* array, int32_t index, int32_t length, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x25DB728))(0, array, index, length, comparer);
	}
	template <typename T = void> static T Sort_15(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items, int32_t index, int32_t length, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x25DACB4))(0, keys, items, index, length, comparer);
	}
	template <typename T = void> static T Sort_16(Il2CppArray<uintptr_t>* array, void* comparison) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x25DB328))(0, array, comparison);
	}
	template <typename T = void> static T Sort_17(Il2CppArray<uintptr_t>* array, int32_t length, void* comparison) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, void*))(Il2CppBase() + 0x25DB414))(0, array, length, comparison);
	}
	template <typename T = void> static T qsort_1(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items, int32_t low0, int32_t high0, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x3F5E768))(0, keys, items, low0, high0, comparer);
	}
	template <typename T = int32_t> static T compare_1(uintptr_t value1, uintptr_t value2, void* comparer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2241884))(0, value1, value2, comparer);
	}
	template <typename T = void> static T qsort_2(Il2CppArray<uintptr_t>* array, int32_t low0, int32_t high0, void* comparison) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x3F5E974))(0, array, low0, high0, comparison);
	}
	template <typename T = void> static T swap_1(Il2CppArray<uintptr_t>* keys, Il2CppArray<uintptr_t>* items, int32_t i, int32_t j) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x25FF490))(0, keys, items, i, j);
	}
	template <typename T = void> static T swap_2(Il2CppArray<uintptr_t>* array, int32_t i, int32_t j) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x25FF5A8))(0, array, i, j);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(Array*, uintptr_t, int32_t))(Il2CppBase() + 0x36262A4))(this, array, index);
	}
	template <typename T = void> T CopyTo_1(uintptr_t array, int64_t index) {
		return ((T (*)(Array*, uintptr_t, int64_t))(Il2CppBase() + 0x3626530))(this, array, index);
	}
	template <typename T = void> static T Resize(Il2CppArray<uintptr_t>* array, int32_t newSize) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3F7A848))(0, array, newSize);
	}
	template <typename T = void> static T Resize_1(Il2CppArray<uintptr_t>* array, int32_t length, int32_t newSize) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3F7A88C))(0, array, length, newSize);
	}
	template <typename T = bool> static T TrueForAll(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x45EC60C))(0, array, match);
	}
	template <typename T = void> static T ForEach(Il2CppArray<uintptr_t>* array, void* action) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1E8AE54))(0, array, action);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ConvertAll(Il2CppArray<uintptr_t>* array, void* converter) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x4E445D8))(0, array, converter);
	}
	template <typename T = int32_t> static T FindLastIndex(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x224CC94))(0, array, match);
	}
	template <typename T = int32_t> static T FindLastIndex_1(Il2CppArray<uintptr_t>* array, int32_t startIndex, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, void*))(Il2CppBase() + 0x224CBB0))(0, array, startIndex, match);
	}
	template <typename T = int32_t> static T FindLastIndex_2(Il2CppArray<uintptr_t>* array, int32_t startIndex, int32_t count, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x224CA1C))(0, array, startIndex, count, match);
	}
	template <typename T = int32_t> static T FindIndex(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x224C92C))(0, array, match);
	}
	template <typename T = int32_t> static T FindIndex_1(Il2CppArray<uintptr_t>* array, int32_t startIndex, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, void*))(Il2CppBase() + 0x224C834))(0, array, startIndex, match);
	}
	template <typename T = int32_t> static T FindIndex_2(Il2CppArray<uintptr_t>* array, int32_t startIndex, int32_t count, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, void*))(Il2CppBase() + 0x224C690))(0, array, startIndex, count, match);
	}
	template <typename T = int32_t> static T BinarySearch_4(Il2CppArray<uintptr_t>* array, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x220B8DC))(0, array, value);
	}
	template <typename T = int32_t> static T BinarySearch_5(Il2CppArray<uintptr_t>* array, uintptr_t value, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x220B9D4))(0, array, value, comparer);
	}
	template <typename T = int32_t> static T BinarySearch_6(Il2CppArray<uintptr_t>* array, int32_t index, int32_t length, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x220B418))(0, array, index, length, value);
	}
	template <typename T = int32_t> static T BinarySearch_7(Il2CppArray<uintptr_t>* array, int32_t index, int32_t length, uintptr_t value, void* comparer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x220B458))(0, array, index, length, value, comparer);
	}
	template <typename T = int32_t> static T IndexOf_3(Il2CppArray<uintptr_t>* array, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E16F84))(0, array, value);
	}
	template <typename T = int32_t> static T IndexOf_4(Il2CppArray<uintptr_t>* array, uintptr_t value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x1E17078))(0, array, value, startIndex);
	}
	template <typename T = int32_t> static T IndexOf_5(Il2CppArray<uintptr_t>* array, uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1E17174))(0, array, value, startIndex, count);
	}
	template <typename T = int32_t> static T LastIndexOf_3(Il2CppArray<uintptr_t>* array, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E63420))(0, array, value);
	}
	template <typename T = int32_t> static T LastIndexOf_4(Il2CppArray<uintptr_t>* array, uintptr_t value, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x1E63524))(0, array, value, startIndex);
	}
	template <typename T = int32_t> static T LastIndexOf_5(Il2CppArray<uintptr_t>* array, uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1E6361C))(0, array, value, startIndex, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FindAll(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x4E42DB8))(0, array, match);
	}
	template <typename T = bool> static T Exists(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x1BA5594))(0, array, match);
	}
	template <typename T = void*> static T AsReadOnly(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21DD718))(0, array);
	}
	template <typename T = uintptr_t> static T Find(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x3368F1C))(0, array, match);
	}
	template <typename T = uintptr_t> static T FindLast(Il2CppArray<uintptr_t>* array, void* match) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x33690C4))(0, array, match);
	}
	template <typename T = void> static T ConstrainedCopy(uintptr_t sourceArray, int32_t sourceIndex, uintptr_t destinationArray, int32_t destinationIndex, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x362663C))(0, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class ArrayList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "ArrayList"));
	}

	template <typename T = int32_t> static T& DefaultInitialCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ArrayList*, int32_t))(Il2CppBase() + 0x3630E88))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(ArrayList*, int32_t, uintptr_t))(Il2CppBase() + 0x3630FC8))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3631140))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3631148))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(ArrayList*, int32_t))(Il2CppBase() + 0x363116C))(this, value);
	}
	template <typename T = bool> T get_IsFixedSize() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x36312CC))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x36312D4))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x36312DC))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x36312E4))(this);
	}
	template <typename T = void> T EnsureCapacity(int32_t count) {
		return ((T (*)(ArrayList*, int32_t))(Il2CppBase() + 0x36312E8))(this, count);
	}
	template <typename T = void> T Shift(int32_t index, int32_t count) {
		return ((T (*)(ArrayList*, int32_t, int32_t))(Il2CppBase() + 0x36313F8))(this, index, count);
	}
	template <typename T = int32_t> T Add(uintptr_t value) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x363158C))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3631640))(this);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x363167C))(this, item);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t value) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x36316BC))(this, value);
	}
	template <typename T = int32_t> T IndexOf_1(uintptr_t value, int32_t startIndex) {
		return ((T (*)(ArrayList*, uintptr_t, int32_t))(Il2CppBase() + 0x36316D0))(this, value, startIndex);
	}
	template <typename T = int32_t> T IndexOf_2(uintptr_t value, int32_t startIndex, int32_t count) {
		return ((T (*)(ArrayList*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3631700))(this, value, startIndex, count);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t value) {
		return ((T (*)(ArrayList*, int32_t, uintptr_t))(Il2CppBase() + 0x3631928))(this, index, value);
	}
	template <typename T = void> T InsertRange(int32_t index, uintptr_t c) {
		return ((T (*)(ArrayList*, int32_t, uintptr_t))(Il2CppBase() + 0x3631ABC))(this, index, c);
	}
	template <typename T = void> T Remove(uintptr_t obj) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x3631ED0))(this, obj);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ArrayList*, int32_t))(Il2CppBase() + 0x3631F20))(this, index);
	}
	template <typename T = void> T CopyTo(uintptr_t array) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x3632054))(this, array);
	}
	template <typename T = void> T CopyTo_1(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(ArrayList*, uintptr_t, int32_t))(Il2CppBase() + 0x3632078))(this, array, arrayIndex);
	}
	template <typename T = void> T CopyTo_2(int32_t index, uintptr_t array, int32_t arrayIndex, int32_t count) {
		return ((T (*)(ArrayList*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x36320B8))(this, index, array, arrayIndex, count);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3632214))(this);
	}
	template <typename T = void> T AddRange(uintptr_t c) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x3632394))(this, c);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x36323AC))(this);
	}
	template <typename T = void> T Sort_1(uintptr_t comparer) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x3632454))(this, comparer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3632488))(this);
	}
	template <typename T = uintptr_t> T ToArray_1(uintptr_t type) {
		return ((T (*)(ArrayList*, uintptr_t))(Il2CppBase() + 0x363253C))(this, type);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArrayList*))(Il2CppBase() + 0x3632574))(this);
	}
	template <typename T = void> static T ThrowNewArgumentOutOfRangeException(Il2CppString* name, uintptr_t actual, Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3630C58))(0, name, actual, message);
	}
	template <typename T = uintptr_t> static T Synchronized(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x363261C))(0, list);
	}
	template <typename T = uintptr_t> static T ReadOnly(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3632768))(0, list);
	}

};

}

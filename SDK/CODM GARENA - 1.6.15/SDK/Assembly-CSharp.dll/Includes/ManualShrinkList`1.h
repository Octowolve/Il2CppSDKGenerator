#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ManualShrinkList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualShrinkList`1"));
	}

	template <typename T = bool> T& NeedShrink() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& ShrinkIndexList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& HashCodeToIndexMap() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Insert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IndexOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShrinkableIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shrink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshIndexMapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5AEEC))(this);
	}
	template <typename T = void> T Release() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5AFD4))(this);
	}
	template <typename T = void> T Add(uintptr_t item) {
		return ((T (*)(ManualShrinkList1*, uintptr_t))(Il2CppBase() + 0x4B5B0BC))(this, item);
	}
	template <typename T = void> T Insert(int32_t index, uintptr_t item) {
		return ((T (*)(ManualShrinkList1*, int32_t, uintptr_t))(Il2CppBase() + 0x4B5B2D8))(this, index, item);
	}
	template <typename T = bool> T Contains(uintptr_t item) {
		return ((T (*)(ManualShrinkList1*, uintptr_t))(Il2CppBase() + 0x4B5B458))(this, item);
	}
	template <typename T = int32_t> T IndexOf(uintptr_t item) {
		return ((T (*)(ManualShrinkList1*, uintptr_t))(Il2CppBase() + 0x4B5B5A8))(this, item);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5B6F8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5B894))(this);
	}
	template <typename T = bool> T Remove(uintptr_t item) {
		return ((T (*)(ManualShrinkList1*, uintptr_t))(Il2CppBase() + 0x4B5B964))(this, item);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(ManualShrinkList1*, int32_t))(Il2CppBase() + 0x4B5BB44))(this, index);
	}
	template <typename T = void> T SetShrinkableIndex(int32_t index) {
		return ((T (*)(ManualShrinkList1*, int32_t))(Il2CppBase() + 0x4B5BD9C))(this, index);
	}
	template <typename T = void> T Shrink() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5BECC))(this);
	}
	template <typename T = void> T Sort(void* comparer) {
		return ((T (*)(ManualShrinkList1*, void*))(Il2CppBase() + 0x4B5C264))(this, comparer);
	}
	template <typename T = void> T RefreshIndexMapper() {
		return ((T (*)(ManualShrinkList1*))(Il2CppBase() + 0x4B5C364))(this);
	}
	template <typename T = int32_t> static T Shrinkm__0(int32_t a, int32_t b) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4B5C558))(0, a, b);
	}

};

}

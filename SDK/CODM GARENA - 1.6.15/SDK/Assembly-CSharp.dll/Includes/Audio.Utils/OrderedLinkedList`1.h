#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class OrderedLinkedList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "OrderedLinkedList`1"));
	}

	template <typename T = void*> T& mPoolItems() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& mFirst() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& mLast() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopFront() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InsertBetween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Init(int32_t AllocItemCount) {
		return ((T (*)(OrderedLinkedList1*, int32_t))(Il2CppBase() + 0x4720854))(this, AllocItemCount);
	}
	template <typename T = bool> T Add(uintptr_t pItem) {
		return ((T (*)(OrderedLinkedList1*, uintptr_t))(Il2CppBase() + 0x4720A04))(this, pItem);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(OrderedLinkedList1*))(Il2CppBase() + 0x4720CA8))(this);
	}
	template <typename T = uintptr_t> T get_First() {
		return ((T (*)(OrderedLinkedList1*))(Il2CppBase() + 0x4720CC0))(this);
	}
	template <typename T = uintptr_t> T PopFront() {
		return ((T (*)(OrderedLinkedList1*))(Il2CppBase() + 0x4720DB8))(this);
	}
	template <typename T = void> T _InsertBetween(void* pPreviousItem, void* pNewNode, void* pNextItem) {
		return ((T (*)(OrderedLinkedList1*, void*, void*, void*))(Il2CppBase() + 0x4720FFC))(this, pPreviousItem, pNewNode, pNextItem);
	}

};

}

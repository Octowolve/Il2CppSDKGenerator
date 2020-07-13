#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class StringCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "StringCollection"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4C9F910))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4C9F918))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(StringCollection*, int32_t))(Il2CppBase() + 0x4C9F920))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(StringCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4C9FAC4))(this, index, value);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(StringCollection*, uintptr_t))(Il2CppBase() + 0x4C9FC80))(this, value);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(StringCollection*, uintptr_t))(Il2CppBase() + 0x4C9FE34))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(StringCollection*, uintptr_t))(Il2CppBase() + 0x4C9FFE8))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(StringCollection*, int32_t, uintptr_t))(Il2CppBase() + 0x4CA019C))(this, index, value);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(StringCollection*, uintptr_t))(Il2CppBase() + 0x4CA0358))(this, value);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(StringCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4CA050C))(this, array, index);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA0540))(this);
	}
	template <typename T = Il2CppString*> T get_Item(int32_t index) {
		return ((T (*)(StringCollection*, int32_t))(Il2CppBase() + 0x4C9F924))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, Il2CppString* value) {
		return ((T (*)(StringCollection*, int32_t, Il2CppString*))(Il2CppBase() + 0x4C9FC4C))(this, index, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA0574))(this);
	}
	template <typename T = int32_t> T Add(Il2CppString* value) {
		return ((T (*)(StringCollection*, Il2CppString*))(Il2CppBase() + 0x4C9FE00))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA05A8))(this);
	}
	template <typename T = bool> T Contains(Il2CppString* value) {
		return ((T (*)(StringCollection*, Il2CppString*))(Il2CppBase() + 0x4C9FFB4))(this, value);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA05DC))(this);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* value) {
		return ((T (*)(StringCollection*, Il2CppString*))(Il2CppBase() + 0x4CA0168))(this, value);
	}
	template <typename T = void> T Insert(int32_t index, Il2CppString* value) {
		return ((T (*)(StringCollection*, int32_t, Il2CppString*))(Il2CppBase() + 0x4CA0324))(this, index, value);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA0770))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA0778))(this);
	}
	template <typename T = void> T Remove(Il2CppString* value) {
		return ((T (*)(StringCollection*, Il2CppString*))(Il2CppBase() + 0x4CA04D8))(this, value);
	}
	template <typename T = void> T RemoveAt(int32_t index) {
		return ((T (*)(StringCollection*, int32_t))(Il2CppBase() + 0x4CA0780))(this, index);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(StringCollection*))(Il2CppBase() + 0x4CA07B4))(this);
	}

};

}

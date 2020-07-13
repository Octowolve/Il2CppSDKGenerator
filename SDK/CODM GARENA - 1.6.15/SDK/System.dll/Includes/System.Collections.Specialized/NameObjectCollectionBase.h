#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class NameObjectCollectionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "NameObjectCollectionBase"));
	}

	template <typename T = uintptr_t> T& m_ItemsContainer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_NullKeyItem() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ItemsArray() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_hashprovider() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_comparer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_defCapacity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_readonly() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& infoCopy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& keyscoll() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& equality_comparer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9C8FC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9C904))(this);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(NameObjectCollectionBase*, uintptr_t, int32_t))(Il2CppBase() + 0x4C9C908))(this, array, index);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9C7A8))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9CA20))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9CAE4))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(NameObjectCollectionBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9CBA8))(this, info, context);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9D328))(this);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(NameObjectCollectionBase*, uintptr_t))(Il2CppBase() + 0x4C9D35C))(this, sender);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(NameObjectCollectionBase*))(Il2CppBase() + 0x4C9D984))(this);
	}
	template <typename T = void> T BaseAdd(Il2CppString* name, uintptr_t value) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C9D7FC))(this, name, value);
	}
	template <typename T = uintptr_t> T BaseGet(int32_t index) {
		return ((T (*)(NameObjectCollectionBase*, int32_t))(Il2CppBase() + 0x4C9D9B4))(this, index);
	}
	template <typename T = uintptr_t> T BaseGet_1(Il2CppString* name) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*))(Il2CppBase() + 0x4C9DA94))(this, name);
	}
	template <typename T = Il2CppString*> T BaseGetKey(int32_t index) {
		return ((T (*)(NameObjectCollectionBase*, int32_t))(Il2CppBase() + 0x4C9DB74))(this, index);
	}
	template <typename T = void> T BaseRemove(Il2CppString* name) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*))(Il2CppBase() + 0x4C9DC54))(this, name);
	}
	template <typename T = void> T BaseSet(Il2CppString* name, uintptr_t value) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C9DF84))(this, name, value);
	}
	template <typename T = uintptr_t> T FindFirstMatchedItem(Il2CppString* name) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*))(Il2CppBase() + 0x4C9DAB4))(this, name);
	}
	template <typename T = bool> T Equals(Il2CppString* s1, Il2CppString* s2) {
		return ((T (*)(NameObjectCollectionBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4C9DDDC))(this, s1, s2);
	}

};

}

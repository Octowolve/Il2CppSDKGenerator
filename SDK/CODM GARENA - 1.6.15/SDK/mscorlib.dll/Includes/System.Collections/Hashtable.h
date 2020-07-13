#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class Hashtable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "Hashtable"));
	}

	template <typename T = int32_t> static T& CHAIN_MARKER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& inUse() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& modificationCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& loadFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hashes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& threshold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& hashKeys() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hashValues() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& hcpRef() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& comparerRef() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& serializationInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& equalityComparer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& primeTbl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x3639788))(this);
	}
	template <typename T = void> T set_comparer(uintptr_t value) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x36390B4))(this, value);
	}
	template <typename T = void> T set_hcp(uintptr_t value) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x36390AC))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363988C))(this);
	}
	template <typename T = bool> T get_IsSynchronized() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x3639894))(this);
	}
	template <typename T = uintptr_t> T get_SyncRoot() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363989C))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x36398A0))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x36398A8))(this);
	}
	template <typename T = uintptr_t> T get_Values() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x36399F8))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x3639B48))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(Hashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3639D58))(this, key, value);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(Hashtable*, uintptr_t, int32_t))(Il2CppBase() + 0x363A2DC))(this, array, arrayIndex);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(Hashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363A664))(this, key, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363A680))(this);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363A748))(this, key);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363A978))(this);
	}
	template <typename T = void> T Remove(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363AA0C))(this, key);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363ABC0))(this, key);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363ABD0))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Hashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363AC60))(this, info, context);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363B0DC))(this, sender);
	}
	template <typename T = uintptr_t> static T Synchronized(uintptr_t table) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x363B908))(0, table);
	}
	template <typename T = int32_t> T GetHash(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363BAEC))(this, key);
	}
	template <typename T = bool> T KeyEquals(uintptr_t item, uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x363BC80))(this, item, key);
	}
	template <typename T = void> T AdjustThreshold() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363B8BC))(this);
	}
	template <typename T = void> T SetTable(Il2CppArray<uintptr_t>* table, Il2CppArray<uintptr_t>* hashes) {
		return ((T (*)(Hashtable*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3638FE0))(this, table, hashes);
	}
	template <typename T = int32_t> T Find(uintptr_t key) {
		return ((T (*)(Hashtable*, uintptr_t))(Il2CppBase() + 0x363A768))(this, key);
	}
	template <typename T = void> T Rehash() {
		return ((T (*)(Hashtable*))(Il2CppBase() + 0x363BEAC))(this);
	}
	template <typename T = void> T PutImpl(uintptr_t key, uintptr_t value, bool overwrite) {
		return ((T (*)(Hashtable*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3639D74))(this, key, value, overwrite);
	}
	template <typename T = void> T CopyToArray(uintptr_t arr, int32_t i, uintptr_t mode) {
		return ((T (*)(Hashtable*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x363AF0C))(this, arr, i, mode);
	}
	template <typename T = bool> static T TestPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x363C1A4))(0, x);
	}
	template <typename T = int32_t> static T CalcPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x363C230))(0, x);
	}
	template <typename T = int32_t> static T ToPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3638E00))(0, x);
	}

};

}

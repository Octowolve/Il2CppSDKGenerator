#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUSerializableDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_SerializableDictionary`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _keys() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _values() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x48EA180))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48EA248))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA2E0))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA368))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA3F0))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA414))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48EA41C))(this, key, value);
	}
	template <typename T = void> T Add_1(void* item) {
		return ((T (*)(HEUSerializableDictionary2*, void*))(Il2CppBase() + 0x48EA4B4))(this, item);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA5AC))(this);
	}
	template <typename T = bool> T Contains(void* item) {
		return ((T (*)(HEUSerializableDictionary2*, void*))(Il2CppBase() + 0x48EA5CC))(this, item);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x48EA670))(this, key);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(HEUSerializableDictionary2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x48EA6A8))(this, array, arrayIndex);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EA74C))(this);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x48EA888))(this, key);
	}
	template <typename T = bool> T Remove_1(void* item) {
		return ((T (*)(HEUSerializableDictionary2*, void*))(Il2CppBase() + 0x48EA8C0))(this, item);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(HEUSerializableDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x48EA964))(this, key, value);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EAA60))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EAB2C))(this);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(HEUSerializableDictionary2*))(Il2CppBase() + 0x48EAD40))(this);
	}

};

}

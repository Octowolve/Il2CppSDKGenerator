#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JObject"));
	}

	template <typename T = uintptr_t> T& _properties() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PropertyChanged() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PropertyChanging() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T get_ChildrenTokens() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C7A5C))(this);
	}
	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JObject*, uintptr_t))(Il2CppBase() + 0x40C7B04))(this, node);
	}
	template <typename T = int32_t> T IndexOfItem(uintptr_t item) {
		return ((T (*)(JObject*, uintptr_t))(Il2CppBase() + 0x40C7BDC))(this, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item, bool skipParentCheck) {
		return ((T (*)(JObject*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x40C7C08))(this, index, item, skipParentCheck);
	}
	template <typename T = void> T ValidateToken(uintptr_t o, uintptr_t existing) {
		return ((T (*)(JObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C7C64))(this, o, existing);
	}
	template <typename T = void> T InternalPropertyChanged(uintptr_t childProperty) {
		return ((T (*)(JObject*, uintptr_t))(Il2CppBase() + 0x40C7F5C))(this, childProperty);
	}
	template <typename T = void> T InternalPropertyChanging(uintptr_t childProperty) {
		return ((T (*)(JObject*, uintptr_t))(Il2CppBase() + 0x40C8060))(this, childProperty);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C8094))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C8124))(this);
	}
	template <typename T = uintptr_t> T Property(Il2CppString* name) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40C6BCC))(this, name);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(JObject*, uintptr_t))(Il2CppBase() + 0x40C812C))(this, key);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* propertyName) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40944D8))(this, propertyName);
	}
	template <typename T = void> T set_Item(Il2CppString* propertyName, uintptr_t value) {
		return ((T (*)(JObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40C82C4))(this, propertyName, value);
	}
	template <typename T = uintptr_t> static T Load(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40944D0))(0, reader);
	}
	template <typename T = uintptr_t> static T Load_1(uintptr_t reader, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C8580))(0, reader, settings);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JObject*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40C87F0))(this, writer, converters);
	}
	template <typename T = void> T Add(Il2CppString* propertyName, uintptr_t value) {
		return ((T (*)(JObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40C8934))(this, propertyName, value);
	}
	template <typename T = bool> T System_Collections_Generic_IDictionarySystem_String,Newtonsoft_Json_Linq_JToken_ContainsKey(Il2CppString* key) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40C89E4))(this, key);
	}
	template <typename T = void*> T System_Collections_Generic_IDictionarySystem_String,Newtonsoft_Json_Linq_JToken_get_Keys() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C8A10))(this);
	}
	template <typename T = bool> T Remove(Il2CppString* propertyName) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40C8A3C))(this, propertyName);
	}
	template <typename T = bool> T TryGetValue(Il2CppString* propertyName, uintptr_t* value) {
		return ((T (*)(JObject*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x40C8A68))(this, propertyName, value);
	}
	template <typename T = void*> T System_Collections_Generic_IDictionarySystem_String,Newtonsoft_Json_Linq_JToken_get_Values() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C8AB0))(this);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_Add(void* item) {
		return ((T (*)(JObject*, void*))(Il2CppBase() + 0x40C8B44))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_Clear() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C8C34))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_Contains(void* item) {
		return ((T (*)(JObject*, void*))(Il2CppBase() + 0x40C8C44))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(JObject*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x40C8D40))(this, array, arrayIndex);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_get_IsReadOnly() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C9204))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionSystem_Collections_Generic_KeyValuePairSystem_String,Newtonsoft_Json_Linq_JToken_Remove(void* item) {
		return ((T (*)(JObject*, void*))(Il2CppBase() + 0x40C920C))(this, item);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C93B4))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(JObject*))(Il2CppBase() + 0x40C93B8))(this);
	}
	template <typename T = void> T OnPropertyChanged(Il2CppString* propertyName) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40C9484))(this, propertyName);
	}
	template <typename T = void> T OnPropertyChanging(Il2CppString* propertyName) {
		return ((T (*)(JObject*, Il2CppString*))(Il2CppBase() + 0x40C9538))(this, propertyName);
	}
	template <typename T = uintptr_t> T System_ComponentModel_ICustomTypeDescriptor_GetProperties(Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(JObject*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40C95EC))(this, attributes);
	}

};

}

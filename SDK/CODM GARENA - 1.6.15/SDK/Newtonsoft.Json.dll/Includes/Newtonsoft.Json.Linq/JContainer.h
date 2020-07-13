#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JContainer"));
	}

	template <typename T = uintptr_t> T& _listChanged() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _addingNew() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _syncRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _busy() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void*> T get_ChildrenTokens() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CheckReentrancy() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C3A3C))(this);
	}
	template <typename T = void> T OnListChanged(uintptr_t e) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C3B6C))(this, e);
	}
	template <typename T = bool> T get_HasValues() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C3BE0))(this);
	}
	template <typename T = bool> T ContentsEqual(uintptr_t container) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C1870))(this, container);
	}
	template <typename T = uintptr_t> T get_First() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C3CF8))(this);
	}
	template <typename T = uintptr_t> T get_Last() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C3E90))(this);
	}
	template <typename T = void*> T Children() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C402C))(this);
	}
	template <typename T = void*> T Descendants() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C40DC))(this);
	}
	template <typename T = void*> T GetDescendants(bool self) {
		return ((T (*)(JContainer*, bool))(Il2CppBase() + 0x40C40E4))(this, self);
	}
	template <typename T = bool> T IsMultiContent(uintptr_t content) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C4268))(this, content);
	}
	template <typename T = uintptr_t> T EnsureParentToken(uintptr_t item, bool skipParentCheck) {
		return ((T (*)(JContainer*, uintptr_t, bool))(Il2CppBase() + 0x40C43A0))(this, item, skipParentCheck);
	}
	template <typename T = int32_t> T IndexOfItem(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item, bool skipParentCheck) {
		return ((T (*)(JContainer*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x40C443C))(this, index, item, skipParentCheck);
	}
	template <typename T = void> T RemoveItemAt(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C48D8))(this, index);
	}
	template <typename T = bool> T RemoveItem(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C4E00))(this, item);
	}
	template <typename T = uintptr_t> T GetItem(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C4E4C))(this, index);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t item) {
		return ((T (*)(JContainer*, int32_t, uintptr_t))(Il2CppBase() + 0x40C4F5C))(this, index, item);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C560C))(this);
	}
	template <typename T = void> T ReplaceItem(uintptr_t existing, uintptr_t replacement) {
		return ((T (*)(JContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C5A2C))(this, existing, replacement);
	}
	template <typename T = bool> T ContainsItem(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C5A98))(this, item);
	}
	template <typename T = void> T CopyItemsTo(uintptr_t array, int32_t arrayIndex) {
		return ((T (*)(JContainer*, uintptr_t, int32_t))(Il2CppBase() + 0x40C5AC4))(this, array, arrayIndex);
	}
	template <typename T = bool> static T IsTokenUnchanged(uintptr_t currentValue, uintptr_t newValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C551C))(0, currentValue, newValue);
	}
	template <typename T = void> T ValidateToken(uintptr_t o, uintptr_t existing) {
		return ((T (*)(JContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C5F50))(this, o, existing);
	}
	template <typename T = void> T Add(uintptr_t content) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C60E4))(this, content);
	}
	template <typename T = void> T AddAndSkipParentCheck(uintptr_t token) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C620C))(this, token);
	}
	template <typename T = void> T AddInternal(int32_t index, uintptr_t content, bool skipParentCheck) {
		return ((T (*)(JContainer*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x40C3694))(this, index, content, skipParentCheck);
	}
	template <typename T = uintptr_t> static T CreateFromContent(uintptr_t content) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40C6334))(0, content);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C641C))(this);
	}
	template <typename T = void> T ReadTokenFrom(uintptr_t reader, uintptr_t options) {
		return ((T (*)(JContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C1EDC))(this, reader, options);
	}
	template <typename T = void> T ReadContentFrom(uintptr_t r, uintptr_t settings) {
		return ((T (*)(JContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C642C))(this, r, settings);
	}
	template <typename T = int32_t> T ContentsHashCode() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C25E4))(this);
	}
	template <typename T = int32_t> T System_Collections_Generic_IListNewtonsoft_Json_Linq_JToken_IndexOf(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6C94))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_IListNewtonsoft_Json_Linq_JToken_Insert(int32_t index, uintptr_t item) {
		return ((T (*)(JContainer*, int32_t, uintptr_t))(Il2CppBase() + 0x40C6CA4))(this, index, item);
	}
	template <typename T = void> T System_Collections_Generic_IListNewtonsoft_Json_Linq_JToken_RemoveAt(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C6CD0))(this, index);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IListNewtonsoft_Json_Linq_JToken_get_Item(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C6CE0))(this, index);
	}
	template <typename T = void> T System_Collections_Generic_IListNewtonsoft_Json_Linq_JToken_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(JContainer*, int32_t, uintptr_t))(Il2CppBase() + 0x40C6CF0))(this, index, value);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_Add(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6D00))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_Clear() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6D10))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_Contains(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6D20))(this, item);
	}
	template <typename T = void> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_CopyTo(Il2CppArray<uintptr_t>* array, int32_t arrayIndex) {
		return ((T (*)(JContainer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x40C6D30))(this, array, arrayIndex);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_get_IsReadOnly() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6D40))(this);
	}
	template <typename T = bool> T System_Collections_Generic_ICollectionNewtonsoft_Json_Linq_JToken_Remove(uintptr_t item) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6D48))(this, item);
	}
	template <typename T = uintptr_t> T EnsureValue(uintptr_t value) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6D58))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_Add(uintptr_t value) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6E5C))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Clear() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6E94))(this);
	}
	template <typename T = bool> T System_Collections_IList_Contains(uintptr_t value) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6EA4))(this, value);
	}
	template <typename T = int32_t> T System_Collections_IList_IndexOf(uintptr_t value) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6ED0))(this, value);
	}
	template <typename T = void> T System_Collections_IList_Insert(int32_t index, uintptr_t value) {
		return ((T (*)(JContainer*, int32_t, uintptr_t))(Il2CppBase() + 0x40C6EFC))(this, index, value);
	}
	template <typename T = bool> T System_Collections_IList_get_IsFixedSize() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6F44))(this);
	}
	template <typename T = bool> T System_Collections_IList_get_IsReadOnly() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6F4C))(this);
	}
	template <typename T = void> T System_Collections_IList_Remove(uintptr_t value) {
		return ((T (*)(JContainer*, uintptr_t))(Il2CppBase() + 0x40C6F54))(this, value);
	}
	template <typename T = void> T System_Collections_IList_RemoveAt(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C6F80))(this, index);
	}
	template <typename T = uintptr_t> T System_Collections_IList_get_Item(int32_t index) {
		return ((T (*)(JContainer*, int32_t))(Il2CppBase() + 0x40C6F90))(this, index);
	}
	template <typename T = void> T System_Collections_IList_set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(JContainer*, int32_t, uintptr_t))(Il2CppBase() + 0x40C6FA0))(this, index, value);
	}
	template <typename T = void> T System_Collections_ICollection_CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(JContainer*, uintptr_t, int32_t))(Il2CppBase() + 0x40C6FD8))(this, array, index);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x408F36C))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6FE8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(JContainer*))(Il2CppBase() + 0x40C6FF0))(this);
	}

};

}

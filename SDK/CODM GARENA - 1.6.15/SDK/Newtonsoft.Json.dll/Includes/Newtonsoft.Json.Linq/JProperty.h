#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JProperty"));
	}

	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void*> T get_ChildrenTokens() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40C9F24))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40C7F54))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40C6A50))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(JProperty*, uintptr_t))(Il2CppBase() + 0x40C83C4))(this, value);
	}
	template <typename T = uintptr_t> T GetItem(int32_t index) {
		return ((T (*)(JProperty*, int32_t))(Il2CppBase() + 0x40C9FEC))(this, index);
	}
	template <typename T = void> T SetItem(int32_t index, uintptr_t item) {
		return ((T (*)(JProperty*, int32_t, uintptr_t))(Il2CppBase() + 0x40CA0AC))(this, index, item);
	}
	template <typename T = bool> T RemoveItem(uintptr_t item) {
		return ((T (*)(JProperty*, uintptr_t))(Il2CppBase() + 0x40CA27C))(this, item);
	}
	template <typename T = void> T RemoveItemAt(int32_t index) {
		return ((T (*)(JProperty*, int32_t))(Il2CppBase() + 0x40CA3E0))(this, index);
	}
	template <typename T = int32_t> T IndexOfItem(uintptr_t item) {
		return ((T (*)(JProperty*, uintptr_t))(Il2CppBase() + 0x40CA544))(this, item);
	}
	template <typename T = void> T InsertItem(int32_t index, uintptr_t item, bool skipParentCheck) {
		return ((T (*)(JProperty*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x40CA58C))(this, index, item, skipParentCheck);
	}
	template <typename T = bool> T ContainsItem(uintptr_t item) {
		return ((T (*)(JProperty*, uintptr_t))(Il2CppBase() + 0x40CA75C))(this, item);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40CA790))(this);
	}
	template <typename T = bool> T DeepEquals(uintptr_t node) {
		return ((T (*)(JProperty*, uintptr_t))(Il2CppBase() + 0x40CA8F4))(this, node);
	}
	template <typename T = uintptr_t> T CloneToken() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40CAA1C))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40CAAAC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer, Il2CppArray<uintptr_t>* converters) {
		return ((T (*)(JProperty*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40CAAB4))(this, writer, converters);
	}
	template <typename T = int32_t> T GetDeepHashCode() {
		return ((T (*)(JProperty*))(Il2CppBase() + 0x40CAB40))(this);
	}
	template <typename T = uintptr_t> static T Load(uintptr_t reader, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40CABB0))(0, reader, settings);
	}

};

}

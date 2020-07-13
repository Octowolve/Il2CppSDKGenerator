#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class AttributeCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "AttributeCollection"));
	}

	template <typename T = uintptr_t> T& attrList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA1774))(this);
	}
	template <typename T = bool> T System_Collections_ICollection_get_IsSynchronized() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA17AC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_ICollection_get_SyncRoot() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA17E0))(this);
	}
	template <typename T = int32_t> T System_Collections_ICollection_get_Count() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA1814))(this);
	}
	template <typename T = bool> T Contains(uintptr_t attr) {
		return ((T (*)(AttributeCollection*, uintptr_t))(Il2CppBase() + 0x4CA1854))(this, attr);
	}
	template <typename T = bool> T Contains_1(Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(AttributeCollection*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CA18CC))(this, attributes);
	}
	template <typename T = void> T CopyTo(uintptr_t array, int32_t index) {
		return ((T (*)(AttributeCollection*, uintptr_t, int32_t))(Il2CppBase() + 0x4CA1938))(this, array, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA1778))(this);
	}
	template <typename T = uintptr_t> T GetDefaultAttribute(uintptr_t attributeType) {
		return ((T (*)(AttributeCollection*, uintptr_t))(Il2CppBase() + 0x4CA196C))(this, attributeType);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(AttributeCollection*))(Il2CppBase() + 0x4CA1834))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t type) {
		return ((T (*)(AttributeCollection*, uintptr_t))(Il2CppBase() + 0x4CA1B4C))(this, type);
	}

};

}

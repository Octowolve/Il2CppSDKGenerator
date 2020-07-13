#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class MemberDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "MemberDescriptor"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attrs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& attrCollection() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& default_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_AttributeArray() {
		return ((T (*)(MemberDescriptor*))(Il2CppBase() + 0x4CAE968))(this);
	}
	template <typename T = void> T FillAttributes(uintptr_t attributeList) {
		return ((T (*)(MemberDescriptor*, uintptr_t))(Il2CppBase() + 0x4CAEE84))(this, attributeList);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MemberDescriptor*))(Il2CppBase() + 0x4CAEE88))(this);
	}
	template <typename T = uintptr_t> T CreateAttributeCollection() {
		return ((T (*)(MemberDescriptor*))(Il2CppBase() + 0x4CAEEBC))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MemberDescriptor*))(Il2CppBase() + 0x4CAEF64))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MemberDescriptor*))(Il2CppBase() + 0x4CAEF6C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(MemberDescriptor*, uintptr_t))(Il2CppBase() + 0x4CAEF74))(this, obj);
	}
	template <typename T = uintptr_t> static T get_DefaultComparer() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CAF07C))(0);
	}

};

}

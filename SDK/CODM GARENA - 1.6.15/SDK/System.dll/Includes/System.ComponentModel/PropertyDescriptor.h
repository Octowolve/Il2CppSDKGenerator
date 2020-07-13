#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class PropertyDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "PropertyDescriptor"));
	}


	template <typename T = uintptr_t> T get_ComponentType() {
		return ((T (*)(PropertyDescriptor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(PropertyDescriptor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FillAttributes(uintptr_t attributeList) {
		return ((T (*)(PropertyDescriptor*, uintptr_t))(Il2CppBase() + 0x4CAFF58))(this, attributeList);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PropertyDescriptor*, uintptr_t))(Il2CppBase() + 0x4CAFF5C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PropertyDescriptor*))(Il2CppBase() + 0x4CB0060))(this);
	}

};

}

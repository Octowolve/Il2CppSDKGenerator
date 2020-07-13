#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ReflectionPropertyDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ReflectionPropertyDescriptor"));
	}

	template <typename T = uintptr_t> T& _member() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _componentType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _propertyType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T GetPropertyInfo() {
		return ((T (*)(ReflectionPropertyDescriptor*))(Il2CppBase() + 0x4CB36A8))(this);
	}
	template <typename T = uintptr_t> T get_ComponentType() {
		return ((T (*)(ReflectionPropertyDescriptor*))(Il2CppBase() + 0x4CB38B8))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(ReflectionPropertyDescriptor*))(Il2CppBase() + 0x4CB38C0))(this);
	}
	template <typename T = void> T FillAttributes(uintptr_t attributeList) {
		return ((T (*)(ReflectionPropertyDescriptor*, uintptr_t))(Il2CppBase() + 0x4CB38C8))(this, attributeList);
	}

};

}

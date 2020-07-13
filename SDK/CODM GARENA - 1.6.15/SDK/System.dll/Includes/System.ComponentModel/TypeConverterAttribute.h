#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class TypeConverterAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "TypeConverterAttribute"));
	}

	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& converter_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(TypeConverterAttribute*, uintptr_t))(Il2CppBase() + 0x4CB68E0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TypeConverterAttribute*))(Il2CppBase() + 0x4CB69D4))(this);
	}
	template <typename T = Il2CppString*> T get_ConverterTypeName() {
		return ((T (*)(TypeConverterAttribute*))(Il2CppBase() + 0x4CB69CC))(this);
	}

};

}

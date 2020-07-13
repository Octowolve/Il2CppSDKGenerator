#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DefaultPropertyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DefaultPropertyAttribute"));
	}

	template <typename T = Il2CppString*> T& property_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(DefaultPropertyAttribute*))(Il2CppBase() + 0x4CA84C8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(DefaultPropertyAttribute*, uintptr_t))(Il2CppBase() + 0x4CA84D0))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DefaultPropertyAttribute*))(Il2CppBase() + 0x4CA85BC))(this);
	}

};

}

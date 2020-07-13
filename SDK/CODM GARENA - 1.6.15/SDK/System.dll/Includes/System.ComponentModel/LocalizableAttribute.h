#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class LocalizableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "LocalizableAttribute"));
	}

	template <typename T = bool> T& localizable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& No() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Yes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsLocalizable() {
		return ((T (*)(LocalizableAttribute*))(Il2CppBase() + 0x4CAE77C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(LocalizableAttribute*, uintptr_t))(Il2CppBase() + 0x4CAE784))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LocalizableAttribute*))(Il2CppBase() + 0x4CAE848))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(LocalizableAttribute*))(Il2CppBase() + 0x4CAE854))(this);
	}

};

}

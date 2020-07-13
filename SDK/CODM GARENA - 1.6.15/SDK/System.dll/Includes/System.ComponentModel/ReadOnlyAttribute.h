#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ReadOnlyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ReadOnlyAttribute"));
	}

	template <typename T = bool> T& read_only() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& No() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Yes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(ReadOnlyAttribute*))(Il2CppBase() + 0x4CB1BFC))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ReadOnlyAttribute*))(Il2CppBase() + 0x4CB1C04))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(ReadOnlyAttribute*, uintptr_t))(Il2CppBase() + 0x4CB1C10))(this, o);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(ReadOnlyAttribute*))(Il2CppBase() + 0x4CB1CCC))(this);
	}

};

}

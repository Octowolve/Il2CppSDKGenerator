#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class BrowsableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "BrowsableAttribute"));
	}

	template <typename T = bool> T& browsable() {
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

	template <typename T = bool> T get_Browsable() {
		return ((T (*)(BrowsableAttribute*))(Il2CppBase() + 0x4CA31C4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(BrowsableAttribute*, uintptr_t))(Il2CppBase() + 0x4CA31CC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BrowsableAttribute*))(Il2CppBase() + 0x4CA3290))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(BrowsableAttribute*))(Il2CppBase() + 0x4CA329C))(this);
	}

};

}

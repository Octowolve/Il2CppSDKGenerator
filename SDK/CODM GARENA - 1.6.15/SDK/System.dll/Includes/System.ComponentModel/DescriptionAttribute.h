#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DescriptionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DescriptionAttribute"));
	}

	template <typename T = Il2CppString*> T& desc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(DescriptionAttribute*))(Il2CppBase() + 0x4CA8BEC))(this);
	}
	template <typename T = Il2CppString*> T get_DescriptionValue() {
		return ((T (*)(DescriptionAttribute*))(Il2CppBase() + 0x4CA8BF4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DescriptionAttribute*, uintptr_t))(Il2CppBase() + 0x4CA8BFC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DescriptionAttribute*))(Il2CppBase() + 0x4CA8D4C))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(DescriptionAttribute*))(Il2CppBase() + 0x4CA8D78))(this);
	}

};

}

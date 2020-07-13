#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class RecommendedAsConfigurableAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "RecommendedAsConfigurableAttribute"));
	}

	template <typename T = bool> T& recommendedAsConfigurable() {
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

	template <typename T = bool> T get_RecommendedAsConfigurable() {
		return ((T (*)(RecommendedAsConfigurableAttribute*))(Il2CppBase() + 0x4CB1E90))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RecommendedAsConfigurableAttribute*, uintptr_t))(Il2CppBase() + 0x4CB1E98))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RecommendedAsConfigurableAttribute*))(Il2CppBase() + 0x4CB1FA4))(this);
	}
	template <typename T = bool> T IsDefaultAttribute() {
		return ((T (*)(RecommendedAsConfigurableAttribute*))(Il2CppBase() + 0x4CB1FB0))(this);
	}

};

}

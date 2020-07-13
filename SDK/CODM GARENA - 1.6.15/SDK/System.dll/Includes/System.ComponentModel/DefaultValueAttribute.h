#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class DefaultValueAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "DefaultValueAttribute"));
	}

	template <typename T = uintptr_t> T& DefaultValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(DefaultValueAttribute*))(Il2CppBase() + 0x4CA894C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(DefaultValueAttribute*, uintptr_t))(Il2CppBase() + 0x4CA8954))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DefaultValueAttribute*))(Il2CppBase() + 0x4CA8A4C))(this);
	}

};

}

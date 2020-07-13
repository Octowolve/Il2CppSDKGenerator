#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrayPropertyDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ArrayPropertyDescriptor"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& array_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_ComponentType() {
		return ((T (*)(ArrayPropertyDescriptor*))(Il2CppBase() + 0x4CA14F8))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(ArrayPropertyDescriptor*))(Il2CppBase() + 0x4CA1500))(this);
	}

};

}

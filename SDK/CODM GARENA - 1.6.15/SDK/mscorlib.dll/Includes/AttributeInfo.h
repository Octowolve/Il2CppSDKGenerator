#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttributeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "AttributeInfo"));
	}

	template <typename T = uintptr_t> T& _usage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _inheritanceLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Usage() {
		return ((T (*)(AttributeInfo*))(Il2CppBase() + 0x4550070))(this);
	}
	template <typename T = int32_t> T get_InheritanceLevel() {
		return ((T (*)(AttributeInfo*))(Il2CppBase() + 0x4550078))(this);
	}

};

}

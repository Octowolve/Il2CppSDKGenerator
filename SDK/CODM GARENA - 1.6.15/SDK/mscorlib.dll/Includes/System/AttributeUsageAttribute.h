#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AttributeUsageAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AttributeUsageAttribute"));
	}

	template <typename T = uintptr_t> T& valid_on() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& allow_multiple() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& inherited() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = bool> T get_AllowMultiple() {
		return ((T (*)(AttributeUsageAttribute*))(Il2CppBase() + 0x3627ACC))(this);
	}
	template <typename T = void> T set_AllowMultiple(bool value) {
		return ((T (*)(AttributeUsageAttribute*, bool))(Il2CppBase() + 0x3627AD4))(this, value);
	}
	template <typename T = bool> T get_Inherited() {
		return ((T (*)(AttributeUsageAttribute*))(Il2CppBase() + 0x3627ADC))(this);
	}
	template <typename T = void> T set_Inherited(bool value) {
		return ((T (*)(AttributeUsageAttribute*, bool))(Il2CppBase() + 0x3627AE4))(this, value);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class InterpreterFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "InterpreterFactory"));
	}

	template <typename T = uintptr_t> T& mapping() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pattern() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& namesMapping() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& gap() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T NewInstance() {
		return ((T (*)(InterpreterFactory*))(Il2CppBase() + 0x4AD84A4))(this);
	}
	template <typename T = int32_t> T get_GroupCount() {
		return ((T (*)(InterpreterFactory*))(Il2CppBase() + 0x4AD8538))(this);
	}
	template <typename T = int32_t> T get_Gap() {
		return ((T (*)(InterpreterFactory*))(Il2CppBase() + 0x4AD8574))(this);
	}
	template <typename T = void> T set_Gap(int32_t value) {
		return ((T (*)(InterpreterFactory*, int32_t))(Il2CppBase() + 0x4AD857C))(this, value);
	}
	template <typename T = uintptr_t> T get_Mapping() {
		return ((T (*)(InterpreterFactory*))(Il2CppBase() + 0x4AD8584))(this);
	}
	template <typename T = void> T set_Mapping(uintptr_t value) {
		return ((T (*)(InterpreterFactory*, uintptr_t))(Il2CppBase() + 0x4AD858C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NamesMapping() {
		return ((T (*)(InterpreterFactory*))(Il2CppBase() + 0x4AD8594))(this);
	}
	template <typename T = void> T set_NamesMapping(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(InterpreterFactory*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AD859C))(this, value);
	}

};

}

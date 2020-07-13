#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class TypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "TypeInfo"));
	}

	template <typename T = uintptr_t> T& _properties() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T GetAttributes() {
		return ((T (*)(TypeInfo*))(Il2CppBase() + 0x4CB9F48))(this);
	}
	template <typename T = uintptr_t> T GetProperties() {
		return ((T (*)(TypeInfo*))(Il2CppBase() + 0x4CB9F50))(this);
	}

};

}

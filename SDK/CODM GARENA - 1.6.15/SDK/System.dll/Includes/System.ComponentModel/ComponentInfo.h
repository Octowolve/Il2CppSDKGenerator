#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ComponentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ComponentInfo"));
	}

	template <typename T = uintptr_t> T& _component() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _properties() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T GetAttributes() {
		return ((T (*)(ComponentInfo*))(Il2CppBase() + 0x4CA4BA4))(this);
	}
	template <typename T = uintptr_t> T GetProperties() {
		return ((T (*)(ComponentInfo*))(Il2CppBase() + 0x4CA56D8))(this);
	}

};

}

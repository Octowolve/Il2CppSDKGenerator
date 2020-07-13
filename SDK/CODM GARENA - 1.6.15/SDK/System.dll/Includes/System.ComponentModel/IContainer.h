#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class IContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "IContainer"));
	}


	template <typename T = uintptr_t> T get_Components() {
		return ((T (*)(IContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Remove(uintptr_t component) {
		return ((T (*)(IContainer*, uintptr_t))(Il2CppBase() + 0x0))(this, component);
	}

};

}

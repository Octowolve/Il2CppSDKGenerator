#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class IComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "IComponent"));
	}


	template <typename T = void> T add_Disposed(uintptr_t value) {
		return ((T (*)(IComponent*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_Disposed(uintptr_t value) {
		return ((T (*)(IComponent*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_Site() {
		return ((T (*)(IComponent*))(Il2CppBase() + 0x0))(this);
	}

};

}

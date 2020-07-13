#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class WeakObjectWrapperComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "WeakObjectWrapperComparer"));
	}


	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(WeakObjectWrapperComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CBAC9C))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(WeakObjectWrapperComparer*, uintptr_t))(Il2CppBase() + 0x4CBAD58))(this, obj);
	}

};

}

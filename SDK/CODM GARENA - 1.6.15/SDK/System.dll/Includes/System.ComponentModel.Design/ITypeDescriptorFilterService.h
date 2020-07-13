#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel.Design {

class ITypeDescriptorFilterService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel.Design", "ITypeDescriptorFilterService"));
	}


	template <typename T = bool> T FilterAttributes(uintptr_t component, uintptr_t attributes) {
		return ((T (*)(ITypeDescriptorFilterService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, component, attributes);
	}
	template <typename T = bool> T FilterProperties(uintptr_t component, uintptr_t properties) {
		return ((T (*)(ITypeDescriptorFilterService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, component, properties);
	}

};

}

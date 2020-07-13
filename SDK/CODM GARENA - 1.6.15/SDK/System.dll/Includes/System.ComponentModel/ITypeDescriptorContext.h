#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ITypeDescriptorContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ITypeDescriptorContext"));
	}


	template <typename T = uintptr_t> T get_Container() {
		return ((T (*)(ITypeDescriptorContext*))(Il2CppBase() + 0x0))(this);
	}

};

}

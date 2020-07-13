#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ICustomTypeDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ICustomTypeDescriptor"));
	}


	template <typename T = uintptr_t> T GetProperties(Il2CppArray<uintptr_t>* arr) {
		return ((T (*)(ICustomTypeDescriptor*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, arr);
	}

};

}

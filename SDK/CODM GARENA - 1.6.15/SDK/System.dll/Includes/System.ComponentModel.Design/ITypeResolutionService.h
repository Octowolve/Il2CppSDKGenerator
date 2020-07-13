#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel.Design {

class ITypeResolutionService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel.Design", "ITypeResolutionService"));
	}


	template <typename T = uintptr_t> T GetType(Il2CppString* name) {
		return ((T (*)(ITypeResolutionService*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}

};

}

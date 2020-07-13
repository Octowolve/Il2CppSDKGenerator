#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ComponentCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ComponentCollection"));
	}


	template <typename T = uintptr_t> T get_Item(Il2CppString* name) {
		return ((T (*)(ComponentCollection*, Il2CppString*))(Il2CppBase() + 0x4CA44DC))(this, name);
	}

};

}

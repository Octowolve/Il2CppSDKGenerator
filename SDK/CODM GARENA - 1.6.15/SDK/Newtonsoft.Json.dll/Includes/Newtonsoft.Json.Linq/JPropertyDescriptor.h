#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JPropertyDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JPropertyDescriptor"));
	}


	template <typename T = uintptr_t> T get_ComponentType() {
		return ((T (*)(JPropertyDescriptor*))(Il2CppBase() + 0x40CB200))(this);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(JPropertyDescriptor*))(Il2CppBase() + 0x40CB2BC))(this);
	}

};

}

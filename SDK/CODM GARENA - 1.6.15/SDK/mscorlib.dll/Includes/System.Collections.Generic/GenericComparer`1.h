#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class GenericComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "GenericComparer`1"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(GenericComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C1C7DC))(this, x, y);
	}

};

}

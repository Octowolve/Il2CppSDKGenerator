#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IComparer`1"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(IComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}

};

}

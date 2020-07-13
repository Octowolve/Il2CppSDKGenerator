#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Generic {

class IEqualityComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections.Generic", "IEqualityComparer`1"));
	}


	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(IEqualityComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(IEqualityComparer1*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}

};

}

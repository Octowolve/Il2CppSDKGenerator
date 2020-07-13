#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IEqualityComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IEqualityComparer"));
	}


	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(IEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(IEqualityComparer*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}

};

}

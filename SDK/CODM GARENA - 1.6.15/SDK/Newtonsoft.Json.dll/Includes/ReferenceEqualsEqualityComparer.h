#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReferenceEqualsEqualityComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "ReferenceEqualsEqualityComparer"));
	}


	template <typename T = bool> T System_Collections_Generic_IEqualityComparerSystem_Object_Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(ReferenceEqualsEqualityComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x398D070))(this, x, y);
	}
	template <typename T = int32_t> T System_Collections_Generic_IEqualityComparerSystem_Object_GetHashCode(uintptr_t obj) {
		return ((T (*)(ReferenceEqualsEqualityComparer*, uintptr_t))(Il2CppBase() + 0x398D080))(this, obj);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TupleEqualityComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TupleEqualityComparer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Equals(void* t0, void* t1) {
		return ((T (*)(TupleEqualityComparer*, void*, void*))(Il2CppBase() + 0x4AF8504))(this, t0, t1);
	}
	template <typename T = int32_t> T GetHashCode(void* t) {
		return ((T (*)(TupleEqualityComparer*, void*))(Il2CppBase() + 0x4AF8688))(this, t);
	}

};

}

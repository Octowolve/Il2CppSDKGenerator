#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass401
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass4_0`1"));
	}

	template <typename T = uintptr_t> T& c() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T CreateMethodCallb__0(uintptr_t o, Il2CppArray<uintptr_t>* a) {
		return ((T (*)(cDisplayClass401*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B67D88))(this, o, a);
	}
	template <typename T = uintptr_t> T CreateMethodCallb__1(uintptr_t o, Il2CppArray<uintptr_t>* a) {
		return ((T (*)(cDisplayClass401*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B67DB8))(this, o, a);
	}

};

}

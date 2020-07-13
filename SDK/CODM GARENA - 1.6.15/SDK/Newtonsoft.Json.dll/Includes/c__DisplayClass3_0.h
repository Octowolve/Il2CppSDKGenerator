#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass3_0"));
	}

	template <typename T = uintptr_t> T& c() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T CreateParameterizedConstructorb__0(Il2CppArray<uintptr_t>* a) {
		return ((T (*)(cDisplayClass30*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF1EB4))(this, a);
	}
	template <typename T = uintptr_t> T CreateParameterizedConstructorb__1(Il2CppArray<uintptr_t>* a) {
		return ((T (*)(cDisplayClass30*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF1EE0))(this, a);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass342
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass34_2"));
	}

	template <typename T = void*> T& createEnumerableWrapper() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void*> T SetExtensionDataDelegatesb__1(uintptr_t o) {
		return ((T (*)(cDisplayClass342*, uintptr_t))(Il2CppBase() + 0x3986F28))(this, o);
	}

};

}

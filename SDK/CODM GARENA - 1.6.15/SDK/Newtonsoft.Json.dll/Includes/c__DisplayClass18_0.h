#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass180
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass18_0"));
	}

	template <typename T = uintptr_t> T& converterType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& defaultConstructor() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T GetJsonConverterCreatorb__0(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(cDisplayClass180*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x39A4BF8))(this, parameters);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass730
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass73_0"));
	}

	template <typename T = uintptr_t> T& callbackMethodInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T CreateSerializationCallbackb__0(uintptr_t o, uintptr_t context) {
		return ((T (*)(cDisplayClass730*, uintptr_t, uintptr_t))(Il2CppBase() + 0x398A784))(this, o, context);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass740
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass74_0"));
	}

	template <typename T = uintptr_t> T& callbackMethodInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T CreateSerializationErrorCallbackb__0(uintptr_t o, uintptr_t context, uintptr_t econtext) {
		return ((T (*)(cDisplayClass740*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x398A8C0))(this, o, context, econtext);
	}

};

}

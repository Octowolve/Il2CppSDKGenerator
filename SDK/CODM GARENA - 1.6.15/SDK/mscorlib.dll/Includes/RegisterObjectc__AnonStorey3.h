#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterObjectcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "<RegisterObject>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& sc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__2(uintptr_t ctx) {
		return ((T (*)(RegisterObjectcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x303260C))(this, ctx);
	}

};

}

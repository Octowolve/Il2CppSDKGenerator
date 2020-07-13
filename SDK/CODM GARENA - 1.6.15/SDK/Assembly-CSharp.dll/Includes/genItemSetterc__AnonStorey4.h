#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genItemSettercAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<genItemSetter>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& params_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& arg() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T m__0(uintptr_t L) {
		return ((T (*)(genItemSettercAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4DD4F68))(this, L);
	}

};

}

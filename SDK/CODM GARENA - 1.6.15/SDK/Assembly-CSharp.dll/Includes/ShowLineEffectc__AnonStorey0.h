#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowLineEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowLineEffect>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& srcElectricTripWireBase() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dstElectricTripWireBase() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t effect) {
		return ((T (*)(ShowLineEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3D4D5D8))(this, effect);
	}

};

}

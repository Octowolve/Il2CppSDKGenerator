#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowEffect>c__AnonStorey0"));
	}

	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& effectAssetId() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0(uintptr_t effectInst) {
		return ((T (*)(ShowEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4378B48))(this, effectInst);
	}

};

}

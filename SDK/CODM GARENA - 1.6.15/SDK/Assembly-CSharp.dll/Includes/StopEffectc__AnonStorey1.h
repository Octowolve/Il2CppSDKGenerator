#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopEffectcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StopEffect>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(StopEffectcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x23FC2D0))(this, _item);
	}

};

}

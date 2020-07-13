#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayEffect>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(PlayEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x23FC28C))(this, _item);
	}

};

}

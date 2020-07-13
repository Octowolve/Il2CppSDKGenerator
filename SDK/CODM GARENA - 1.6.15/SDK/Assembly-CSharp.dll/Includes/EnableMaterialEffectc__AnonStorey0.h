#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnableMaterialEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EnableMaterialEffect>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t _) {
		return ((T (*)(EnableMaterialEffectcAnonStorey0*, int32_t, uintptr_t))(Il2CppBase() + 0x27383D0))(this, id, _);
	}

};

}

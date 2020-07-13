#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectInfo"));
	}

	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& CurvePointsIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& CurveTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EffectRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}

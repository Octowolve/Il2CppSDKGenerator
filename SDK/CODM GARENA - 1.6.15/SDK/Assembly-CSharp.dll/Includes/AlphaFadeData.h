#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AlphaFadeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlphaFadeData"));
	}

	template <typename T = float> T& MinAlpha() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& MaxAlpha() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FadeDistToCenter() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}

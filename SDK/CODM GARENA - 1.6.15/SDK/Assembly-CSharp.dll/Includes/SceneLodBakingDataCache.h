#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLodBakingDataCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneLodBakingDataCache"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& dummyRenderes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lodRenderes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lodUvScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppRect>*> T& lodUv2Rect() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}

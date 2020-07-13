#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessFoliageLayercAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ProcessFoliageLayer>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& layerData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(int32_t posHash) {
		return ((T (*)(ProcessFoliageLayercAnonStorey0*, int32_t))(Il2CppBase() + 0x3CD7E30))(this, posHash);
	}

};

}

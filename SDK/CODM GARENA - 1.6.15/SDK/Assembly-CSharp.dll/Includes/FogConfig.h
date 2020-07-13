#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogConfig"));
	}

	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& FogColor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& FogHeightAtten() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FogStartDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FogMaxHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FogSkyBoxColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}

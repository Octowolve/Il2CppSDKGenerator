#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogTextureBaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogTextureBaker"));
	}

	template <typename T = uintptr_t> T& SkyMat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SkyTexture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FogTexture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FogTexSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& downsample() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& blurSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& blurIterations() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& blurType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CubeMapToSkyTexShader() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SkyTexToFogTexShader() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}

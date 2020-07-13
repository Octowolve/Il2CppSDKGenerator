#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryLightmapGroupSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryLightmapGroupSelector"));
	}

	template <typename T = uintptr_t> T& lmgroupAsset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& instanceResolutionOverride() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& instanceResolution() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}

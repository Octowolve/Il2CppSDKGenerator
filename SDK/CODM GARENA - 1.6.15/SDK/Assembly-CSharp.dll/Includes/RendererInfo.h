#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RendererInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RendererInfo"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& lightmapIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& lightmapOffsetScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}

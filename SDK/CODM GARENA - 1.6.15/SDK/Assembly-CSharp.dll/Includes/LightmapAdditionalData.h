#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightmapAdditionalData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightmapAdditionalData"));
	}

	template <typename T = uintptr_t> T& rnm0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& rnm1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& rnm2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}

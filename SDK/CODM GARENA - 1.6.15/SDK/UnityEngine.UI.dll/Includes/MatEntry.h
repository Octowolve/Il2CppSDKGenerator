#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "MatEntry"));
	}

	template <typename T = uintptr_t> T& baseMat() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& customMat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& stencilId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& compareFunction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& readMask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& writeMask() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& useAlphaClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& colorMask() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}

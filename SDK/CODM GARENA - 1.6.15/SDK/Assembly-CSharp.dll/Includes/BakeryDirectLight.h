#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryDirectLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryDirectLight"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& shadowSpread() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& samples() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& bitmask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bakeToIndirect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& shadowmask() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& shadowmaskDenoise() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = float> T& indirectIntensity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}

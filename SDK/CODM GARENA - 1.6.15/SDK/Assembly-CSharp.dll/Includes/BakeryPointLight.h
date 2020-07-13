#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryPointLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryPointLight"));
	}

	template <typename T = int32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shadowSpread() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& cutoff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& realisticFalloff() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& samples() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& projMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& cookie() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& cubemap() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& iesFile() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& bitmask() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bakeToIndirect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& shadowmask() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = float> T& indirectIntensity() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}

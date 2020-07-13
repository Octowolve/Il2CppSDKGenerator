#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryLightMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryLightMesh"));
	}

	template <typename T = int32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& All() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& cutoff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& samples() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& samples2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& bitmask() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& selfShadow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& bakeToIndirect() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = float> T& indirectIntensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& lmid() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(BakeryLightMesh*))(Il2CppBase() + 0x32528C0))(this);
	}

};

}

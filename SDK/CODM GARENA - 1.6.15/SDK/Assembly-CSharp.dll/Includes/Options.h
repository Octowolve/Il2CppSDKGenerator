#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Options
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Options"));
	}

	template <typename T = float> T& weight() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& spine() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& chest() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = bool> T& hands() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = bool> T& feet() {
		return *(T*)((uintptr_t)this + 0x7);
	}
	template <typename T = uintptr_t> T& joints() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& jointRange() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& colliderLengthOverlap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& torsoColliders() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& headCollider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& armColliders() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& handColliders() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& legColliders() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& footColliders() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4134698))(0);
	}

};

}

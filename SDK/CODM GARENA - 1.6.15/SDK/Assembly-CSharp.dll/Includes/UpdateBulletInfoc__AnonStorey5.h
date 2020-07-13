#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateBulletInfocAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateBulletInfo>c__AnonStorey5"));
	}

	template <typename T = int32_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& slotID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(UpdateBulletInfocAnonStorey5*, uintptr_t))(Il2CppBase() + 0x2473594))(this, s);
	}

};

}

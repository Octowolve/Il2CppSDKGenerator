#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CrossHairHitParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CrossHairHitParam"));
	}

	template <typename T = uintptr_t> T& HitType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsHeadHit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasVest() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppVector3> T& HitPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsInGravitySpikes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

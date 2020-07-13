#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponNiboerTL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponNiboerTL"));
	}

	template <typename T = bool> T& m_PlayingHitEffect() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

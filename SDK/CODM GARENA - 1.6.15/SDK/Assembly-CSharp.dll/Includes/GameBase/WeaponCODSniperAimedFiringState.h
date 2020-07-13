#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODSniperAimedFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODSniperAimedFiringState"));
	}

	template <typename T = uintptr_t> T& m_WeaponSniper() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

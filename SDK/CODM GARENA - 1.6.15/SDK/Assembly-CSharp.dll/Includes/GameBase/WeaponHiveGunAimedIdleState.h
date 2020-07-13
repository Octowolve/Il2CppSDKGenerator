#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponHiveGunAimedIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponHiveGunAimedIdleState"));
	}

	template <typename T = uintptr_t> T& m_WeaponHive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

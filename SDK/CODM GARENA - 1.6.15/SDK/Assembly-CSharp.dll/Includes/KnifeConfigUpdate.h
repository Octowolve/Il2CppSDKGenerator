#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KnifeConfigUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KnifeConfigUpdate"));
	}

	template <typename T = uintptr_t> T& m_WeaponFireComponent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponFireComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetWeaponFireComponent(uintptr_t weaponFireComponent) {
		return ((T (*)(KnifeConfigUpdate*, uintptr_t))(Il2CppBase() + 0x4923F50))(this, weaponFireComponent);
	}

};

}

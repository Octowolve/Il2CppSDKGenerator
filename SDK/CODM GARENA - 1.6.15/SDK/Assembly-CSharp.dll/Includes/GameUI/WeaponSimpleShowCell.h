#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeaponSimpleShowCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeaponSimpleShowCell"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LevelObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetLevel(int32_t weaponLv, int32_t unlockLv) {
		return ((T (*)(WeaponSimpleShowCell*, int32_t, int32_t))(Il2CppBase() + 0x2A312F0))(this, weaponLv, unlockLv);
	}

};

}

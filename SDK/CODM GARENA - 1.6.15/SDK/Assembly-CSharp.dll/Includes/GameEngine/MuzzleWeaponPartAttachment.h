#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MuzzleWeaponPartAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MuzzleWeaponPartAttachment"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(MuzzleWeaponPartAttachment*))(Il2CppBase() + 0x2711E20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadPropertyFromConfig() {
		return ((T (*)(MuzzleWeaponPartAttachment*))(Il2CppBase() + 0x2711F5C))(this);
	}

};

}

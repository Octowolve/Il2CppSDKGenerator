#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LightingTrap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LightingTrap"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& damageVolume() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrapType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetTrapType() {
		return ((T (*)(LightingTrap*))(Il2CppBase() + 0x2496E90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTrapType() {
		return ((T (*)(LightingTrap*))(Il2CppBase() + 0x2496F30))(this);
	}

};

}

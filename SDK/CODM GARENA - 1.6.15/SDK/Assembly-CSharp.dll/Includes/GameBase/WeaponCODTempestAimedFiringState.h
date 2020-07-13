#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODTempestAimedFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODTempestAimedFiringState"));
	}

	template <typename T = uintptr_t> T& m_WeaponSniper() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStopTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T GetStopTime() {
		return ((T (*)(WeaponCODTempestAimedFiringState*))(Il2CppBase() + 0x1C62374))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetStopTime() {
		return ((T (*)(WeaponCODTempestAimedFiringState*))(Il2CppBase() + 0x1C62494))(this);
	}

};

}

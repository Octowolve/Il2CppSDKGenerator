#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponCODTempestAimedFiringStateBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponCODTempestAimedFiringState_BR"));
	}

	template <typename T = uintptr_t> T& m_WeaponSniper() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponCODTempestAimedFiringStateBR*))(Il2CppBase() + 0x1C625B8))(this);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WeaponCODTempestAimedFiringStateBR*))(Il2CppBase() + 0x1C626E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DoStopFire() {
		return ((T (*)(WeaponCODTempestAimedFiringStateBR*))(Il2CppBase() + 0x1C62830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WeaponCODTempestAimedFiringStateBR*))(Il2CppBase() + 0x1C62834))(this);
	}

};

}

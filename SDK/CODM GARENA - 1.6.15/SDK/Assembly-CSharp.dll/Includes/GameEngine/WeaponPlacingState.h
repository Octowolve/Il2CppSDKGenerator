#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPlacingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPlacingState"));
	}

	template <typename T = float> T& m_PlacingElapse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x242324C))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x24232E4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x2423400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x242351C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x2423520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponPlacingState*))(Il2CppBase() + 0x2423524))(this);
	}

};

}

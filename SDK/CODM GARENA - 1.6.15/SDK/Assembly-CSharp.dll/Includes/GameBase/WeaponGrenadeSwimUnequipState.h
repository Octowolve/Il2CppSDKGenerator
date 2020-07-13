#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeSwimUnequipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeSwimUnequipState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A51790))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A51838))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A518F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A51998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A519A0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponGrenadeSwimUnequipState*))(Il2CppBase() + 0x3A519A8))(this);
	}

};

}

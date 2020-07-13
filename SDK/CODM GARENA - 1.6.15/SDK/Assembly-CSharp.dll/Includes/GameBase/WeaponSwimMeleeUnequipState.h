#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSwimMeleeUnequipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSwimMeleeUnequipState"));
	}

	template <typename T = float> T& m_FPUnequipRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_ShouldHiddenWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x4588F38))(this);
	}
	template <typename T = void> T StopSwimming() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x4588FE0))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x45890A0))(this);
	}
	template <typename T = void> T OnCountDown() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x4589140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x45891E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopSwimming() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x45891F0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x45891F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCountDown() {
		return ((T (*)(WeaponSwimMeleeUnequipState*))(Il2CppBase() + 0x4589200))(this);
	}

};

}

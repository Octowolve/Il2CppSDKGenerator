#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatGameLoadoutHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatGameLoadoutHUD"));
	}

	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PrimaryWeapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SecondaryWeapon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& TaticalWeapon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LethalWeapon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalCombatGameLoadoutHUD*))(Il2CppBase() + 0x3D7B250))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(TacticalCombatGameLoadoutHUD*))(Il2CppBase() + 0x3D7B328))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalCombatGameLoadoutHUD*))(Il2CppBase() + 0x3D7BDC4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalCombatGameLoadoutHUD*, float))(Il2CppBase() + 0x3D7BDCC))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalCombatGameLoadoutHUD*))(Il2CppBase() + 0x3D7BE88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalCombatGameLoadoutHUD*, float))(Il2CppBase() + 0x3D7BE90))(this, P0);
	}

};

}

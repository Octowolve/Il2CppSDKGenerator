#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeView"));
	}

	template <typename T = uintptr_t> T& MainWeaponCell() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ViceWeaponCell() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& RoleSkillCell() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LethalCell() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TacticalCell() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& WeaponAttach() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ViceWeaponAttach() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Role() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Skill() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Perk() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& Throw() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LoadoutList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& MainWeapon() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& MainWeaponOptic() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& Lathel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SuiteRoot() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& SuiteDetailBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& SuiteNameLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& SuiteDescLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& SuiteActiveNumber() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& SuiteActive() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& suiteSquad() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSuiteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ShowLoadout(uintptr_t loadoutData, uintptr_t squadType) {
		return ((T (*)(LoadoutHomeView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A49808))(this, loadoutData, squadType);
	}
	template <typename T = void> T CheckSuiteInfo(uintptr_t loadoutData) {
		return ((T (*)(LoadoutHomeView*, uintptr_t))(Il2CppBase() + 0x1A4B018))(this, loadoutData);
	}
	template <typename T = void> T xLuaBaseProxy_ShowLoadout(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LoadoutHomeView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A4B574))(this, P0, P1);
	}

};

}

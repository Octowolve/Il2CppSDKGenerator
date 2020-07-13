#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.AssignedWeapon {

class AssignedWeaponGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.AssignedWeapon", "AssignedWeaponGameUIScene"));
	}

	template <typename T = uintptr_t> T& mAssignedWeaponLoadOut() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AssignedWeaponGameUIScene*))(Il2CppBase() + 0x2B22378))(this);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(AssignedWeaponGameUIScene*))(Il2CppBase() + 0x2B22424))(this);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t message) {
		return ((T (*)(AssignedWeaponGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B22580))(this, message);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AssignedWeaponGameUIScene*))(Il2CppBase() + 0x2B22A40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(AssignedWeaponGameUIScene*))(Il2CppBase() + 0x2B22A44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(AssignedWeaponGameUIScene*, uintptr_t))(Il2CppBase() + 0x2B22A48))(this, P0);
	}

};

}

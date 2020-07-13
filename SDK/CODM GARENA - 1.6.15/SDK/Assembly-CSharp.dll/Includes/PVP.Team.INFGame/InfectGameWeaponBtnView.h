#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameWeaponBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameWeaponBtnView"));
	}

	template <typename T = bool> T& lastKnifeWeaponMode() {
		return *(T*)((uintptr_t)this + 0x171);
	}
	template <typename T = uintptr_t> T& infectGameInfo() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& infectplayerInfo() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& m_LoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShowObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_m_INFGameInfo() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403E970))(this);
	}
	template <typename T = uintptr_t> T get_m_INFPlayerInfo() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403EA7C))(this);
	}
	template <typename T = uintptr_t> T get_mLoadoutDataStore() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403EB88))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403EC38))(this);
	}
	template <typename T = void> T UpdateShowObject() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403ECE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403EE3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateShowObject() {
		return ((T (*)(InfectGameWeaponBtnView*))(Il2CppBase() + 0x403EE44))(this);
	}

};

}

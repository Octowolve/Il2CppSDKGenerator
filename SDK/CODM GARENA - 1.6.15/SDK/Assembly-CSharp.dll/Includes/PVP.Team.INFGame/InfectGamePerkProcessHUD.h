#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGamePerkProcessHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGamePerkProcessHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PerkinfoList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_LastKillCnt() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& InfectGoliath() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_lastGoliathState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& infectGameInfo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadChangeGoliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034B84))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034B8C))(this);
	}
	template <typename T = uintptr_t> T get_m_CurPlayerInfo() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034B9C))(this);
	}
	template <typename T = uintptr_t> T get_m_INFGameInfo() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034C94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034DA0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034EF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4035150))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4034E50))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x40352A4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(InfectGamePerkProcessHUD*, float))(Il2CppBase() + 0x40352AC))(this, dt);
	}
	template <typename T = void> T ActivateGoliath(bool show) {
		return ((T (*)(InfectGamePerkProcessHUD*, bool))(Il2CppBase() + 0x40358D4))(this, show);
	}
	template <typename T = void> T OnChangeGoliath() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4035C40))(this);
	}
	template <typename T = bool> T OnGamepadChangeGoliath() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x4036034))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x40360DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x40360E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InfectGamePerkProcessHUD*))(Il2CppBase() + 0x40360EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InfectGamePerkProcessHUD*, float))(Il2CppBase() + 0x40360F4))(this, P0);
	}

};

}

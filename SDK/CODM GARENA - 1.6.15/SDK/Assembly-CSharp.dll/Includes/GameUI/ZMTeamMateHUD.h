#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMTeamMateHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMTeamMateHUD"));
	}

	template <typename T = uintptr_t> T& TeammateGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TeamInfoItemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bossPawns() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_logoutTeamates() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& normalPosition() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& minShowTotalDamage() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InBossFlighting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeamMateSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDamageToBossChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeamMateInfoItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLogout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A67088))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A67458))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A67460))(this);
	}
	template <typename T = bool> T InBossFlighting() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A6746C))(this);
	}
	template <typename T = int32_t> T TeamMateSort(uintptr_t A, uintptr_t B) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A67550))(this, A, B);
	}
	template <typename T = void> T OnBossShow(uintptr_t boss) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t))(Il2CppBase() + 0x2A54328))(this, boss);
	}
	template <typename T = void> T OnBossClear(uintptr_t boss) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t))(Il2CppBase() + 0x2A54640))(this, boss);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A671A8))(this);
	}
	template <typename T = void> T OnDamageToBossChange(uintptr_t Msg) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t))(Il2CppBase() + 0x2A67C94))(this, Msg);
	}
	template <typename T = void> T SwitchRole(uint32_t playerID) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t))(Il2CppBase() + 0x2A68294))(this, playerID);
	}
	template <typename T = void> T Reposition(uint32_t localPlayerID) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t))(Il2CppBase() + 0x2A68344))(this, localPlayerID);
	}
	template <typename T = void> T AddTeamMateInfoItem(uintptr_t pi) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t))(Il2CppBase() + 0x2A67798))(this, pi);
	}
	template <typename T = bool> T IsHasTeamInfo(uint32_t PlayerId) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t))(Il2CppBase() + 0x2A684B0))(this, PlayerId);
	}
	template <typename T = void> T OnSyncPlayerInfo(uint32_t playerID, uint32_t propertyID, uintptr_t msg) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2A68600))(this, playerID, propertyID, msg);
	}
	template <typename T = void> T UpdateTeamInfo(uint32_t Id, uintptr_t pi) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t, uintptr_t))(Il2CppBase() + 0x2A687A8))(this, Id, pi);
	}
	template <typename T = void> T OnPlayerLogin(uint64_t playerID) {
		return ((T (*)(ZMTeamMateHUD*, uint64_t))(Il2CppBase() + 0x2A68A00))(this, playerID);
	}
	template <typename T = void> T OnPlayerLogout(uint64_t playerID) {
		return ((T (*)(ZMTeamMateHUD*, uint64_t))(Il2CppBase() + 0x2A68CF4))(this, playerID);
	}
	template <typename T = void> T OnShowScorePanel(uintptr_t obj) {
		return ((T (*)(ZMTeamMateHUD*, uintptr_t))(Il2CppBase() + 0x2A68FA4))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ZMTeamMateHUD*))(Il2CppBase() + 0x2A690E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncPlayerInfo(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(ZMTeamMateHUD*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2A690EC))(this, P0, P1, P2);
	}

};

}

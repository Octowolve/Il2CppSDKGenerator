#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnEventProcessor"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NetSyncModules() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoleRecovered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPlayerUltSkillIDChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyStopIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOperatorFireModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseKillStreakSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventBeforePawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPutDownThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToThrowTactical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchToThrowLethal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetCanSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryPickUpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryDiscardWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDroppedPickUpProjectileInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRealDiscardWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerSyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerRequestUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerUseHeicopter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T PreInit(uintptr_t InOwner) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AA104))(this, InOwner);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AA2B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AA480))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AA5D8))(this);
	}
	template <typename T = uintptr_t> T GetModule(uintptr_t InModuleType) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AA740))(this, InModuleType);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AA890))(this);
	}
	template <typename T = void> T OnNotifyRoleChanged(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AB010))(this, Msg);
	}
	template <typename T = void> T OnNotifyRoleRecovered(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AB5F4))(this, Msg);
	}
	template <typename T = void> T OnNotifyPlayerUltSkillIDChanged(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AB79C))(this, Msg);
	}
	template <typename T = void> T OnNotifyStopIndividuation(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ABA18))(this, Msg);
	}
	template <typename T = void> T OnOperatorFireModeChanged(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ABAF0))(this, Msg);
	}
	template <typename T = void> T OnUseKillStreakSkill(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ABBC8))(this, Msg);
	}
	template <typename T = void> T RegisterEventBeforePawnStart() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16ABD98))(this);
	}
	template <typename T = void> T OnReAmmo(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ABE30))(this, Msg);
	}
	template <typename T = void> T OnNextWeapon(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ABF5C))(this, Msg);
	}
	template <typename T = void> T OnSwitchWeapon(uintptr_t msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AC07C))(this, msg);
	}
	template <typename T = bool> T CheckPutDownThrowWeapon(uintptr_t throwWeaponSubCategory) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AC364))(this, throwWeaponSubCategory);
	}
	template <typename T = void> T OnSwitchToThrowTactical(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AC644))(this, Msg);
	}
	template <typename T = void> T OnSwitchToThrowLethal(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AC7DC))(this, Msg);
	}
	template <typename T = void> T OnEnterTrigger(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AC974))(this, Msg);
	}
	template <typename T = void> T OnLeaveTrigger(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ACAE0))(this, Msg);
	}
	template <typename T = void> T OnSetCanSwitchWeapon(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ACC4C))(this, Msg);
	}
	template <typename T = void> T OnTryPickUpItem(uintptr_t inMsg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ACD7C))(this, inMsg);
	}
	template <typename T = void> T OnTryDiscardWeapon(uintptr_t inMsg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AD364))(this, inMsg);
	}
	template <typename T = uintptr_t> T GetDroppedPickUpProjectileInfo(int32_t weaponItemID, unsigned char weaponSlot) {
		return ((T (*)(PawnEventProcessor*, int32_t, unsigned char))(Il2CppBase() + 0x16AD0A4))(this, weaponItemID, weaponSlot);
	}
	template <typename T = void> T OnRealDiscardWeapon(uintptr_t inMsg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AD5E4))(this, inMsg);
	}
	template <typename T = void> T OnLocalPlayerUseItem(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AD868))(this, Msg);
	}
	template <typename T = void> T OnServerSyncUseItem(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ADAD4))(this, Msg);
	}
	template <typename T = void> T ServerRequestUseItem(uint64_t itemTypeId) {
		return ((T (*)(PawnEventProcessor*, uint64_t))(Il2CppBase() + 0x16ADCBC))(this, itemTypeId);
	}
	template <typename T = void> T OnLocalPlayerClimbUp(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ADD88))(this, Msg);
	}
	template <typename T = void> T OnLocalPlayerUseHeicopter(uintptr_t Msg) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16ADE74))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit(uintptr_t P0) {
		return ((T (*)(PawnEventProcessor*, uintptr_t))(Il2CppBase() + 0x16AE13C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AE144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(PawnEventProcessor*))(Il2CppBase() + 0x16AE14C))(this);
	}

};

}

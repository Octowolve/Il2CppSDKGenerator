#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPPlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPPlayerPawn"));
	}

	template <typename T = uintptr_t> T& m_BuildComponent() {
		return *(T*)((uintptr_t)this + 0xBCC);
	}
	template <typename T = uintptr_t> T& m_FlameEffect() {
		return *(T*)((uintptr_t)this + 0xBD0);
	}
	template <typename T = bool> T& m_SkillLock() {
		return *(T*)((uintptr_t)this + 0xBD4);
	}
	template <typename T = Il2CppVector3> T& m_CacheSkillItemPos() {
		return *(T*)((uintptr_t)this + 0xBD8);
	}
	template <typename T = bool> T& UseIgnoreShowInReplay() {
		return *(T*)((uintptr_t)this + 0xBE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkillLockTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLogicalComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DieWithHelmet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColliderOnRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetColliderLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDeadIndicator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreShowInReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTakeDamageComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixTPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoroutineForceUpdateAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControllerColliderHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuckBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuilding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayingBuildAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T get_LogicType() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B093DC))(this);
	}
	template <typename T = bool> T get_SkillLock() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B093E4))(this);
	}
	template <typename T = void> T set_SkillLock(bool value) {
		return ((T (*)(PVPPlayerPawn*, bool))(Il2CppBase() + 0x2B093EC))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CacheSkillItemPos() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B09500))(this);
	}
	template <typename T = void> T set_CacheSkillItemPos(Il2CppVector3 value) {
		return ((T (*)(PVPPlayerPawn*, Il2CppVector3))(Il2CppBase() + 0x2B0956C))(this, value);
	}
	template <typename T = uintptr_t> T OnSkillLockTimeOut() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B09420))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B09584))(this);
	}
	template <typename T = void> T CreateLogicalComponents() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B096FC))(this);
	}
	template <typename T = void> T DieWithHelmet(bool isHeadShot) {
		return ((T (*)(PVPPlayerPawn*, bool))(Il2CppBase() + 0x2B09820))(this, isHeadShot);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PVPPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x2B098E0))(this, isHeadShot, damageType);
	}
	template <typename T = void> T OnDie(uint32_t inKillerID, uint64_t KillWeaponID) {
		return ((T (*)(PVPPlayerPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x2B09B8C))(this, inKillerID, KillWeaponID);
	}
	template <typename T = void> T GetOffVehicle() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2AE3BA4))(this);
	}
	template <typename T = void> T SetColliderOnRevive() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B09E14))(this);
	}
	template <typename T = void> T ResetColliderLayer() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B09FB4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0A188))(this);
	}
	template <typename T = void> T PlayInitAnim() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0A3BC))(this);
	}
	template <typename T = void> T ResetDeadIndicator() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0A4CC))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0A5D4))(this, info);
	}
	template <typename T = bool> T IgnoreShowInReplay(bool isHidden) {
		return ((T (*)(PVPPlayerPawn*, bool))(Il2CppBase() + 0x2B0A8A0))(this, isHidden);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(PVPPlayerPawn*, bool))(Il2CppBase() + 0x2B0AA50))(this, isHidden);
	}
	template <typename T = uintptr_t> T GetTakeDamageComponentType() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0AB24))(this);
	}
	template <typename T = void> T FixTPose() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0AC20))(this);
	}
	template <typename T = uintptr_t> T CoroutineForceUpdateAnimation() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0AD30))(this);
	}
	template <typename T = void> T UseItem(uint64_t itemID, int32_t useItemType, float extendTime) {
		return ((T (*)(PVPPlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x2B0AE18))(this, itemID, useItemType, extendTime);
	}
	template <typename T = void> T OnEnterTrigger(uintptr_t trigger) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0AFB4))(this, trigger);
	}
	template <typename T = void> T OnLeaveTrigger(uintptr_t trigger) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0B068))(this, trigger);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVPPlayerPawn*, float))(Il2CppBase() + 0x2B0B11C))(this, deltaTime);
	}
	template <typename T = void> T BeginDestroy() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0B1D0))(this);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0B280))(this);
	}
	template <typename T = void> T OnControllerColliderHit(uintptr_t hit) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0B32C))(this, hit);
	}
	template <typename T = void> T BeginBuild(uintptr_t info) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0B990))(this, info);
	}
	template <typename T = void> T CancelBuild() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BAA8))(this);
	}
	template <typename T = void> T EndBuild() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BB64))(this);
	}
	template <typename T = void> T QuckBuild(uintptr_t info) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BC20))(this, info);
	}
	template <typename T = bool> T IsBuilding() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BD38))(this);
	}
	template <typename T = bool> T IsPlayingBuildAnim() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BDF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BEB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLogicalComponents() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BEB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PVPPlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x2B0BEC0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnDie(uint32_t P0, uint64_t P1) {
		return ((T (*)(PVPPlayerPawn*, uint32_t, uint64_t))(Il2CppBase() + 0x2B0BEC8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BEE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BEF0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(PVPPlayerPawn*, bool))(Il2CppBase() + 0x2B0BEF8))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTakeDamageComponentType() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BF00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(PVPPlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x2B0BF08))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterTrigger(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BF38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveTrigger(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BF40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PVPPlayerPawn*, float))(Il2CppBase() + 0x2B0BF48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginDestroy() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BF50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnControllerColliderHit(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BF58))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginBuild(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BF60))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CancelBuild() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BF94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndBuild() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BF9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_QuckBuild(uintptr_t P0) {
		return ((T (*)(PVPPlayerPawn*, uintptr_t))(Il2CppBase() + 0x2B0BFA4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsBuilding() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BFD8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPlayingBuildAnim() {
		return ((T (*)(PVPPlayerPawn*))(Il2CppBase() + 0x2B0BFE0))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVESPBotPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVESPBotPawn"));
	}

	template <typename T = int32_t> T& m_UsedWeapon() {
		return *(T*)((uintptr_t)this + 0xAFC);
	}
	template <typename T = Il2CppString*> T& usedWeaponConfig() {
		return *(T*)((uintptr_t)this + 0xB00);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDieAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigAnimComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessStandaloneMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSwitchRoleComponentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_DefaultPhysState() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404F758))(this);
	}
	template <typename T = bool> T get_CalcWeaponAccuracy() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404F760))(this);
	}
	template <typename T = uintptr_t> T get_CachedFSM() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404F768))(this);
	}
	template <typename T = int32_t> T GetMeshAssetID_3P() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404F770))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(PVESPBotPawn*, uintptr_t))(Il2CppBase() + 0x404F854))(this, info);
	}
	template <typename T = void> T InitFSM() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404F9B8))(this);
	}
	template <typename T = void> T GiveWeapon() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404FA50))(this);
	}
	template <typename T = bool> T CanAttack(uintptr_t InTarget, int32_t AttackMode) {
		return ((T (*)(PVESPBotPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x404FB3C))(this, InTarget, AttackMode);
	}
	template <typename T = void> T PerformStartFire() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404FC54))(this);
	}
	template <typename T = void> T PerformStopFire() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x404FDAC))(this);
	}
	template <typename T = void> T SwitchAnimatorController(uintptr_t controller, bool firstPersonAnimator) {
		return ((T (*)(PVESPBotPawn*, uintptr_t, bool))(Il2CppBase() + 0x404FF04))(this, controller, firstPersonAnimator);
	}
	template <typename T = void> T SetAnimatorPara(float deltaTime) {
		return ((T (*)(PVESPBotPawn*, float))(Il2CppBase() + 0x404FFF0))(this, deltaTime);
	}
	template <typename T = void> T PlayDieAnim(bool isHeadShot) {
		return ((T (*)(PVESPBotPawn*, bool))(Il2CppBase() + 0x4050448))(this, isHeadShot);
	}
	template <typename T = void> T ConfigAnimComponent() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x405057C))(this);
	}
	template <typename T = void> T ProcessStandaloneMove(float deltaTime) {
		return ((T (*)(PVESPBotPawn*, float))(Il2CppBase() + 0x405063C))(this, deltaTime);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x40509A8))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(PVESPBotPawn*, bool, uintptr_t))(Il2CppBase() + 0x4050C20))(this, isHeadShot, damageType);
	}
	template <typename T = uintptr_t> T GetSwitchRoleComponentType() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050CF0))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetMeshAssetID_3P() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050DEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(PVESPBotPawn*, uintptr_t))(Il2CppBase() + 0x4050DF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitFSM() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050DFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_GiveWeapon() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E04))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanAttack(uintptr_t P0, int32_t P1) {
		return ((T (*)(PVESPBotPawn*, uintptr_t, int32_t))(Il2CppBase() + 0x4050E0C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_PerformStartFire() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PerformStopFire() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(PVESPBotPawn*, uintptr_t, bool))(Il2CppBase() + 0x4050E24))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetAnimatorPara(float P0) {
		return ((T (*)(PVESPBotPawn*, float))(Il2CppBase() + 0x4050E2C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayDieAnim(bool P0) {
		return ((T (*)(PVESPBotPawn*, bool))(Il2CppBase() + 0x4050E34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigAnimComponent() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessStandaloneMove(float P0) {
		return ((T (*)(PVESPBotPawn*, float))(Il2CppBase() + 0x4050E44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(PVESPBotPawn*, bool, uintptr_t))(Il2CppBase() + 0x4050E54))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetSwitchRoleComponentType() {
		return ((T (*)(PVESPBotPawn*))(Il2CppBase() + 0x4050E5C))(this);
	}

};

}

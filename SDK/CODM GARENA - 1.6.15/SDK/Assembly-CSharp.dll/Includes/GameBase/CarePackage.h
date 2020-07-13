#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackage"));
	}

	template <typename T = uintptr_t> T& TriggerVolume() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& LerpTransformTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& Mass() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& Drag() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& EnablePhysicsHeight() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Collider() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MeshRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MeshCollider() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SignalEffectGO() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& SelfRequestDelay() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& TeammateRequestDelay() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& EnemyRequestDelay() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& EffectSocketTransform() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& FallingEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& LandEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_FallingEffect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_LandEffect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_HasPlayedFallingEffect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& m_StreakID() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& m_ResetTimes() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& m_SetTrapPlayerID() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_IsLocalPlayerInside() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_CarePackageType() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& m_Velocity() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& m_LastReceiveMovingInfoPosition() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_LastReceiveMovingInfoTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_RigidBody() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& m_LastRayCastTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_HasStopMoving() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_BeginLerpPostion() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppQuaternion> T& m_BeginLerpRotation() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& m_DestPostion() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRotation() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& m_BeginLerpToDestTransform() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_BeginLerpTransformTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& m_HasStopFalling() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& m_CarePackageAnimator() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_TickCountInTrigger() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uint32_t> T& m_LocalOrViewPlayerID() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_RenderEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Falling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndFalling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedCarePackageExplosion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpToDestTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnablePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisablePhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOutlineGlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOutlineGlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignalEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFallingEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayLandEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEffectVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53EEC))(this);
	}
	template <typename T = void> T set_PlayerID(uint32_t value) {
		return ((T (*)(CarePackage*, uint32_t))(Il2CppBase() + 0x3C53EF4))(this, value);
	}
	template <typename T = uint32_t> T get_StreakID() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53EFC))(this);
	}
	template <typename T = void> T set_StreakID(uint32_t value) {
		return ((T (*)(CarePackage*, uint32_t))(Il2CppBase() + 0x3C53F04))(this, value);
	}
	template <typename T = uint32_t> T get_ResetTimes() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53F0C))(this);
	}
	template <typename T = void> T set_ResetTimes(uint32_t value) {
		return ((T (*)(CarePackage*, uint32_t))(Il2CppBase() + 0x3C53F14))(this, value);
	}
	template <typename T = uint32_t> T get_SetTrapPlayerID() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53F1C))(this);
	}
	template <typename T = void> T set_SetTrapPlayerID(uint32_t value) {
		return ((T (*)(CarePackage*, uint32_t))(Il2CppBase() + 0x3C53F24))(this, value);
	}
	template <typename T = bool> T get_IsLocalPlayerInside() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53F2C))(this);
	}
	template <typename T = void> T set_IsLocalPlayerInside(bool value) {
		return ((T (*)(CarePackage*, bool))(Il2CppBase() + 0x3C53F34))(this, value);
	}
	template <typename T = uintptr_t> T get_CarePackageType() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C53F3C))(this);
	}
	template <typename T = void> T set_CarePackageType(uintptr_t value) {
		return ((T (*)(CarePackage*, uintptr_t))(Il2CppBase() + 0x3C53F44))(this, value);
	}
	template <typename T = void> T Init(uint32_t playerID, uint32_t actorID, uint32_t streakID, uint32_t resetTimes, uintptr_t type, uintptr_t camp) {
		return ((T (*)(CarePackage*, uint32_t, uint32_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C53F4C))(this, playerID, actorID, streakID, resetTimes, type, camp);
	}
	template <typename T = void> T PlayInitSound() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C54228))(this);
	}
	template <typename T = void> T Falling(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion, Il2CppVector3 newVelocity) {
		return ((T (*)(CarePackage*, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x3C54670))(this, newPosition, newQuaternion, newVelocity);
	}
	template <typename T = void> T RotateOnGround(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion) {
		return ((T (*)(CarePackage*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3C54B04))(this, newPosition, newQuaternion);
	}
	template <typename T = void> T StopMoving(Il2CppVector3 newPosition, Il2CppQuaternion newQuaternion) {
		return ((T (*)(CarePackage*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x3C55680))(this, newPosition, newQuaternion);
	}
	template <typename T = void> T OnEndFalling() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C54E88))(this);
	}
	template <typename T = void> T UpdateCarePackage(uint32_t streakID, uint32_t resetTimes, uint32_t setTrapPlayerID) {
		return ((T (*)(CarePackage*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3C5618C))(this, streakID, resetTimes, setTrapPlayerID);
	}
	template <typename T = void> T SimulatedCarePackageExplosion() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C5625C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C56498))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C56DA0))(this);
	}
	template <typename T = void> T LerpToDestTransform() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C56A0C))(this);
	}
	template <typename T = void> T EnablePhysics() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C56F4C))(this);
	}
	template <typename T = void> T DisablePhysics() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C55A04))(this);
	}
	template <typename T = void> T ShowOutlineGlow() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C571A8))(this);
	}
	template <typename T = void> T HideOutlineGlow() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C57574))(this);
	}
	template <typename T = void> T ShowMesh(bool value) {
		return ((T (*)(CarePackage*, bool))(Il2CppBase() + 0x3C57684))(this, value);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(CarePackage*, uintptr_t))(Il2CppBase() + 0x3C57814))(this, other);
	}
	template <typename T = void> T UpdateSignalEffectState(bool bShow) {
		return ((T (*)(CarePackage*, bool))(Il2CppBase() + 0x3C55404))(this, bShow);
	}
	template <typename T = void> T PreLoadEffects() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C540C0))(this);
	}
	template <typename T = void> T PlayFallingEffect() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C547D0))(this);
	}
	template <typename T = void> T PlayLandEffect() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C55B44))(this);
	}
	template <typename T = bool> T IsEffectVisible() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C57BCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(CarePackage*))(Il2CppBase() + 0x3C57D4C))(this);
	}

};

}

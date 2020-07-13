#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnReliableSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnReliableSoundData"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& FirePos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalOrViewTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InSlideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnMoveSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnFireSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSniperWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_ReliablePawn() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8E34))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t inPawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16305D8))(0, inPawn);
	}
	template <typename T = void> T Init(uintptr_t inPawn) {
		return ((T (*)(PawnReliableSoundData*, uintptr_t))(Il2CppBase() + 0x16C8E3C))(this, inPawn);
	}
	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8EE4))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8F08))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8F3C))(this);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8FB8))(this);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C8FEC))(this);
	}
	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9020))(this);
	}
	template <typename T = uintptr_t> T get_CurrentMesh() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9054))(this);
	}
	template <typename T = bool> T get_IsSpectated() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9078))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C90A0))(this);
	}
	template <typename T = uintptr_t> T get_PhysicsState() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C90D4))(this);
	}
	template <typename T = Il2CppVector3> T get_Velocity() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C90F8))(this);
	}
	template <typename T = Il2CppVector3> T get_AccelerationReal() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9128))(this);
	}
	template <typename T = Il2CppVector3> T get_ActualWalkingVelocity() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9158))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9180))(this);
	}
	template <typename T = float> T get_CurrentInWaterDepth() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C91B4))(this);
	}
	template <typename T = bool> T get_IsSwimming() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C91E8))(this);
	}
	template <typename T = bool> T get_IsProneing() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C921C))(this);
	}
	template <typename T = bool> T get_IsCrouching() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9240))(this);
	}
	template <typename T = uintptr_t> T get_CachedCharController() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9264))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t target) {
		return ((T (*)(PawnReliableSoundData*, uintptr_t))(Il2CppBase() + 0x16C928C))(this, target);
	}
	template <typename T = bool> T IsLocalOrViewTargetPlayer() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C935C))(this);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C94D8))(this);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9590))(this);
	}
	template <typename T = bool> T InSlideVolume() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9654))(this);
	}
	template <typename T = bool> T IsDead() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C970C))(this);
	}
	template <typename T = void> T BRPawnMoveSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position) {
		return ((T (*)(PawnReliableSoundData*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x16C97D0))(this, soundEvent, position);
	}
	template <typename T = void> T BRPawnFireSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position, bool isBeginFire) {
		return ((T (*)(PawnReliableSoundData*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x16C9950))(this, soundEvent, position, isBeginFire);
	}
	template <typename T = uintptr_t> T GetPawn() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9AFC))(this);
	}
	template <typename T = bool> T IsUnderWater() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9B9C))(this);
	}
	template <typename T = bool> T IsSniperWeaponAttachment() {
		return ((T (*)(PawnReliableSoundData*))(Il2CppBase() + 0x16C9C60))(this);
	}
	template <typename T = void> T SetFirePosition(Il2CppVector3 pos) {
		return ((T (*)(PawnReliableSoundData*, Il2CppVector3))(Il2CppBase() + 0x16C9D9C))(this, pos);
	}

};

}

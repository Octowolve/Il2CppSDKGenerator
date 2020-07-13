#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnVirtualSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnVirtualSoundData"));
	}

	template <typename T = uintptr_t> T& m_PlayerInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_LastPositionY() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsInWater() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_IsUnderWater() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& m_CurrentWaterSurfaceHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_LastPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_PawnConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& FirePos() {
		return *(T*)((uintptr_t)this + 0x2C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalOrViewTargetPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGrounded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InSlideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnMoveSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BRPawnFireSoundNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSniperWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t inPlayerInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D02D0))(0, inPlayerInfo);
	}
	template <typename T = void> T Init(uintptr_t inPlayerInfo) {
		return ((T (*)(PawnVirtualSoundData*, uintptr_t))(Il2CppBase() + 0x16D0398))(this, inPlayerInfo);
	}
	template <typename T = void> T CheckInWater() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D04B4))(this);
	}
	template <typename T = void> T SetWeaponID(int32_t weaponID) {
		return ((T (*)(PawnVirtualSoundData*, int32_t))(Il2CppBase() + 0x16D0800))(this, weaponID);
	}
	template <typename T = void> T SetFirePosition(Il2CppVector3 firePos) {
		return ((T (*)(PawnVirtualSoundData*, Il2CppVector3))(Il2CppBase() + 0x16D08A8))(this, firePos);
	}
	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0978))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0980))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D07EC))(this);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D09AC))(this);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D09E0))(this);
	}
	template <typename T = uintptr_t> T get_CurrentMesh() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D09E8))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D09F0))(this);
	}
	template <typename T = uintptr_t> T get_PhysicsState() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0A24))(this);
	}
	template <typename T = Il2CppVector3> T get_Velocity() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0A60))(this);
	}
	template <typename T = Il2CppVector3> T get_AccelerationReal() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B04))(this);
	}
	template <typename T = Il2CppVector3> T get_ActualWalkingVelocity() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B1C))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B34))(this);
	}
	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B4C))(this);
	}
	template <typename T = bool> T get_IsSpectated() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B54))(this);
	}
	template <typename T = float> T get_CurrentInWaterDepth() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0B5C))(this);
	}
	template <typename T = bool> T get_IsSwimming() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0BC8))(this);
	}
	template <typename T = bool> T get_IsProneing() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0BD0))(this);
	}
	template <typename T = bool> T get_IsCrouching() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0BD8))(this);
	}
	template <typename T = uintptr_t> T get_CachedCharController() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0BE0))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t target) {
		return ((T (*)(PawnVirtualSoundData*, uintptr_t))(Il2CppBase() + 0x16D0BE8))(this, target);
	}
	template <typename T = bool> T IsLocalOrViewTargetPlayer() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0DA0))(this);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0E78))(this);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0F18))(this);
	}
	template <typename T = bool> T InSlideVolume() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D0FB8))(this);
	}
	template <typename T = bool> T IsDead() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D1058))(this);
	}
	template <typename T = void> T BRPawnMoveSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position) {
		return ((T (*)(PawnVirtualSoundData*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x16D10F8))(this, soundEvent, position);
	}
	template <typename T = void> T BRPawnFireSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position, bool isBeginFire) {
		return ((T (*)(PawnVirtualSoundData*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x16D1278))(this, soundEvent, position, isBeginFire);
	}
	template <typename T = uintptr_t> T GetPawn() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D1424))(this);
	}
	template <typename T = bool> T IsUnderWater() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D14C4))(this);
	}
	template <typename T = bool> T IsSniperWeaponAttachment() {
		return ((T (*)(PawnVirtualSoundData*))(Il2CppBase() + 0x16D1574))(this);
	}

};

}

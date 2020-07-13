#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IPawnSoundData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IPawnSoundData"));
	}


	template <typename T = uintptr_t> T get_PlayerInfo() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsFirstPersonView() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_CurrentMesh() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsSpectated() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PhysicsState() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_Velocity() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_AccelerationReal() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T get_ActualWalkingVelocity() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_CurrentInWaterDepth() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsSwimming() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsProneing() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsCrouching() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_CachedCharController() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t target) {
		return ((T (*)(IPawnSoundData*, uintptr_t))(Il2CppBase() + 0x0))(this, target);
	}
	template <typename T = bool> T IsLocalOrViewTargetPlayer() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsGrounded() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetMaxSpeed() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T InSlideVolume() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsDead() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BRPawnMoveSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position) {
		return ((T (*)(IPawnSoundData*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x0))(this, soundEvent, position);
	}
	template <typename T = void> T BRPawnFireSoundNotify(Il2CppString* soundEvent, Il2CppVector3 position, bool isBeginFire) {
		return ((T (*)(IPawnSoundData*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x0))(this, soundEvent, position, isBeginFire);
	}
	template <typename T = uintptr_t> T GetPawn() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsUnderWater() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsSniperWeaponAttachment() {
		return ((T (*)(IPawnSoundData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetFirePosition(Il2CppVector3 firePos) {
		return ((T (*)(IPawnSoundData*, Il2CppVector3))(Il2CppBase() + 0x0))(this, firePos);
	}

};

}

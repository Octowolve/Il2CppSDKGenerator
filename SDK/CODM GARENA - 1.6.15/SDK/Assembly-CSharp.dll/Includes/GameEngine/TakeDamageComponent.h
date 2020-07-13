#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TakeDamageComponent"));
	}

	template <typename T = float> T& m_OngoingDamageTotalDeltaTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_OngoingDamageRemainingTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_OngoingDamageInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_OngoingDamageEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_TempestEffect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_3PHitEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SetOngoingDamage(float remainingTime, uintptr_t dps, int32_t assetID) {
		return ((T (*)(TakeDamageComponent*, float, uintptr_t, int32_t))(Il2CppBase() + 0x342D778))(this, remainingTime, dps, assetID);
	}
	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342D784))(this, pawn, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342D9FC))(this, pawn, damageInfo);
	}
	template <typename T = void> T AdjustDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342E130))(this, pawn, damageInfo);
	}
	template <typename T = void> T PlayTakeDamageSound(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342E134))(this, pawn, damageInfo);
	}
	template <typename T = void> T PlayTakeDamageEffect(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342E138))(this, pawn, damageInfo);
	}
	template <typename T = void> T EndTakingDamageAnim() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342F310))(this);
	}
	template <typename T = void> T EndTakingDamageAnim_1P() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342F4AC))(this);
	}
	template <typename T = void> T End3PHitEffect() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342F674))(this);
	}
	template <typename T = void> T SimulateSpecialDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342F7C8))(this, pawn, damageInfo);
	}
	template <typename T = uintptr_t> T CalHitMotionDirection(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(TakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x342F100))(this, pawn, damageInfo);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342EEC0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342F824))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(TakeDamageComponent*))(Il2CppBase() + 0x342F844))(this);
	}

};

}

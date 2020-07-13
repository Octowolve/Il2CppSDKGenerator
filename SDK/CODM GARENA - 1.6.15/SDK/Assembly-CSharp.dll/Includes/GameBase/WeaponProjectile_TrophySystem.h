#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponProjectileTrophySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponProjectile_TrophySystem"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& CreateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DestoryCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_HasBeenDestroyedByEnemy() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_TrophySystemAnimator() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Explode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEnemyActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayDeployEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickUpByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSiumlateStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_AudioPlayer() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A69FB0))(this);
	}
	template <typename T = bool> T get_HasBeenDestroyedByEnemy() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A69FB8))(this);
	}
	template <typename T = float> T get_PickingTime() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A69FC0))(this);
	}
	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6A078))(this);
	}
	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A6A148))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitFlightEffect() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6A568))(this);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileTrophySystem*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3A6A650))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3A6A7A0))(0, actorID);
	}
	template <typename T = void> T DestroyEnemyActor(int32_t actorID) {
		return ((T (*)(WeaponProjectileTrophySystem*, int32_t))(Il2CppBase() + 0x3A6A98C))(this, actorID);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6AF94))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6B200))(this);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6B2EC))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6B3C0))(this);
	}
	template <typename T = void> T PlayDeployEffect() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6B570))(this);
	}
	template <typename T = void> T OnPickUpByPawn(uint32_t pawnPlayerID, Il2CppVector3 resetLocation) {
		return ((T (*)(WeaponProjectileTrophySystem*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3A6B8A8))(this, pawnPlayerID, resetLocation);
	}
	template <typename T = void> T ProcessHitInfo(uintptr_t info) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t))(Il2CppBase() + 0x3A6BAE8))(this, info);
	}
	template <typename T = void> T OnSiumlateStick(uintptr_t msg) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t))(Il2CppBase() + 0x3A6BC9C))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetActor() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BEC8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x3A6BED0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitFlightEffect() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BF0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Explode(Il2CppVector3 P0, bool P1, uintptr_t P2) {
		return ((T (*)(WeaponProjectileTrophySystem*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x3A6BF14))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BF40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BF48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BF50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroySelf() {
		return ((T (*)(WeaponProjectileTrophySystem*))(Il2CppBase() + 0x3A6BF54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPickUpByPawn(uint32_t P0, Il2CppVector3 P1) {
		return ((T (*)(WeaponProjectileTrophySystem*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x3A6BF5C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessHitInfo(uintptr_t P0) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t))(Il2CppBase() + 0x3A6BF80))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSiumlateStick(uintptr_t P0) {
		return ((T (*)(WeaponProjectileTrophySystem*, uintptr_t))(Il2CppBase() + 0x3A6BF84))(this, P0);
	}

};

}

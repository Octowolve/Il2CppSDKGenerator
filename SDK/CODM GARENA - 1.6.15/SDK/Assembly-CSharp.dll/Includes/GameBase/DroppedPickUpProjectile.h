#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DroppedPickUpProjectile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DroppedPickUpProjectile"));
	}

	template <typename T = bool> T& m_Landed() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& m_CurrentVelocity() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_GravityScale() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_TotalDeltaTime() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_Simulator() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtraShowPickupMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedRotateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDroppedPickUpC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndSpawnFlashWarningEffectForC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Initialize(uintptr_t inParameterData, bool needPickupConfirm) {
		return ((T (*)(DroppedPickUpProjectile*, uintptr_t, bool))(Il2CppBase() + 0x40F1744))(this, inParameterData, needPickupConfirm);
	}
	template <typename T = void> T ExtraShowPickupMesh() {
		return ((T (*)(DroppedPickUpProjectile*))(Il2CppBase() + 0x40F1FF4))(this);
	}
	template <typename T = void> T TickDroppedPickUp(float deltaTime) {
		return ((T (*)(DroppedPickUpProjectile*, float))(Il2CppBase() + 0x40F2414))(this, deltaTime);
	}
	template <typename T = bool> T IsNeedRotateWeapon() {
		return ((T (*)(DroppedPickUpProjectile*))(Il2CppBase() + 0x40F27A0))(this);
	}
	template <typename T = void> T TickLand(float inDeltaTime) {
		return ((T (*)(DroppedPickUpProjectile*, float))(Il2CppBase() + 0x40F24D0))(this, inDeltaTime);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(DroppedPickUpProjectile*, uintptr_t))(Il2CppBase() + 0x40F3264))(this, other);
	}
	template <typename T = bool> T IsDroppedPickUpC4Bomb() {
		return ((T (*)(DroppedPickUpProjectile*))(Il2CppBase() + 0x40F2900))(this);
	}
	template <typename T = void> T CheckAndSpawnFlashWarningEffectForC4Bomb() {
		return ((T (*)(DroppedPickUpProjectile*))(Il2CppBase() + 0x40F21CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize(uintptr_t P0, bool P1) {
		return ((T (*)(DroppedPickUpProjectile*, uintptr_t, bool))(Il2CppBase() + 0x40F3324))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickDroppedPickUp(float P0) {
		return ((T (*)(DroppedPickUpProjectile*, float))(Il2CppBase() + 0x40F3328))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(DroppedPickUpProjectile*, uintptr_t))(Il2CppBase() + 0x40F332C))(this, P0);
	}

};

}

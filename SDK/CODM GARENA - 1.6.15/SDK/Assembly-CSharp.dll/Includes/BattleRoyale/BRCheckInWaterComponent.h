#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCheckInWaterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCheckInWaterComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_SwimmingComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_CurrentWaterSurfaceHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_LastHitNormal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& UnCrouchWaterHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& UnProneWaterHeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& LineCheckHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_InSwim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_SimualteCheckInWater() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int32_t> T& m_CheckRiverFrameCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_CheckRiverFrameLimit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_InWater() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_CurrentRiverHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_LastHitRiverPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_LastCheckFrameCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsNormalVertical() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_LastSynFrame() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_SynMinFrameCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSynWaterHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWaterSurfaceHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkyDivingLandOnWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimualteStartSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSimulateEndSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_SwimmingComponent() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FA3D4))(this);
	}
	template <typename T = float> T get_CurrentWaterSurfaceHeight() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FA47C))(this);
	}
	template <typename T = bool> T get_InWater() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FA484))(this);
	}
	template <typename T = Il2CppVector3> T get_LastHitNormal() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FA48C))(this);
	}
	template <typename T = bool> T get_InSwim() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FA4A0))(this);
	}
	template <typename T = void> T set_InSwim(bool value) {
		return ((T (*)(BRCheckInWaterComponent*, bool))(Il2CppBase() + 0x24FA4A8))(this, value);
	}
	template <typename T = void> T CheckInWater(bool force) {
		return ((T (*)(BRCheckInWaterComponent*, bool))(Il2CppBase() + 0x24FA4B0))(this, force);
	}
	template <typename T = void> T CheckSynWaterHeight(bool force) {
		return ((T (*)(BRCheckInWaterComponent*, bool))(Il2CppBase() + 0x24FA860))(this, force);
	}
	template <typename T = float> T CalcWaterSurfaceHeight(Il2CppVector3 currPos) {
		return ((T (*)(BRCheckInWaterComponent*, Il2CppVector3))(Il2CppBase() + 0x24FA9D4))(this, currPos);
	}
	template <typename T = Il2CppVector3> T GetCurrentNormal() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FACE0))(this);
	}
	template <typename T = bool> T CheckUnderWater() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FAE18))(this);
	}
	template <typename T = bool> T CheckSkyDivingLandOnWater(float preLandHeight) {
		return ((T (*)(BRCheckInWaterComponent*, float))(Il2CppBase() + 0x24FB008))(this, preLandHeight);
	}
	template <typename T = void> T OnSimualteStartSwim() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FB25C))(this);
	}
	template <typename T = void> T OnSimulateEndSwim() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FB33C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRCheckInWaterComponent*, uintptr_t))(Il2CppBase() + 0x24FB410))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRCheckInWaterComponent*, float))(Il2CppBase() + 0x24FB570))(this, deltaTime);
	}
	template <typename T = bool> T get_CanCrouch() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FB6AC))(this);
	}
	template <typename T = bool> T get_CanProne() {
		return ((T (*)(BRCheckInWaterComponent*))(Il2CppBase() + 0x24FB720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRCheckInWaterComponent*, uintptr_t))(Il2CppBase() + 0x24FB81C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRCheckInWaterComponent*, float))(Il2CppBase() + 0x24FB824))(this, P0);
	}

};

}

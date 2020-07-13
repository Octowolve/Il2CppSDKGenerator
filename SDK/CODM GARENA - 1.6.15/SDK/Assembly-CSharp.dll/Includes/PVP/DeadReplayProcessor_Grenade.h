#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Grenade"));
	}

	template <typename T = uintptr_t> T& m_GrenadeInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillFrameTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHideProjectile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAreaEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddProjMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSyncBufferMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckThrowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x3459380))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorGrenade*, uint32_t))(Il2CppBase() + 0x3459388))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x345943C))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x34590AC))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorGrenade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3459548))(this, camera, position, rotation);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x3458F4C))(this);
	}
	template <typename T = bool> T CheckHideProjectile() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x3459BDC))(this);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorGrenade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3459D54))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x345A224))(this);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorGrenade*, float))(Il2CppBase() + 0x3458BA4))(this, replayTime);
	}
	template <typename T = void> T DoStartFire() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x345A3D0))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorGrenade*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x345A4EC))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckAreaEvent(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorGrenade*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345A818))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckAddProjMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorGrenade*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345A618))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckSyncBufferMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorGrenade*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345AAE0))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckThrowTime(float shootTime, uintptr_t syncMsg) {
		return ((T (*)(DeadReplayProcessorGrenade*, float, uintptr_t))(Il2CppBase() + 0x345AF2C))(this, shootTime, syncMsg);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x345B06C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorGrenade*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345B074))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorGrenade*))(Il2CppBase() + 0x345B094))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorGrenade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x345B09C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorGrenade*, float))(Il2CppBase() + 0x345B0A4))(this, P0);
	}

};

}

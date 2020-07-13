#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorAirstrike
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Airstrike"));
	}

	template <typename T = uintptr_t> T& m_MissileInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_LockCameraPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_LastCameraPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_LastCameraRotation() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOnReplayWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMissileSyncMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x345035C))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uint32_t))(Il2CppBase() + 0x3450364))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x3450418))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x34504B0))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345067C))(this, camera, position, rotation);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x3450B68))(this);
	}
	template <typename T = void> T ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x3450D08))(this);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3450FB4))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x3451094))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3451304))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckMissileSyncMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorAirstrike*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x34513F0))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x345172C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3451734))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x3451754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorAirstrike*))(Il2CppBase() + 0x345175C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorAirstrike*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3451764))(this, P0, P1);
	}

};

}

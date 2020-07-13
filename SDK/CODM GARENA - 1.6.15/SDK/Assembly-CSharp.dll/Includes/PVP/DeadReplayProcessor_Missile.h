#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorMissile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Missile"));
	}

	template <typename T = uintptr_t> T& m_MissileInfo() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOnReplayWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMissileSyncMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x345F790))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorMissile*, uint32_t))(Il2CppBase() + 0x345F798))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x345F84C))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x345F8E4))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorMissile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345FA90))(this, camera, position, rotation);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x345FDE0))(this);
	}
	template <typename T = void> T ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x345FF3C))(this);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x34601E8))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorMissile*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x34605C4))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckMissileSyncMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorMissile*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x34606B0))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x34609E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorMissile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34609E8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x3460A08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessOnReplayWeaponChanged() {
		return ((T (*)(DeadReplayProcessorMissile*))(Il2CppBase() + 0x3460A10))(this);
	}

};

}

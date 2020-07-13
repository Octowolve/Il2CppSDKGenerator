#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorHunterKiller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_HunterKiller"));
	}

	template <typename T = uintptr_t> T& m_HunterKillerInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_LastPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorHunterKiller*))(Il2CppBase() + 0x345E3FC))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, uint32_t))(Il2CppBase() + 0x345E404))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorHunterKiller*))(Il2CppBase() + 0x345E418))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorHunterKiller*))(Il2CppBase() + 0x345E52C))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345E758))(this, camera, position, rotation);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(DeadReplayProcessorHunterKiller*))(Il2CppBase() + 0x345EBF8))(this);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, uintptr_t, uintptr_t))(Il2CppBase() + 0x345ED14))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorHunterKiller*))(Il2CppBase() + 0x345F004))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x345F1D4))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckAddProjMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345F4E0))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckFlyStatusMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorHunterKiller*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345F220))(this, data, index, shootTime);
	}

};

}

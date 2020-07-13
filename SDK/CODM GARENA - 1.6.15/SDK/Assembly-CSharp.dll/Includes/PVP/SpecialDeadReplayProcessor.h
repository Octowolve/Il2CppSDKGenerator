#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class SpecialDeadReplayProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "SpecialDeadReplayProcessor"));
	}

	template <typename T = uintptr_t> T& m_ReplayDataInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReplayDataInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessOnReplayWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKillFrameTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetReplayDataInfo(uintptr_t replayDataInfo) {
		return ((T (*)(SpecialDeadReplayProcessor*, uintptr_t))(Il2CppBase() + 0x2B2014C))(this, replayDataInfo);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(SpecialDeadReplayProcessor*, uint32_t))(Il2CppBase() + 0x0))(this, actorID);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x2B201F4))(this);
	}
	template <typename T = bool> T NeedCalculateCamera3P() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x2B20294))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(SpecialDeadReplayProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B20334))(this, camera, position, rotation);
	}
	template <typename T = void> T CalculateCamera3P(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(SpecialDeadReplayProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B203F0))(this, camera, position, rotation);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(SpecialDeadReplayProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B204AC))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T ProcessOnReplayWeaponChanged() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x2B20560))(this);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(SpecialDeadReplayProcessor*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x0))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(SpecialDeadReplayProcessor*, float))(Il2CppBase() + 0x2B205F8))(this, replayTime);
	}
	template <typename T = void> T OnKillFrameTick() {
		return ((T (*)(SpecialDeadReplayProcessor*))(Il2CppBase() + 0x2B20698))(this);
	}

};

}

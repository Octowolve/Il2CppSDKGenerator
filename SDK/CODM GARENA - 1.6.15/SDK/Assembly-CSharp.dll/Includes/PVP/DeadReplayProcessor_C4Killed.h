#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorC4Killed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_C4Killed"));
	}

	template <typename T = float> T& KillReplayTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bHasDefused() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& bExploded() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = float> T& DefusingTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_C4KillerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReplayActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDefusingBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorC4Killed*))(Il2CppBase() + 0x3451880))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uint32_t))(Il2CppBase() + 0x3451888))(this, actorID);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorC4Killed*))(Il2CppBase() + 0x3451930))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34519D0))(this, camera, position, rotation);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3451D7C))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorC4Killed*))(Il2CppBase() + 0x34520E0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorC4Killed*))(Il2CppBase() + 0x34521E4))(this);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorC4Killed*, float))(Il2CppBase() + 0x3452318))(this, replayTime);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x34524CC))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckDefusingBomb(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorC4Killed*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x34525C4))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorC4Killed*))(Il2CppBase() + 0x3452744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345274C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorC4Killed*, uintptr_t, uintptr_t))(Il2CppBase() + 0x345276C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorC4Killed*, float))(Il2CppBase() + 0x3452774))(this, P0);
	}

};

}

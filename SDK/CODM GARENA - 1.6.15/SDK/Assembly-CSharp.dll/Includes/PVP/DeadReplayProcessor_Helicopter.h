#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_Helicopter"));
	}

	template <typename T = uintptr_t> T& m_HelicopterInfo() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_BeginReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHelicopterMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorHelicopter*))(Il2CppBase() + 0x345B1B4))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uint32_t))(Il2CppBase() + 0x345B1BC))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorHelicopter*))(Il2CppBase() + 0x345B270))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorHelicopter*))(Il2CppBase() + 0x345B37C))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345B41C))(this, camera, position, rotation);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x345B8D0))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorHelicopter*))(Il2CppBase() + 0x345BDD0))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x345BFF4))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckHelicopterMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorHelicopter*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345C0E0))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorHelicopter*))(Il2CppBase() + 0x345C3FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x345C404))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorHelicopter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x345C424))(this, P0, P1);
	}

};

}

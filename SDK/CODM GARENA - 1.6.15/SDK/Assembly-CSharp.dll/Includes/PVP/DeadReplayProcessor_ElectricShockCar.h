#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class DeadReplayProcessorElectricShockCar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "DeadReplayProcessor_ElectricShockCar"));
	}

	template <typename T = uintptr_t> T& m_ElectricShockCarInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Manager() {
		return *(T*)((uintptr_t)this + 0x2C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseReplayMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckElectricShockCarAddMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckElectricShockCarMoveMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_KillerWeapon() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3456538))(this);
	}
	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3456540))(this);
	}
	template <typename T = bool> T IsReplayActor(uint32_t actorID) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uint32_t))(Il2CppBase() + 0x345664C))(this, actorID);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3456700))(this);
	}
	template <typename T = bool> T NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3456824))(this);
	}
	template <typename T = void> T CalculateCamera(uintptr_t camera, uintptr_t position, uintptr_t rotation) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34568CC))(this, camera, position, rotation);
	}
	template <typename T = void> T BeginReplay(uintptr_t viewTarget, uintptr_t aimTarget) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3456CC4))(this, viewTarget, aimTarget);
	}
	template <typename T = void> T TickReplay(float replayTime) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, float))(Il2CppBase() + 0x345712C))(this, replayTime);
	}
	template <typename T = void> T InitCar() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3456E8C))(this);
	}
	template <typename T = void> T EndReplay() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x34573DC))(this);
	}
	template <typename T = void> T ParseReplayMsg(uintptr_t protocolType, Il2CppArray<uintptr_t>* data, int32_t index, float replayTime, int32_t frameIndex) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, float, int32_t))(Il2CppBase() + 0x3457500))(this, protocolType, data, index, replayTime, frameIndex);
	}
	template <typename T = void> T CheckElectricShockCarAddMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x345760C))(this, data, index, shootTime);
	}
	template <typename T = void> T CheckElectricShockCarMoveMsg(Il2CppArray<uintptr_t>* data, int32_t index, float shootTime) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x3457814))(this, data, index, shootTime);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedCalculateCamera() {
		return ((T (*)(DeadReplayProcessorElectricShockCar*))(Il2CppBase() + 0x3457AE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CalculateCamera(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3457AE8))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_BeginReplay(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3457B08))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_TickReplay(float P0) {
		return ((T (*)(DeadReplayProcessorElectricShockCar*, float))(Il2CppBase() + 0x3457B10))(this, P0);
	}

};

}

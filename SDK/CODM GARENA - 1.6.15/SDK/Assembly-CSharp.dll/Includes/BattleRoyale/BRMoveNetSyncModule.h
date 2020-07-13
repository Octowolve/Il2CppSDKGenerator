#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMoveNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMoveNetSyncModule"));
	}

	template <typename T = uint32_t> T& m_LastLogicFrame() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnForceSetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLogicFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveSimulatedMoveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DebugServerPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnForceSetPosition(uintptr_t moveData, uintptr_t MoveState) {
		return ((T (*)(BRMoveNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AB1E68))(this, moveData, MoveState);
	}
	template <typename T = void> T ResetLogicFrame() {
		return ((T (*)(BRMoveNetSyncModule*))(Il2CppBase() + 0x1AB20C4))(this);
	}
	template <typename T = void> T SaveSimulatedMoveData(uint32_t LogicalFrame, Il2CppVector3 SimulateLocation, Il2CppVector3 SimulateDirection, Il2CppVector3 SimulateVelocity, uintptr_t MoveState, unsigned char extraByte, unsigned char checkSeq) {
		return ((T (*)(BRMoveNetSyncModule*, uint32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, unsigned char, unsigned char))(Il2CppBase() + 0x1AB2168))(this, LogicalFrame, SimulateLocation, SimulateDirection, SimulateVelocity, MoveState, extraByte, checkSeq);
	}
	template <typename T = void> T DebugServerPawnInfo(uintptr_t moveData) {
		return ((T (*)(BRMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x1AB25E8))(this, moveData);
	}
	template <typename T = void> T xLuaBaseProxy_OnForceSetPosition(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRMoveNetSyncModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AB2688))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SaveSimulatedMoveData(uint32_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3, uintptr_t P4, unsigned char P5, unsigned char P6) {
		return ((T (*)(BRMoveNetSyncModule*, uint32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, unsigned char, unsigned char))(Il2CppBase() + 0x1AB2690))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_DebugServerPawnInfo(uintptr_t P0) {
		return ((T (*)(BRMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x1AB26F4))(this, P0);
	}

};

}

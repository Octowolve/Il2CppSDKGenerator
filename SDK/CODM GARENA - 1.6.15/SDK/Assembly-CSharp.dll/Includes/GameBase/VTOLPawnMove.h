#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLPawnMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLPawnMove"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_MoveDir() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_DstPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_SrcPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_CurVelocity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_CurAcceleSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_IsStartMove() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ExitCallbackFunc() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsExiting() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_MoveState() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_CameraAngleChangeMode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppQuaternion> T& StartQ() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppQuaternion> T& EndQ() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& TurnStartTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_SimulateTurn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& TurnTotalTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& ShouldTurnToOriginPos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppQuaternion> T& OrignQ() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_StopMoveSlerpStartPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_StopMoveSlerpEndPos() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_StopMoveSlerpStartTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_StopMoveSlerp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerSyncMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcNeedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePlayTurnAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulateTurn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStopMoveSlerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickSimulateMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = float> T get_CurAcceleSpeed() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF5670))(this);
	}
	template <typename T = bool> T get_IsStartMove() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF4950))(this);
	}
	template <typename T = void> T set_IsStartMove(bool value) {
		return ((T (*)(VTOLPawnMove*, bool))(Il2CppBase() + 0x1BF5678))(this, value);
	}
	template <typename T = bool> T IsMoving() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BE7D1C))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(VTOLPawnMove*, uintptr_t))(Il2CppBase() + 0x1BF15FC))(this, pawn);
	}
	template <typename T = void> T Exit(Il2CppVector3 DstPos, uintptr_t func) {
		return ((T (*)(VTOLPawnMove*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1BEE3A4))(this, DstPos, func);
	}
	template <typename T = void> T ServerSyncMove(uintptr_t msg) {
		return ((T (*)(VTOLPawnMove*, uintptr_t))(Il2CppBase() + 0x1BF3E38))(this, msg);
	}
	template <typename T = float> T CalcNeedTime(Il2CppVector3 srcPos, Il2CppVector3 dstPos) {
		return ((T (*)(VTOLPawnMove*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1BF6428))(this, srcPos, dstPos);
	}
	template <typename T = bool> T get_SimulateTurn() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF4948))(this);
	}
	template <typename T = void> T set_SimulateTurn(bool value) {
		return ((T (*)(VTOLPawnMove*, bool))(Il2CppBase() + 0x1BF6880))(this, value);
	}
	template <typename T = void> T SimulatePlayTurnAnim(Il2CppVector3 DstDir) {
		return ((T (*)(VTOLPawnMove*, Il2CppVector3))(Il2CppBase() + 0x1BF5680))(this, DstDir);
	}
	template <typename T = void> T TickSimulateTurn(float deltaTime) {
		return ((T (*)(VTOLPawnMove*, float))(Il2CppBase() + 0x1BF6888))(this, deltaTime);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF5AE0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF6C2C))(this);
	}
	template <typename T = void> T TickStopMoveSlerp() {
		return ((T (*)(VTOLPawnMove*))(Il2CppBase() + 0x1BF7774))(this);
	}
	template <typename T = void> T TickSimulateMove(float deltaTime) {
		return ((T (*)(VTOLPawnMove*, float))(Il2CppBase() + 0x1BF6DA4))(this, deltaTime);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HelicopterPawnMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HelicopterPawnMove"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_transform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsMove() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_MoveDir() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_MoveV() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_MoveSrcPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_MoveDstPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_MoveStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsTurn() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_TurnV() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_TurnDir() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_AimDiffAngle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_CurDiffAngle() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_AimAngleY() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_bReachCrtPoint() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_Left() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& m_Right() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& m_Idle() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = bool> T& m_Move() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& crtState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_EnterPos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& m_LastPos() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTurn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCruise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(HelicopterPawnMove*, uintptr_t))(Il2CppBase() + 0x1EE529C))(this, pawn);
	}
	template <typename T = void> T OnEnter(Il2CppVector3 DstPos) {
		return ((T (*)(HelicopterPawnMove*, Il2CppVector3))(Il2CppBase() + 0x1EE9CBC))(this, DstPos);
	}
	template <typename T = void> T OnExit(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMove*, uintptr_t))(Il2CppBase() + 0x1EEAE14))(this, msg);
	}
	template <typename T = void> T OnTurn(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMove*, uintptr_t))(Il2CppBase() + 0x1EEA550))(this, msg);
	}
	template <typename T = void> T OnCruise(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMove*, uintptr_t))(Il2CppBase() + 0x1EEA9A0))(this, msg);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HelicopterPawnMove*))(Il2CppBase() + 0x1EEBBC0))(this);
	}
	template <typename T = void> T ResetAllTrigger() {
		return ((T (*)(HelicopterPawnMove*))(Il2CppBase() + 0x1EEC6DC))(this);
	}

};

}

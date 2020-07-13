#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ClassicsMoveHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ClassicsMoveHandle"));
	}

	template <typename T = int32_t> static T& ROW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& COL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MOVE_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HALF_MOVE_DELTA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_MovementSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_DirectBtns() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_MoveDirect() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_SizeScales() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHandleImplType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcMovementVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovementAcceleration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSprinting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InMovementArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(Il2CppVector2 pos, Il2CppVector2 size) {
		return ((T (*)(ClassicsMoveHandle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4198344))(this, pos, size);
	}
	template <typename T = uintptr_t> T GetHandleImplType() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x41986F8))(this);
	}
	template <typename T = Il2CppVector2> T CalcMovementVector(uintptr_t MoveInput) {
		return ((T (*)(ClassicsMoveHandle*, uintptr_t))(Il2CppBase() + 0x4198798))(this, MoveInput);
	}
	template <typename T = void> T UpdateMovementAcceleration() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x4198984))(this);
	}
	template <typename T = void> T ProcessSprinting() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x4198A80))(this);
	}
	template <typename T = bool> T InMovementArea(uintptr_t playerInput) {
		return ((T (*)(ClassicsMoveHandle*, uintptr_t))(Il2CppBase() + 0x4198B18))(this, playerInput);
	}
	template <typename T = void> T xLuaBaseProxy_Init(Il2CppVector2 P0, Il2CppVector2 P1) {
		return ((T (*)(ClassicsMoveHandle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4198FA0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetHandleImplType() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x4198FC4))(this);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_CalcMovementVector(uintptr_t P0) {
		return ((T (*)(ClassicsMoveHandle*, uintptr_t))(Il2CppBase() + 0x4198FCC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateMovementAcceleration() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x4198FE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessSprinting() {
		return ((T (*)(ClassicsMoveHandle*))(Il2CppBase() + 0x4198FE8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InMovementArea(uintptr_t P0) {
		return ((T (*)(ClassicsMoveHandle*, uintptr_t))(Il2CppBase() + 0x4198FF0))(this, P0);
	}

};

}

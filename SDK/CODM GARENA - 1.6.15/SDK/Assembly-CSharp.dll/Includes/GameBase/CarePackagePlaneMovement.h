#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CarePackagePlaneMovement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CarePackagePlaneMovement"));
	}

	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_MoveDirection() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_MoveSourcePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_MoveDestinationPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_StartMovingTime() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(CarePackagePlaneMovement*, uintptr_t))(Il2CppBase() + 0x3C60410))(this, pawn);
	}
	template <typename T = void> T OnEnter(Il2CppVector3 DestinationPosition, float moveSpeed) {
		return ((T (*)(CarePackagePlaneMovement*, Il2CppVector3, float))(Il2CppBase() + 0x3C604C0))(this, DestinationPosition, moveSpeed);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CarePackagePlaneMovement*))(Il2CppBase() + 0x3C6092C))(this);
	}
	template <typename T = void> T UpdateMovement(Il2CppVector3 DestinationPosition, float moveSpeed) {
		return ((T (*)(CarePackagePlaneMovement*, Il2CppVector3, float))(Il2CppBase() + 0x3C60A48))(this, DestinationPosition, moveSpeed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CarePackagePlaneMovement*))(Il2CppBase() + 0x3C60C54))(this);
	}

};

}

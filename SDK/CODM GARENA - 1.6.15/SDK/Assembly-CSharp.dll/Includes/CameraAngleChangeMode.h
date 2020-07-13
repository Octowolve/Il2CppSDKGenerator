#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraAngleChangeMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraAngleChangeMode"));
	}

	template <typename T = float> T& m_startAngle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_endAngle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_angleDir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_angleAccel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_shouldDecVelocity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_angleDeltaAdd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_angleVelocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_curCameraAngleState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Pawn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_PawnMove() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraDeltaEulerAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChangeIdle2PreEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterCameraAngleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t pawn, uintptr_t pawnMove) {
		return ((T (*)(CameraAngleChangeMode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BF5F08))(this, pawn, pawnMove);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_Start() {
		return ((T (*)(CameraAngleChangeMode*))(Il2CppBase() + 0x1BF79D8))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_PreEnd() {
		return ((T (*)(CameraAngleChangeMode*))(Il2CppBase() + 0x1BF79E0))(this);
	}
	template <typename T = uintptr_t> T get_CameraAngleStateInfo_End() {
		return ((T (*)(CameraAngleChangeMode*))(Il2CppBase() + 0x1BF79E8))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraDeltaEulerAngles(float angle) {
		return ((T (*)(CameraAngleChangeMode*, float))(Il2CppBase() + 0x1BF79F0))(this, angle);
	}
	template <typename T = bool> T CanChangeIdle2PreEnd() {
		return ((T (*)(CameraAngleChangeMode*))(Il2CppBase() + 0x1BF7ABC))(this);
	}
	template <typename T = void> T OnEnterCameraAngleState(uintptr_t newState) {
		return ((T (*)(CameraAngleChangeMode*, uintptr_t))(Il2CppBase() + 0x1BF7BE8))(this, newState);
	}
	template <typename T = void> T Begin(float initAngleDir) {
		return ((T (*)(CameraAngleChangeMode*, float))(Il2CppBase() + 0x1BF5FCC))(this, initAngleDir);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(CameraAngleChangeMode*, float))(Il2CppBase() + 0x1BF7304))(this, deltaTime);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EnterLadderFromTopMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EnterLadderFromTopMover"));
	}

	template <typename T = uintptr_t> T& CurrentEnterLoadderFromTopMoverStage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& ClimbToTopTargetPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& MoveToLadderTargetPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& DownToLadderPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& StartAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DestAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsClimb() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_TotalTimeCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_TimeCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_ClimbToTopTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_MoveToLadderTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_DownToLadderTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_OwnerComponent() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_CurrentAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsFinished() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsCrossWindow() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& LadderWithHandRail() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = float> T& m_LadderClimbWindowEyeHeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_UnClimbMoveToTotalTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_MoveToLadderPercent() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> static T& UseOldTickClimbRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMoveDownRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickClimbRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_ClimbToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_MoveToLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DownToLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = float> T get_ClimbRotationTime() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CCD04))(this);
	}
	template <typename T = float> T get_TotalTime() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CCD18))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CCD34))(this);
	}
	template <typename T = void> T Init(float totalTime, float startAngle, float destAngle, uintptr_t owner, uintptr_t ownerPawn, bool ladderWithHandRail) {
		return ((T (*)(EnterLadderFromTopMover*, float, float, float, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x31CCE98))(this, totalTime, startAngle, destAngle, owner, ownerPawn, ladderWithHandRail);
	}
	template <typename T = void> T PlayAnimation() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CD2A4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EnterLadderFromTopMover*, float))(Il2CppBase() + 0x31CD828))(this, deltaTime);
	}
	template <typename T = void> T TickEyeHeight() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CE6B4))(this);
	}
	template <typename T = void> T TickMoveDownRotation() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CE52C))(this);
	}
	template <typename T = void> T TickClimbRotation() {
		return ((T (*)(EnterLadderFromTopMover*))(Il2CppBase() + 0x31CE188))(this);
	}
	template <typename T = void> T Tick_ClimbToTop(float deltaTime) {
		return ((T (*)(EnterLadderFromTopMover*, float))(Il2CppBase() + 0x31CDA40))(this, deltaTime);
	}
	template <typename T = void> T Tick_MoveToLadder(float deltaTime) {
		return ((T (*)(EnterLadderFromTopMover*, float))(Il2CppBase() + 0x31CDCA4))(this, deltaTime);
	}
	template <typename T = void> T Tick_DownToLadder(float deltaTime) {
		return ((T (*)(EnterLadderFromTopMover*, float))(Il2CppBase() + 0x31CDF24))(this, deltaTime);
	}

};

}

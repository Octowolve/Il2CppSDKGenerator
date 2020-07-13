#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WaitForMovement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WaitForMovement"));
	}

	template <typename T = bool> T& waitForRotation() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& waitForMoveDistance() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = float> T& targetRotationDegree() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& targetMoveDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppQuaternion> T& currentRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& currentPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& finishTaretRotation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& finishTargetMoveDistance() {
		return *(T*)((uintptr_t)this + 0x4D);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(WaitForMovement*))(Il2CppBase() + 0x4F1F730))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WaitForMovement*))(Il2CppBase() + 0x4F1F858))(this);
	}
	template <typename T = bool> T CheckTargetRotation() {
		return ((T (*)(WaitForMovement*))(Il2CppBase() + 0x4F1F8F0))(this);
	}
	template <typename T = bool> T CheckTargetMoveDistance() {
		return ((T (*)(WaitForMovement*))(Il2CppBase() + 0x4F1FA18))(this);
	}

};

}

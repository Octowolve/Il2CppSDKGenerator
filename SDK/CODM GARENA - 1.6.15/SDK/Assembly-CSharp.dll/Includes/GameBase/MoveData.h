#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MoveData"));
	}

	template <typename T = bool> T& IsValid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& SimulateLocation() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& SimulateVelocity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& SimulateDirection() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PhysicsState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsCrouching() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& LogicalFrameNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RecTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsClimbOver() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsClimbUp() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& IsProneing() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& IsClimbWall() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = unsigned char> T& Extra() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(MoveData*, Il2CppVector3))(Il2CppBase() + 0x19D2CA0))(this, shift);
	}

};

}

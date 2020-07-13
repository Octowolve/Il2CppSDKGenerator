#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BakeMoveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BakeMoveData"));
	}

	template <typename T = Il2CppVector3> T& UnshiftPosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& SimulateVelocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& SimulateDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& LogicalFrameNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PhysicsState() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRRootMotionAnimData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRRootMotionAnimData"));
	}

	template <typename T = Il2CppVector3> T& start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& end() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& highest() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& curveX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& curveY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& curveZ() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& ToClimbTopPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& ToClimbFallPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& animName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& animHash() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& clipName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& ToClimbTopTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& ToClimbFallTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& translationLength() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& animLength() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& highestLength() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& enableRotation() {
		return *(T*)((uintptr_t)this + 0x68);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3RotateTowards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3RotateTowards"));
	}

	template <typename T = uintptr_t> T& currentDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rotateSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& maxMagnitude() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3RotateTowards*))(Il2CppBase() + 0x4F1EC74))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3RotateTowards*))(Il2CppBase() + 0x4F1ED94))(this);
	}

};

}

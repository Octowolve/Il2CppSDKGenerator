#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2RotateTowards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2RotateTowards"));
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
	template <typename T = Il2CppVector3> T& current() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& target() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2RotateTowards*))(Il2CppBase() + 0x4F1CD98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2RotateTowards*))(Il2CppBase() + 0x4F1CEA4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2RotateTowards*))(Il2CppBase() + 0x4F1CFA0))(this);
	}

};

}

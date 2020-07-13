#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplayMoveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplayMoveInfo"));
	}

	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& OriginalTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsKeyMove() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& MoveState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsCrouch() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsProne() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppVector3> T& FromPosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& FromRotation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& CurLerpTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& LerpStart() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& LerpEnd() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}

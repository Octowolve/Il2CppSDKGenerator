#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MoveTowards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MoveTowards"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ignoreVertical() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& finishDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& goTarget() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& targetPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& targetPosWithVertical() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B278))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B2C4))(this);
	}
	template <typename T = void> T DoMoveTowards() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B2C8))(this);
	}
	template <typename T = bool> T UpdateTargetPos() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B4AC))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPos() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B79C))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPosWithVertical() {
		return ((T (*)(MoveTowards*))(Il2CppBase() + 0x4D7B7B0))(this);
	}

};

}

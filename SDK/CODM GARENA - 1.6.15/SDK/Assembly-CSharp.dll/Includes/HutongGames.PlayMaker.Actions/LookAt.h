#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LookAt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LookAt"));
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
	template <typename T = uintptr_t> T& upVector() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& keepVertical() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& debug() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& debugLineColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& goTarget() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& lookAtPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& lookAtPosWithVertical() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D77B74))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D77CD8))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D77EF4))(this);
	}
	template <typename T = void> T DoLookAt() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D77D04))(this);
	}
	template <typename T = bool> T UpdateLookAtPosition() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D77EF8))(this);
	}
	template <typename T = Il2CppVector3> T GetLookAtPosition() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D78200))(this);
	}
	template <typename T = Il2CppVector3> T GetLookAtPositionWithVertical() {
		return ((T (*)(LookAt*))(Il2CppBase() + 0x4D78214))(this);
	}

};

}

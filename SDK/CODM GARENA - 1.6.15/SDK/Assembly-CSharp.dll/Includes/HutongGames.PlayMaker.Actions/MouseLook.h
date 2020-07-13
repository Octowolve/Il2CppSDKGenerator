#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MouseLook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MouseLook"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& axes() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sensitivityX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sensitivityY() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& minimumX() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& maximumX() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& minimumY() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& maximumY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& rotationX() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& rotationY() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D78BAC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D78D10))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D7918C))(this);
	}
	template <typename T = void> T DoMouseLook() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D78F5C))(this);
	}
	template <typename T = float> T GetXRotation() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D792B0))(this);
	}
	template <typename T = float> T GetYRotation() {
		return ((T (*)(MouseLook*))(Il2CppBase() + 0x4D79190))(this);
	}
	template <typename T = float> static T ClampAngle(float angle, uintptr_t min, uintptr_t max) {
		return ((T (*)(void *, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D793D0))(0, angle, min, max);
	}

};

}

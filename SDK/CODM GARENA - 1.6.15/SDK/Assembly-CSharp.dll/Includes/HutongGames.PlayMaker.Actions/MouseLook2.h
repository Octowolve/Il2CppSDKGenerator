#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MouseLook2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MouseLook2"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& axes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& sensitivityX() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sensitivityY() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& minimumX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& maximumX() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& minimumY() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& maximumY() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& rotationX() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& rotationY() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D79518))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D795C8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D799C0))(this);
	}
	template <typename T = void> T DoMouseLook() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D79790))(this);
	}
	template <typename T = float> T GetXRotation() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D79AE4))(this);
	}
	template <typename T = float> T GetYRotation() {
		return ((T (*)(MouseLook2*))(Il2CppBase() + 0x4D799C4))(this);
	}
	template <typename T = float> static T ClampAngle(float angle, uintptr_t min, uintptr_t max) {
		return ((T (*)(void *, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D79C04))(0, angle, min, max);
	}

};

}

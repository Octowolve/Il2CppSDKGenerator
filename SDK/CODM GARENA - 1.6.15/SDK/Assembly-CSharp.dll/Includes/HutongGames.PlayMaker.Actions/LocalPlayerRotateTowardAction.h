#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LocalPlayerRotateTowardAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LocalPlayerRotateTowardAction"));
	}

	template <typename T = uintptr_t> T& RotationTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AngularSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Hide1PCamera() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& QuickRotate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_1PCamera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& m_DestRot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_NeedEnable1PCameraWhenFinished() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LocalPlayerRotateTowardAction*))(Il2CppBase() + 0x4D76F7C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(LocalPlayerRotateTowardAction*))(Il2CppBase() + 0x4D774A4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(LocalPlayerRotateTowardAction*))(Il2CppBase() + 0x4D7764C))(this);
	}

};

}

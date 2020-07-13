#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Demos {

class Dying
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Demos", "Dying"));
	}

	template <typename T = uintptr_t> T& puppetMaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& fadeOutPinWeightSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fadeOutMuscleWeightSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& deadMuscleWeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& defaultPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& defaultRotation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isDead() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A3078))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A307C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A3178))(this);
	}
	template <typename T = uintptr_t> T DelayDead() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A359C))(this);
	}
	template <typename T = uintptr_t> T FadeOutPinWeight() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A3648))(this);
	}
	template <typename T = uintptr_t> T FadeOutMuscleWeight() {
		return ((T (*)(Dying*))(Il2CppBase() + 0x38A36F4))(this);
	}

};

}

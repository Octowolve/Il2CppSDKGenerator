#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTransform"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22720BC))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkTransform*, uintptr_t))(Il2CppBase() + 0x22AD0D8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkTransform*))(Il2CppBase() + 0x22AD104))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkTransform*))(Il2CppBase() + 0x22AD16C))(this);
	}
	template <typename T = uintptr_t> T Position() {
		return ((T (*)(AkTransform*))(Il2CppBase() + 0x22AD2EC))(this);
	}
	template <typename T = uintptr_t> T OrientationFront() {
		return ((T (*)(AkTransform*))(Il2CppBase() + 0x22AD3D0))(this);
	}
	template <typename T = uintptr_t> T OrientationTop() {
		return ((T (*)(AkTransform*))(Il2CppBase() + 0x22AD4B4))(this);
	}
	template <typename T = void> T Set(uintptr_t in_position, uintptr_t in_orientationFront, uintptr_t in_orientationTop) {
		return ((T (*)(AkTransform*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22AD598))(this, in_position, in_orientationFront, in_orientationTop);
	}
	template <typename T = void> T Set_1(float in_positionX, float in_positionY, float in_positionZ, float in_orientFrontX, float in_orientFrontY, float in_orientFrontZ, float in_orientTopX, float in_orientTopY, float in_orientTopZ) {
		return ((T (*)(AkTransform*, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x22AD738))(this, in_positionX, in_positionY, in_positionZ, in_orientFrontX, in_orientFrontY, in_orientFrontZ, in_orientTopX, in_orientTopY, in_orientTopZ);
	}
	template <typename T = void> T SetPosition(uintptr_t in_position) {
		return ((T (*)(AkTransform*, uintptr_t))(Il2CppBase() + 0x22AD838))(this, in_position);
	}
	template <typename T = void> T SetPosition_1(float in_x, float in_y, float in_z) {
		return ((T (*)(AkTransform*, float, float, float))(Il2CppBase() + 0x22AD960))(this, in_x, in_y, in_z);
	}
	template <typename T = void> T SetOrientation(uintptr_t in_orientationFront, uintptr_t in_orientationTop) {
		return ((T (*)(AkTransform*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22ADA30))(this, in_orientationFront, in_orientationTop);
	}
	template <typename T = void> T SetOrientation_1(float in_orientFrontX, float in_orientFrontY, float in_orientFrontZ, float in_orientTopX, float in_orientTopY, float in_orientTopZ) {
		return ((T (*)(AkTransform*, float, float, float, float, float, float))(Il2CppBase() + 0x22ADB98))(this, in_orientFrontX, in_orientFrontY, in_orientFrontZ, in_orientTopX, in_orientTopY, in_orientTopZ);
	}

};

}

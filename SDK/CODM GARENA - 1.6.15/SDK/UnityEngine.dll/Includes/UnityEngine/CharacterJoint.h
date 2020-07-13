#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CharacterJoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CharacterJoint"));
	}

	template <typename T = Il2CppQuaternion> T& targetRotation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& targetAngularVelocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& rotationDrive() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppVector3> T get_swingAxis() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9290))(this);
	}
	template <typename T = void> T set_swingAxis(Il2CppVector3 value) {
		return ((T (*)(CharacterJoint*, Il2CppVector3))(Il2CppBase() + 0x46A9378))(this, value);
	}
	template <typename T = void> T INTERNAL_get_swingAxis(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A92D8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_swingAxis(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9398))(this, value);
	}
	template <typename T = uintptr_t> T get_twistLimitSpring() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9438))(this);
	}
	template <typename T = void> T set_twistLimitSpring(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9514))(this, value);
	}
	template <typename T = void> T INTERNAL_get_twistLimitSpring(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A9474))(this, value);
	}
	template <typename T = void> T INTERNAL_set_twistLimitSpring(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9530))(this, value);
	}
	template <typename T = uintptr_t> T get_swingLimitSpring() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A95D0))(this);
	}
	template <typename T = void> T set_swingLimitSpring(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A96AC))(this, value);
	}
	template <typename T = void> T INTERNAL_get_swingLimitSpring(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A960C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_swingLimitSpring(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A96C8))(this, value);
	}
	template <typename T = uintptr_t> T get_lowTwistLimit() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9768))(this);
	}
	template <typename T = void> T set_lowTwistLimit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9850))(this, value);
	}
	template <typename T = void> T INTERNAL_get_lowTwistLimit(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A97B0))(this, value);
	}
	template <typename T = void> T INTERNAL_set_lowTwistLimit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9870))(this, value);
	}
	template <typename T = uintptr_t> T get_highTwistLimit() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9910))(this);
	}
	template <typename T = void> T set_highTwistLimit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A99F8))(this, value);
	}
	template <typename T = void> T INTERNAL_get_highTwistLimit(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A9958))(this, value);
	}
	template <typename T = void> T INTERNAL_set_highTwistLimit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9A18))(this, value);
	}
	template <typename T = uintptr_t> T get_swing1Limit() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9AB8))(this);
	}
	template <typename T = void> T set_swing1Limit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9BA0))(this, value);
	}
	template <typename T = void> T INTERNAL_get_swing1Limit(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A9B00))(this, value);
	}
	template <typename T = void> T INTERNAL_set_swing1Limit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9BC0))(this, value);
	}
	template <typename T = uintptr_t> T get_swing2Limit() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9C60))(this);
	}
	template <typename T = void> T set_swing2Limit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9D48))(this, value);
	}
	template <typename T = void> T INTERNAL_get_swing2Limit(uintptr_t* value) {
		return ((T (*)(CharacterJoint*, uintptr_t*))(Il2CppBase() + 0x46A9CA8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_swing2Limit(uintptr_t value) {
		return ((T (*)(CharacterJoint*, uintptr_t))(Il2CppBase() + 0x46A9D68))(this, value);
	}
	template <typename T = bool> T get_enableProjection() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9E08))(this);
	}
	template <typename T = void> T set_enableProjection(bool value) {
		return ((T (*)(CharacterJoint*, bool))(Il2CppBase() + 0x46A9EA0))(this, value);
	}
	template <typename T = float> T get_projectionDistance() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9F40))(this);
	}
	template <typename T = float> T get_projectionAngle() {
		return ((T (*)(CharacterJoint*))(Il2CppBase() + 0x46A9FD8))(this);
	}

};

}

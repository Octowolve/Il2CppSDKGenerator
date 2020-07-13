#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CharacterController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CharacterController"));
	}


	template <typename T = bool> T SimpleMove(Il2CppVector3 speed) {
		return ((T (*)(CharacterController*, Il2CppVector3))(Il2CppBase() + 0x46A7F54))(this, speed);
	}
	template <typename T = bool> static T INTERNAL_CALL_SimpleMove(uintptr_t self, uintptr_t speed) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A7F78))(0, self, speed);
	}
	template <typename T = uintptr_t> T Move(Il2CppVector3 motion) {
		return ((T (*)(CharacterController*, Il2CppVector3))(Il2CppBase() + 0x46A8018))(this, motion);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_Move(uintptr_t self, uintptr_t motion) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A803C))(0, self, motion);
	}
	template <typename T = bool> T get_isGrounded() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A80DC))(this);
	}
	template <typename T = Il2CppVector3> T get_velocity() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A8174))(this);
	}
	template <typename T = void> T INTERNAL_get_velocity(uintptr_t* value) {
		return ((T (*)(CharacterController*, uintptr_t*))(Il2CppBase() + 0x46A81BC))(this, value);
	}
	template <typename T = uintptr_t> T get_collisionFlags() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A825C))(this);
	}
	template <typename T = float> T get_radius() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A82F4))(this);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A838C))(this, value);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A842C))(this);
	}
	template <typename T = void> T set_height(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A84C4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A8564))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(CharacterController*, Il2CppVector3))(Il2CppBase() + 0x46A864C))(this, value);
	}
	template <typename T = void> T INTERNAL_get_center(uintptr_t* value) {
		return ((T (*)(CharacterController*, uintptr_t*))(Il2CppBase() + 0x46A85AC))(this, value);
	}
	template <typename T = void> T INTERNAL_set_center(uintptr_t value) {
		return ((T (*)(CharacterController*, uintptr_t))(Il2CppBase() + 0x46A866C))(this, value);
	}
	template <typename T = float> T get_slopeLimit() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A870C))(this);
	}
	template <typename T = void> T set_slopeLimit(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A87A4))(this, value);
	}
	template <typename T = float> T get_stepOffset() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A8844))(this);
	}
	template <typename T = void> T set_stepOffset(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A88DC))(this, value);
	}
	template <typename T = float> T get_skinWidth() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A897C))(this);
	}
	template <typename T = void> T set_skinWidth(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A8A14))(this, value);
	}
	template <typename T = float> T get_minMoveDistance() {
		return ((T (*)(CharacterController*))(Il2CppBase() + 0x46A8AB4))(this);
	}
	template <typename T = void> T set_minMoveDistance(float value) {
		return ((T (*)(CharacterController*, float))(Il2CppBase() + 0x46A8B4C))(this, value);
	}
	template <typename T = void> T set_detectCollisions(bool value) {
		return ((T (*)(CharacterController*, bool))(Il2CppBase() + 0x46A8BEC))(this, value);
	}

};

}

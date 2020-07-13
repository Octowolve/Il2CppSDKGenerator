#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimationOffsetPlayable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimationOffsetPlayable"));
	}


	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(AnimationOffsetPlayable*))(Il2CppBase() + 0x4DAD6B4))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(AnimationOffsetPlayable*, Il2CppVector3))(Il2CppBase() + 0x4DAD75C))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(AnimationOffsetPlayable*))(Il2CppBase() + 0x4DAD7A8))(this);
	}
	template <typename T = void> T set_rotation(Il2CppQuaternion value) {
		return ((T (*)(AnimationOffsetPlayable*, Il2CppQuaternion))(Il2CppBase() + 0x4DAD828))(this, value);
	}
	template <typename T = Il2CppVector3> static T GetPosition(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAD714))(0, handle);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPosition(uintptr_t handle, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DAD880))(0, handle, value);
	}
	template <typename T = void> static T SetPosition(uintptr_t handle, Il2CppVector3 value) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4DAD780))(0, handle, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetPosition(uintptr_t handle, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAD920))(0, handle, value);
	}
	template <typename T = Il2CppQuaternion> static T GetRotation(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAD7F0))(0, handle);
	}
	template <typename T = void> static T INTERNAL_CALL_GetRotation(uintptr_t handle, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DAD9C0))(0, handle, value);
	}
	template <typename T = void> static T SetRotation(uintptr_t handle, Il2CppQuaternion value) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x4DAD850))(0, handle, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetRotation(uintptr_t handle, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DADA60))(0, handle, value);
	}

};

}

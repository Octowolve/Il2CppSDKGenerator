#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class MuscleCollisionBroadcaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "MuscleCollisionBroadcaster"));
	}

	template <typename T = uintptr_t> T& puppetMaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& muscleIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& onMuscleHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& onMuscleCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& onMuscleCollisionExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& otherBroadcaster() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Hit(float unPin, Il2CppVector3 force, Il2CppVector3 position) {
		return ((T (*)(MuscleCollisionBroadcaster*, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x38B91B4))(this, unPin, force, position);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(MuscleCollisionBroadcaster*, uintptr_t))(Il2CppBase() + 0x38B9274))(this, collision);
	}
	template <typename T = void> T OnCollisionStay(uintptr_t collision) {
		return ((T (*)(MuscleCollisionBroadcaster*, uintptr_t))(Il2CppBase() + 0x38B9458))(this, collision);
	}
	template <typename T = void> T OnCollisionExit(uintptr_t collision) {
		return ((T (*)(MuscleCollisionBroadcaster*, uintptr_t))(Il2CppBase() + 0x38B973C))(this, collision);
	}

};

}

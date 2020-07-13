#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class SubBehaviourBalancer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "SubBehaviourBalancer"));
	}

	template <typename T = uintptr_t> T& joint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& dir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& dirVel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& cop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& com() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& comV() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settings() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rigidbodies() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& copPoints() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& pressureSensor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& Ibody() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& I() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppQuaternion> T& toJointSpace() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = uintptr_t> T get_joint() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D24DC))(this);
	}
	template <typename T = void> T set_joint(uintptr_t value) {
		return ((T (*)(SubBehaviourBalancer*, uintptr_t))(Il2CppBase() + 0x38D24E4))(this, value);
	}
	template <typename T = Il2CppVector3> T get_dir() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D24EC))(this);
	}
	template <typename T = void> T set_dir(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourBalancer*, Il2CppVector3))(Il2CppBase() + 0x38D2500))(this, value);
	}
	template <typename T = Il2CppVector3> T get_dirVel() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D250C))(this);
	}
	template <typename T = void> T set_dirVel(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourBalancer*, Il2CppVector3))(Il2CppBase() + 0x38D2520))(this, value);
	}
	template <typename T = Il2CppVector3> T get_cop() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D252C))(this);
	}
	template <typename T = void> T set_cop(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourBalancer*, Il2CppVector3))(Il2CppBase() + 0x38D2540))(this, value);
	}
	template <typename T = Il2CppVector3> T get_com() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D254C))(this);
	}
	template <typename T = void> T set_com(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourBalancer*, Il2CppVector3))(Il2CppBase() + 0x38D2560))(this, value);
	}
	template <typename T = Il2CppVector3> T get_comV() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D256C))(this);
	}
	template <typename T = void> T set_comV(Il2CppVector3 value) {
		return ((T (*)(SubBehaviourBalancer*, Il2CppVector3))(Il2CppBase() + 0x38D2580))(this, value);
	}
	template <typename T = void> T Initiate(uintptr_t behaviour, uintptr_t settings, uintptr_t Ibody, Il2CppArray<uintptr_t>* rigidbodies, uintptr_t joint, Il2CppArray<uintptr_t>* copPoints, uintptr_t pressureSensor) {
		return ((T (*)(SubBehaviourBalancer*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x38D258C))(this, behaviour, settings, Ibody, rigidbodies, joint, copPoints, pressureSensor);
	}
	template <typename T = void> T Solve() {
		return ((T (*)(SubBehaviourBalancer*))(Il2CppBase() + 0x38D27CC))(this);
	}

};

}

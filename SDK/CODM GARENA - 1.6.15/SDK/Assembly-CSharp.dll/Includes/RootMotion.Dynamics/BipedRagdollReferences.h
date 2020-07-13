#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BipedRagdollReferences
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RootMotion.Dynamics", "BipedRagdollReferences"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& hips() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& spine() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spines() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& chest() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& leftUpperLeg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& leftLowerLeg() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& leftFoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rightUpperLeg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& rightLowerLeg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rightFoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& leftUpperArm() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& leftLowerArm() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& leftHand() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& rightUpperArm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& rightLowerArm() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rightHand() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChildRecursive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRagdollTransforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FromAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FromBipedReferences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsValid(uintptr_t msg) {
		return ((T (*)(BipedRagdollReferences*, uintptr_t))(Il2CppBase() + 0x413D670))(this, msg);
	}
	template <typename T = bool> T IsChildRecursive(uintptr_t t, uintptr_t parent) {
		return ((T (*)(BipedRagdollReferences*, uintptr_t, uintptr_t))(Il2CppBase() + 0x413D678))(this, t, parent);
	}
	template <typename T = bool> T IsEmpty(bool considerRoot) {
		return ((T (*)(BipedRagdollReferences*, bool))(Il2CppBase() + 0x413DD60))(this, considerRoot);
	}
	template <typename T = bool> T Contains(uintptr_t t, bool ignoreRoot) {
		return ((T (*)(BipedRagdollReferences*, uintptr_t, bool))(Il2CppBase() + 0x413E410))(this, t, ignoreRoot);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRagdollTransforms() {
		return ((T (*)(BipedRagdollReferences*))(Il2CppBase() + 0x413E418))(this);
	}
	template <typename T = uintptr_t> static T FromAvatar(uintptr_t animator) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413E420))(0, animator);
	}
	template <typename T = uintptr_t> static T FromBipedReferences(uintptr_t biped) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413E690))(0, biped);
	}

};

}

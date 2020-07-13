#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class BipedRagdollCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RootMotion.Dynamics", "BipedRagdollCreator"));
	}

	template <typename T = bool> T& canBuild() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& references() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenUserManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScriptReference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutodetectOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateHandCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFootCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildCentroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MassDistribution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateJoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLimbJoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBipedRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperArmToHeadCentroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpperArmCentroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T OpenUserManual() {
		return ((T (*)(BipedRagdollCreator*))(Il2CppBase() + 0x4134864))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(BipedRagdollCreator*))(Il2CppBase() + 0x4134928))(this);
	}
	template <typename T = void> T OpenTutorial() {
		return ((T (*)(BipedRagdollCreator*))(Il2CppBase() + 0x41349EC))(this);
	}
	template <typename T = uintptr_t> static T AutodetectOptions(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4134AB0))(0, r);
	}
	template <typename T = void> static T Create(uintptr_t r, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4135074))(0, r, options);
	}
	template <typename T = void> static T CreateColliders(uintptr_t r, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x413653C))(0, r, options);
	}
	template <typename T = void> static T CreateHandCollider(uintptr_t hand, uintptr_t lowerArm, uintptr_t root, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x413A32C))(0, hand, lowerArm, root, options);
	}
	template <typename T = void> static T CreateFootCollider(uintptr_t foot, uintptr_t lowerLeg, uintptr_t upperLeg, uintptr_t root, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x413A74C))(0, foot, lowerLeg, upperLeg, root, options);
	}
	template <typename T = Il2CppVector3> static T GetChildCentroid(uintptr_t t, Il2CppVector3 fallback) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x413AFBC))(0, t, fallback);
	}
	template <typename T = void> static T MassDistribution(uintptr_t r, uintptr_t o) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41379A4))(0, r, o);
	}
	template <typename T = void> static T CreateJoints(uintptr_t r, uintptr_t o) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4138338))(0, r, o);
	}
	template <typename T = void> static T CreateLimbJoints(uintptr_t connectedBone, uintptr_t bone1, uintptr_t bone2, uintptr_t bone3, uintptr_t root, Il2CppVector3 defaultWorldDirection, uintptr_t jointType, uintptr_t limits1, uintptr_t limits2, uintptr_t limits3) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x413BC1C))(0, connectedBone, bone1, bone2, bone3, root, defaultWorldDirection, jointType, limits1, limits2, limits3);
	}
	template <typename T = void> static T ClearBipedRagdoll(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413C5F0))(0, r);
	}
	template <typename T = bool> static T IsClear(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x413D0B4))(0, r);
	}
	template <typename T = Il2CppVector3> static T GetUpperArmToHeadCentroid(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41395FC))(0, r);
	}
	template <typename T = Il2CppVector3> static T GetUpperArmCentroid(uintptr_t r) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4134EC0))(0, r);
	}

};

}

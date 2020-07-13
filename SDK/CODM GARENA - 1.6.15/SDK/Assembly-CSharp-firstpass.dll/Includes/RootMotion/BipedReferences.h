#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class BipedReferences
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedReferences"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pelvis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& leftThigh() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& leftCalf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& leftFoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rightThigh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& rightCalf() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rightFoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& leftUpperArm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& leftForearm() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& leftHand() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rightUpperArm() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& rightForearm() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& rightHand() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& spine() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eyes() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_isFilled() {
		return ((T (*)(BipedReferences*))(Il2CppBase() + 0x389E530))(this);
	}
	template <typename T = bool> T get_isEmpty() {
		return ((T (*)(BipedReferences*))(Il2CppBase() + 0x389EB70))(this);
	}
	template <typename T = bool> T IsEmpty(bool includeRoot) {
		return ((T (*)(BipedReferences*, bool))(Il2CppBase() + 0x389EB84))(this, includeRoot);
	}
	template <typename T = bool> T Contains(uintptr_t t, bool ignoreRoot) {
		return ((T (*)(BipedReferences*, uintptr_t, bool))(Il2CppBase() + 0x389F228))(this, t, ignoreRoot);
	}
	template <typename T = bool> static T AutoDetectReferences(uintptr_t references, uintptr_t root, uintptr_t autoDetectParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x389F8A0))(0, references, root, autoDetectParams);
	}
	template <typename T = void> static T DetectReferencesByNaming(uintptr_t references, uintptr_t root, uintptr_t autoDetectParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A002C))(0, references, root, autoDetectParams);
	}
	template <typename T = void> static T AssignHumanoidReferences(uintptr_t references, uintptr_t animator, uintptr_t autoDetectParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x389FB70))(0, references, animator, autoDetectParams);
	}
	template <typename T = bool> static T SetupError(uintptr_t references, uintptr_t errorMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A0AF4))(0, references, errorMessage);
	}
	template <typename T = bool> static T SetupWarning(uintptr_t references, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A0C44))(0, references, warningMessage);
	}
	template <typename T = bool> static T IsNeckBone(uintptr_t bone, uintptr_t leftUpperArm) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A13AC))(0, bone, leftUpperArm);
	}
	template <typename T = bool> static T AddBoneToEyes(uintptr_t bone, uintptr_t references, uintptr_t autoDetectParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A10D8))(0, bone, references, autoDetectParams);
	}
	template <typename T = bool> static T AddBoneToSpine(uintptr_t bone, uintptr_t references, uintptr_t autoDetectParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A0E8C))(0, bone, references, autoDetectParams);
	}
	template <typename T = void> static T DetectLimb(uintptr_t boneType, uintptr_t boneSide, uintptr_t firstBone, uintptr_t secondBone, uintptr_t lastBone, Il2CppArray<uintptr_t>* transforms) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38A0D00))(0, boneType, boneSide, firstBone, secondBone, lastBone, transforms);
	}
	template <typename T = void> static T AddBoneToHierarchy(Il2CppArray<uintptr_t>* bones, uintptr_t transform) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x38A1248))(0, bones, transform);
	}
	template <typename T = bool> static T LimbError(uintptr_t bone1, uintptr_t bone2, uintptr_t bone3, uintptr_t errorMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A1504))(0, bone1, bone2, bone3, errorMessage);
	}
	template <typename T = bool> static T LimbWarning(uintptr_t bone1, uintptr_t bone2, uintptr_t bone3, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A24C0))(0, bone1, bone2, bone3, warningMessage);
	}
	template <typename T = bool> static T SpineError(uintptr_t references, uintptr_t errorMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A1D54))(0, references, errorMessage);
	}
	template <typename T = bool> static T SpineWarning(uintptr_t references, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A28E8))(0, references, warningMessage);
	}
	template <typename T = bool> static T EyesError(uintptr_t references, uintptr_t errorMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A2204))(0, references, errorMessage);
	}
	template <typename T = bool> static T EyesWarning(uintptr_t references, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A28F0))(0, references, warningMessage);
	}
	template <typename T = bool> static T RootHeightWarning(uintptr_t references, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A28F8))(0, references, warningMessage);
	}
	template <typename T = bool> static T FacingAxisWarning(uintptr_t references, uintptr_t warningMessage) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A2B1C))(0, references, warningMessage);
	}
	template <typename T = float> static T GetVerticalOffset(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x38A2D90))(0, p1, p2, rotation);
	}

};

}

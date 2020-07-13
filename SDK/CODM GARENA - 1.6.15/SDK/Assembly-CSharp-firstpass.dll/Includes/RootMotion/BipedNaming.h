#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class BipedNaming
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "BipedNaming"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& typeLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeSpine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeTail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeEye() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExclude() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeSpine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeLeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeTail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& typeExcludeEye() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& pelvis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& hand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& foot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetBonesOfType(uintptr_t boneType, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3898E24))(0, boneType, bones);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBonesOfSide(uintptr_t boneSide, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3899294))(0, boneSide, bones);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBonesOfTypeAndSide(uintptr_t boneType, uintptr_t boneSide, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38995E4))(0, boneType, boneSide, bones);
	}
	template <typename T = uintptr_t> static T GetFirstBoneOfTypeAndSide(uintptr_t boneType, uintptr_t boneSide, Il2CppArray<uintptr_t>* bones) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x389969C))(0, boneType, boneSide, bones);
	}
	template <typename T = uintptr_t> static T GetNamingMatch(Il2CppArray<uintptr_t>* transforms, Il2CppArray<uintptr_t>* namings) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x389977C))(0, transforms, namings);
	}
	template <typename T = uintptr_t> static T GetBoneType(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899084))(0, boneName);
	}
	template <typename T = uintptr_t> static T GetBoneSide(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x38994F4))(0, boneName);
	}
	template <typename T = uintptr_t> static T GetBone(Il2CppArray<uintptr_t>* transforms, uintptr_t boneType, uintptr_t boneSide, Il2CppArray<uintptr_t>* namings) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x389A510))(0, transforms, boneType, boneSide, namings);
	}
	template <typename T = bool> static T isLeft(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x389A100))(0, boneName);
	}
	template <typename T = bool> static T isRight(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x389A308))(0, boneName);
	}
	template <typename T = bool> static T isSpine(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899A28))(0, boneName);
	}
	template <typename T = bool> static T isHead(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899B4C))(0, boneName);
	}
	template <typename T = bool> static T isArm(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899C70))(0, boneName);
	}
	template <typename T = bool> static T isLeg(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899D94))(0, boneName);
	}
	template <typename T = bool> static T isTail(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899EB8))(0, boneName);
	}
	template <typename T = bool> static T isEye(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3899FDC))(0, boneName);
	}
	template <typename T = bool> static T isTypeExclude(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x389A850))(0, boneName);
	}
	template <typename T = bool> static T matchesNaming(Il2CppString* boneName, Il2CppArray<uintptr_t>* namingConvention) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38998E8))(0, boneName, namingConvention);
	}
	template <typename T = bool> static T excludesNaming(Il2CppString* boneName, Il2CppArray<uintptr_t>* namingConvention) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x389A7CC))(0, boneName, namingConvention);
	}
	template <typename T = bool> static T matchesLastLetter(Il2CppString* boneName, Il2CppArray<uintptr_t>* namingConvention) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x389A90C))(0, boneName, namingConvention);
	}
	template <typename T = bool> static T LastLetterIs(Il2CppString* boneName, Il2CppString* letter) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x389AA10))(0, boneName, letter);
	}
	template <typename T = Il2CppString*> static T firstLetter(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x389A6D8))(0, boneName);
	}
	template <typename T = Il2CppString*> static T lastLetter(Il2CppString* boneName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x389A5D8))(0, boneName);
	}

};

}

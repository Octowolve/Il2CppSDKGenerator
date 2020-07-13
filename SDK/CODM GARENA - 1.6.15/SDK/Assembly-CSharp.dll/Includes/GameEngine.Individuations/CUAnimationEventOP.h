#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUAnimationEventOP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUAnimationEventOP"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlendTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideModelTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_bindSoundKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectAnimationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectAnimationKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectBoneOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectBoneRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModelObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModelBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindModelAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindModelOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindModeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindModelLifeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> static T Clone(uintptr_t inEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3704920))(0, inEvent);
	}
	template <typename T = uintptr_t> static T Clone_1(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3350A44))(0, inObj);
	}
	template <typename T = bool> static T check(uintptr_t inObj, float inTime, float inAnimationLength, uintptr_t inActor, uintptr_t* bRemove) {
		return ((T (*)(void *, uintptr_t, float, float, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1B9D34C))(0, inObj, inTime, inAnimationLength, inActor, bRemove);
	}
	template <typename T = void> static T CopyData(uintptr_t inObj, uintptr_t inSrc) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7F45C))(0, inObj, inSrc);
	}
	template <typename T = float> static T BlendTime(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E763A8))(0, inObj);
	}
	template <typename T = float> static T HideModelTime(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E7681C))(0, inObj);
	}
	template <typename T = Il2CppString*> static T bindSoundKey(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76AB0))(0, inObj);
	}
	template <typename T = uintptr_t> static T GetEffectObj(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E581F0))(0, inObj);
	}
	template <typename T = void> static T SetEffectObj(uintptr_t inObj, uintptr_t inModelObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7FAB0))(0, inObj, inModelObj);
	}
	template <typename T = int32_t> static T EffectAssetID(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21DF7C4))(0, inObj);
	}
	template <typename T = float> static T EffectLifeTime(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E766A0))(0, inObj);
	}
	template <typename T = float> static T EffectAnimationTime(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76524))(0, inObj);
	}
	template <typename T = Il2CppString*> static T EffectBindBone(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76DA8))(0, inObj);
	}
	template <typename T = Il2CppString*> static T EffectAnimationKey(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76C2C))(0, inObj);
	}
	template <typename T = Il2CppVector3> static T EffectBoneOffset(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E58B40))(0, inObj);
	}
	template <typename T = Il2CppVector3> static T EffectBoneRotate(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E58CC8))(0, inObj);
	}
	template <typename T = uintptr_t> static T GetModelObj(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E5836C))(0, inObj);
	}
	template <typename T = void> static T SetModelObj(uintptr_t inObj, uintptr_t inModelObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7FC44))(0, inObj, inModelObj);
	}
	template <typename T = Il2CppString*> static T ModelBindBone(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76F24))(0, inObj);
	}
	template <typename T = int32_t> static T BindModelAssetID(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21DF648))(0, inObj);
	}
	template <typename T = Il2CppVector3> static T BindModelOffset(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E589B8))(0, inObj);
	}
	template <typename T = uintptr_t> static T BindModeType(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B6E884))(0, inObj);
	}
	template <typename T = float> static T BindModelLifeTime(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E7622C))(0, inObj);
	}

};

}

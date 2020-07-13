#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Animations {

class IndividuationAnimPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Animations", "IndividuationAnimPlayer"));
	}

	template <typename T = uintptr_t> T& mAvatar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& mActionCtrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mAnimator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mEnable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mAnimatorOverrideController() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FRun() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAcationMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadAcationMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitingLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NullRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MyHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t inBody) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B5441C))(0, inBody);
	}
	template <typename T = uintptr_t> T get_updateMode() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B545D0))(this);
	}
	template <typename T = void> T set_updateMode(uintptr_t value) {
		return ((T (*)(IndividuationAnimPlayer*, uintptr_t))(Il2CppBase() + 0x2B545FC))(this, value);
	}
	template <typename T = uintptr_t> T get_cullingMode() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54628))(this);
	}
	template <typename T = void> T set_cullingMode(uintptr_t value) {
		return ((T (*)(IndividuationAnimPlayer*, uintptr_t))(Il2CppBase() + 0x2B54654))(this, value);
	}
	template <typename T = bool> T get_applyRootMotion() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54680))(this);
	}
	template <typename T = void> T set_applyRootMotion(bool value) {
		return ((T (*)(IndividuationAnimPlayer*, bool))(Il2CppBase() + 0x2B546AC))(this, value);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B546B0))(this);
	}
	template <typename T = void> T set_Speed(float value) {
		return ((T (*)(IndividuationAnimPlayer*, float))(Il2CppBase() + 0x2B546DC))(this, value);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54708))(this);
	}
	template <typename T = uintptr_t> T get_avatar() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54710))(this);
	}
	template <typename T = uintptr_t> T get_pawn() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54718))(this);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54720))(this);
	}
	template <typename T = bool> T get_enable() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B547F4))(this);
	}
	template <typename T = void> T PlayAction(Il2CppString* actionName, float fadeLength, uintptr_t onEvent) {
		return ((T (*)(IndividuationAnimPlayer*, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x2B547FC))(this, actionName, fadeLength, onEvent);
	}
	template <typename T = void> T PlayAction_1(uintptr_t inAction, float fadeLength) {
		return ((T (*)(IndividuationAnimPlayer*, uintptr_t, float))(Il2CppBase() + 0x2B54940))(this, inAction, fadeLength);
	}
	template <typename T = void> T StopAction() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54AAC))(this);
	}
	template <typename T = void> T play(Il2CppString* inClipKey, uintptr_t inClip, float fadeLength) {
		return ((T (*)(IndividuationAnimPlayer*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2B54B84))(this, inClipKey, inClip, fadeLength);
	}
	template <typename T = void> T play_1(Il2CppString* inClipKey, float inBlendTime) {
		return ((T (*)(IndividuationAnimPlayer*, Il2CppString*, float))(Il2CppBase() + 0x2B54CA4))(this, inClipKey, inBlendTime);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54D94))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54E6C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B54F28))(this);
	}
	template <typename T = void> T LoadAcationMap(int32_t inAssetID) {
		return ((T (*)(IndividuationAnimPlayer*, int32_t))(Il2CppBase() + 0x2B552C8))(this, inAssetID);
	}
	template <typename T = void> T LoadAcationMap_1(int32_t inMapAssetID, int32_t inLinkAssetID) {
		return ((T (*)(IndividuationAnimPlayer*, int32_t, int32_t))(Il2CppBase() + 0x2B553C0))(this, inMapAssetID, inLinkAssetID);
	}
	template <typename T = void> T WaitingLoading() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B55148))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B5561C))(this);
	}
	template <typename T = void> static T NullRun() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B55720))(0);
	}
	template <typename T = void> T ResetAnimatorController(uintptr_t inCtrl) {
		return ((T (*)(IndividuationAnimPlayer*, uintptr_t))(Il2CppBase() + 0x2B557B0))(this, inCtrl);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B55918))(this);
	}
	template <typename T = bool> T MyHide() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B559E4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(IndividuationAnimPlayer*))(Il2CppBase() + 0x2B55A84))(this);
	}

};

}

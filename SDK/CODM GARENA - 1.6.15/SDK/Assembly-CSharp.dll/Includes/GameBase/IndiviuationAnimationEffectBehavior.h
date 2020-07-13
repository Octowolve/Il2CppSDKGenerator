#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndiviuationAnimationEffectBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndiviuationAnimationEffectBehavior"));
	}

	template <typename T = uintptr_t> T& EffectGo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& EffectTurnToLeftHandTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EffectTurnBackToRightHandTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& EffectShowTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EffectHideTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RightHandTakePhotoTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LeftHandTakePhotoTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& RightHandPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& RightHandEuler() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& LeftHandPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& LeftHandEuler() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_StartPlayTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_ShouldTick() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsShow() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& m_IsTurnToLeft() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& m_IsTurnToRight() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = bool> T& m_IsHide() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_IsRightHandTakePhoto() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& m_IsLeftHandtakePhoto() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = Il2CppString*> static T& RigRightHandPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RigLeftHandPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTakePhoto() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachEffectToRightHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachEffectToLeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T PlayTakePhoto(bool inPlay) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, bool))(Il2CppBase() + 0x1F0866C))(this, inPlay);
	}
	template <typename T = void> T AttachEffectToRightHand(uintptr_t animator) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t))(Il2CppBase() + 0x1F0884C))(this, animator);
	}
	template <typename T = void> T AttachEffectToLeftHand(uintptr_t animator) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t))(Il2CppBase() + 0x1F08C6C))(this, animator);
	}
	template <typename T = void> T ReleaseEffect() {
		return ((T (*)(IndiviuationAnimationEffectBehavior*))(Il2CppBase() + 0x1F08FF0))(this);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F09138))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F092DC))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F09430))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(IndiviuationAnimationEffectBehavior*))(Il2CppBase() + 0x1F097F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(IndiviuationAnimationEffectBehavior*))(Il2CppBase() + 0x1F098CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F09A4C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F09ABC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUpdate(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(IndiviuationAnimationEffectBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F09B2C))(this, P0, P1, P2);
	}

};

}

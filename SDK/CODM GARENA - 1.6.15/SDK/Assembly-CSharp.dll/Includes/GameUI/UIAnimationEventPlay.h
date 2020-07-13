#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIAnimationEventPlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIAnimationEventPlay"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sfxGroups() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& shakeGroups() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& shakeCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AudioObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& shaker() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& cameraInitRot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& cameraInitPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& bCameraInit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& bCanPlayDelayShake() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& bCanPlayShake() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& eventList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& StopActions() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& PermanentDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& TimelineUSSequencer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStopActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDelayShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableRenders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableRenders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTimelineAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginTimelineAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTimelineAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C283C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C2960))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C2AA8))(this);
	}
	template <typename T = void> T AddStopActions(uintptr_t action) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C2FE4))(this, action);
	}
	template <typename T = void> T SetCamera(uintptr_t camera) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C30FC))(this, camera);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C2B84))(this);
	}
	template <typename T = void> T StopShake() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C31DC))(this);
	}
	template <typename T = void> T StopDelayShake() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C33A4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C3B4C))(this);
	}
	template <typename T = void> T PlayEventSFX(int32_t sfxGroupId) {
		return ((T (*)(UIAnimationEventPlay*, int32_t))(Il2CppBase() + 0x29C4480))(this, sfxGroupId);
	}
	template <typename T = void> T PlayShake() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C46DC))(this);
	}
	template <typename T = void> T PlayEventShake(int32_t shakeGroupId) {
		return ((T (*)(UIAnimationEventPlay*, int32_t))(Il2CppBase() + 0x29C48D4))(this, shakeGroupId);
	}
	template <typename T = void> T PlayHideWeapon(uintptr_t sequenceEvent) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C4B9C))(this, sequenceEvent);
	}
	template <typename T = void> T EnableRenders(uintptr_t sequenceEvent) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C3818))(this, sequenceEvent);
	}
	template <typename T = void> T DisableRenders(uintptr_t sequenceEvent) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C4E38))(this, sequenceEvent);
	}
	template <typename T = void> T PlayTimelineAnimation(uintptr_t sequenceEvent) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C516C))(this, sequenceEvent);
	}
	template <typename T = void> T BeginTimelineAnim(uintptr_t sequenceEvent) {
		return ((T (*)(UIAnimationEventPlay*, uintptr_t))(Il2CppBase() + 0x29C534C))(this, sequenceEvent);
	}
	template <typename T = void> T EndTimelineAnim() {
		return ((T (*)(UIAnimationEventPlay*))(Il2CppBase() + 0x29C54E0))(this);
	}
	template <typename T = bool> static T EndTimelineAnimm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29C58E8))(0, it);
	}

};

}

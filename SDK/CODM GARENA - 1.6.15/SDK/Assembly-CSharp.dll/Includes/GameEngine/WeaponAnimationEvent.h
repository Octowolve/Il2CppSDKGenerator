#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAnimationEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAnimationEvent"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& CallBackStepSoundFuncDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& CallBackDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& CallBackEffectFuncDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBackStepSoundFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallBackEffectFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEvent_StepSound_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddEvent_StepSound_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AddEvent_StepSound_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEvent_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEvent_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEvent_Effect_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddEvent_1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FiringEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T CallBackStepSoundFunc(int32_t arg) {
		return ((T (*)(WeaponAnimationEvent*, int32_t))(Il2CppBase() + 0x2E958FC))(this, arg);
	}
	template <typename T = void> T CallBackFunc(int32_t arg) {
		return ((T (*)(WeaponAnimationEvent*, int32_t))(Il2CppBase() + 0x2E95AE8))(this, arg);
	}
	template <typename T = void> T CallBackEffectFunc(int32_t arg) {
		return ((T (*)(WeaponAnimationEvent*, int32_t))(Il2CppBase() + 0x2E95C44))(this, arg);
	}
	template <typename T = void> T AddEvent_StepSound_1P(uintptr_t callbackFunc, uintptr_t aniClipType, Il2CppString* stateName, Il2CppString* clipSuffix, uintptr_t animationComponent) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2E95DA0))(this, callbackFunc, aniClipType, stateName, clipSuffix, animationComponent);
	}
	template <typename T = void> T AddEvent_StepSound_1P_1(uintptr_t callbackFunc, uintptr_t aniClipType, Il2CppString* stateName, Il2CppString* clipSuffix, uintptr_t animationComponent, float rate) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2E96400))(this, callbackFunc, aniClipType, stateName, clipSuffix, animationComponent, rate);
	}
	template <typename T = void> T AddEvent_StepSound_1P_2(uintptr_t callbackFunc, uintptr_t aniClipType, uintptr_t animationComponent) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E96638))(this, callbackFunc, aniClipType, animationComponent);
	}
	template <typename T = void> T AddEvent_1P(uintptr_t callbackFunc, uintptr_t aniClipType, Il2CppString* stateName, Il2CppString* clipSuffix, uintptr_t animationComponent, float rate) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2E96874))(this, callbackFunc, aniClipType, stateName, clipSuffix, animationComponent, rate);
	}
	template <typename T = void> T AddEvent_3P(uintptr_t callbackFunc, uintptr_t aniClipType, Il2CppString* stateName, Il2CppString* clipSuffix, uintptr_t animationComponent, float rate) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2E96AAC))(this, callbackFunc, aniClipType, stateName, clipSuffix, animationComponent, rate);
	}
	template <typename T = void> T AddEvent_Effect_3P(uintptr_t callbackFunc, uintptr_t aniClipType, Il2CppString* stateName, Il2CppString* clipSuffix, uintptr_t animationComponent, float rate) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x2E96CE4))(this, callbackFunc, aniClipType, stateName, clipSuffix, animationComponent, rate);
	}
	template <typename T = void> T AddEvent_1P_1(uintptr_t callbackFunc, uintptr_t aniClipType, uintptr_t animationComponent, float rate) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x2E96F1C))(this, callbackFunc, aniClipType, animationComponent, rate);
	}
	template <typename T = void> T AddAnimationClipEvent(uintptr_t clip, Il2CppString* eventFuncName, float eventTime, int32_t intParameter) {
		return ((T (*)(WeaponAnimationEvent*, uintptr_t, Il2CppString*, float, int32_t))(Il2CppBase() + 0x2E95FF4))(this, clip, eventFuncName, eventTime, intParameter);
	}
	template <typename T = void> T FiringEvent() {
		return ((T (*)(WeaponAnimationEvent*))(Il2CppBase() + 0x2E9713C))(this);
	}

};

}

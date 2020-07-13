#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UITweener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITweener"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& animationCurve() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ignoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& steeperCurves() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& tweenGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& useFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& callWhenFinished() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& mAmountPerDelta() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mFactor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTemp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BounceLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Toggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStartToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEndToCurrentValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = float> T get_amountPerDelta() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FCCC8))(this);
	}
	template <typename T = void> T set_amountPerDelta(float value) {
		return ((T (*)(UITweener*, float))(Il2CppBase() + 0x41FCDCC))(this, value);
	}
	template <typename T = float> T get_tweenFactor() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FCDD4))(this);
	}
	template <typename T = void> T set_tweenFactor(float value) {
		return ((T (*)(UITweener*, float))(Il2CppBase() + 0x41FCDDC))(this, value);
	}
	template <typename T = uintptr_t> T get_direction() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FCE8C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FCEB0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FCF80))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FD6C0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FD770))(this);
	}
	template <typename T = void> T DoUpdate() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FD024))(this);
	}
	template <typename T = void> T SetOnFinished(uintptr_t del) {
		return ((T (*)(UITweener*, uintptr_t))(Il2CppBase() + 0x41FDB68))(this, del);
	}
	template <typename T = void> T SetOnFinished_1(uintptr_t del) {
		return ((T (*)(UITweener*, uintptr_t))(Il2CppBase() + 0x41FDC5C))(this, del);
	}
	template <typename T = void> T AddOnFinished(uintptr_t del) {
		return ((T (*)(UITweener*, uintptr_t))(Il2CppBase() + 0x41FDD50))(this, del);
	}
	template <typename T = void> T AddOnFinished_1(uintptr_t del) {
		return ((T (*)(UITweener*, uintptr_t))(Il2CppBase() + 0x41FDE44))(this, del);
	}
	template <typename T = void> T RemoveOnFinished(uintptr_t del) {
		return ((T (*)(UITweener*, uintptr_t))(Il2CppBase() + 0x41FDF38))(this, del);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE038))(this);
	}
	template <typename T = void> T Sample(float factor, bool isFinished) {
		return ((T (*)(UITweener*, float, bool))(Il2CppBase() + 0x41FD820))(this, factor, isFinished);
	}
	template <typename T = float> T BounceLogic(float val) {
		return ((T (*)(UITweener*, float))(Il2CppBase() + 0x41FE0DC))(this, val);
	}
	template <typename T = void> T Play() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE240))(this);
	}
	template <typename T = void> T PlayForward() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE2F4))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE3A8))(this);
	}
	template <typename T = void> T Play_1(bool forward) {
		return ((T (*)(UITweener*, bool))(Il2CppBase() + 0x41FE45C))(this, forward);
	}
	template <typename T = void> T ResetToBeginning() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE598))(this);
	}
	template <typename T = void> T ResetToBeginning_1(bool forward) {
		return ((T (*)(UITweener*, bool))(Il2CppBase() + 0x41FE688))(this, forward);
	}
	template <typename T = void> T Toggle() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE770))(this);
	}
	template <typename T = void> T OnUpdate(float factor, bool isFinished) {
		return ((T (*)(UITweener*, float, bool))(Il2CppBase() + 0x0))(this, factor, isFinished);
	}
	template <typename T = uintptr_t> static T Begin(uintptr_t go, float duration, float delay) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x3393670))(0, go, duration, delay);
	}
	template <typename T = void> T SetStartToCurrentValue() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE88C))(this);
	}
	template <typename T = void> T SetEndToCurrentValue() {
		return ((T (*)(UITweener*))(Il2CppBase() + 0x41FE924))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class WinnerCircleScreenCaptureAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "WinnerCircleScreenCaptureAnimation"));
	}

	template <typename T = bool> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& alphaDuration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& alphaDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& boreder() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _isReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _obsoleted() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppVector2> T& _size() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& _startsize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& _position() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& _startPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _tweenPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _tweenWidth() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _tweenHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _widget() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& _waitPlayCoroutine() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _inItCoroutine() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& onAnimCallback() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitReadyPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayNotAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTweenEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidthAndHight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Initialize(uintptr_t parent) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, uintptr_t))(Il2CppBase() + 0x3C89A48))(this, parent);
	}
	template <typename T = void> T Play(bool anim, uintptr_t callback) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, bool, uintptr_t))(Il2CppBase() + 0x3C89D50))(this, anim, callback);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*))(Il2CppBase() + 0x3C8A158))(this);
	}
	template <typename T = uintptr_t> T InitPosition(uintptr_t parent) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, uintptr_t))(Il2CppBase() + 0x3C89C64))(this, parent);
	}
	template <typename T = uintptr_t> T WaitReadyPlay(bool anim) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, bool))(Il2CppBase() + 0x3C8A06C))(this, anim);
	}
	template <typename T = void> T InternalPlay(bool anim) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, bool))(Il2CppBase() + 0x3C89E9C))(this, anim);
	}
	template <typename T = void> T PlayNotAnim() {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*))(Il2CppBase() + 0x3C8A830))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*))(Il2CppBase() + 0x3C8A464))(this);
	}
	template <typename T = void> T ResetTweenEnable(bool enable) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, bool))(Il2CppBase() + 0x3C8A25C))(this, enable);
	}
	template <typename T = void> T OnAnimCallback() {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*))(Il2CppBase() + 0x3C8A9A0))(this);
	}
	template <typename T = void> T GetWidthAndHight(uintptr_t* width, uintptr_t* height) {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3C8AA4C))(this, width, height);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WinnerCircleScreenCaptureAnimation*))(Il2CppBase() + 0x3C8ADF8))(this);
	}

};

}

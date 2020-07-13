#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UI1stPopwindowEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UI1stPopwindowEffect"));
	}

	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BottomContainer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MiddleContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& UpperContainer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mMaskColider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppQuaternion> T& mOriQ() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& kSmoothTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mPressing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mHalfScreenWidth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mHalfScreenHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& mPressDegreeX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& mPressDegreeY() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& mSmoothPress() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& mPress() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppQuaternion> T& mPressQ() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppQuaternion> T& mPressUQ() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> static T& kPressDegree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& mGyroSupported() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppQuaternion> T& mQ() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppQuaternion> T& mUIQ() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppQuaternion> T& mBottomQ() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppQuaternion> T& mUpperQ() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& mGyroRange() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> static T& kGyroDegree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTweeners() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PressMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGyro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ZoomQuaternion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BE0F0))(this);
	}
	template <typename T = void> T PressMask(uintptr_t go, bool state) {
		return ((T (*)(UI1stPopwindowEffect*, uintptr_t, bool))(Il2CppBase() + 0x29BE8E4))(this, go, state);
	}
	template <typename T = void> T UpdatePress(float delta) {
		return ((T (*)(UI1stPopwindowEffect*, float))(Il2CppBase() + 0x29BEB60))(this, delta);
	}
	template <typename T = void> T set_GyroRange(float value) {
		return ((T (*)(UI1stPopwindowEffect*, float))(Il2CppBase() + 0x29BED40))(this, value);
	}
	template <typename T = float> T get_GyroRange() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BED48))(this);
	}
	template <typename T = void> T UpdateGyro(float delta) {
		return ((T (*)(UI1stPopwindowEffect*, float))(Il2CppBase() + 0x29BED50))(this, delta);
	}
	template <typename T = Il2CppQuaternion> static T ZoomQuaternion(Il2CppQuaternion original, float range) {
		return ((T (*)(void *, Il2CppQuaternion, float))(Il2CppBase() + 0x29BF07C))(0, original, range);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BF2F8))(this);
	}
	template <typename T = void> T ApplyTweeners() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BE6E4))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BF728))(this);
	}
	template <typename T = void> T ResetEffect() {
		return ((T (*)(UI1stPopwindowEffect*))(Il2CppBase() + 0x29BF9CC))(this);
	}
	template <typename T = void> T Play(bool foward, bool frombegin) {
		return ((T (*)(UI1stPopwindowEffect*, bool, bool))(Il2CppBase() + 0x29BF804))(this, foward, frombegin);
	}

};

}

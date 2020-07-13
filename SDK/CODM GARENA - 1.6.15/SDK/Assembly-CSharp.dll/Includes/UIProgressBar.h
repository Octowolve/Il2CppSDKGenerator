#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIProgressBar"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& onDragFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& onTurnOff() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& thumb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mBG() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mFG() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mFill() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mIsDirty() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& numberOfSteps() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onChange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenToValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalToValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetThumbPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Value2WorldPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_cachedTransform() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F90794))(this);
	}
	template <typename T = uintptr_t> T get_cachedCamera() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F90864))(this);
	}
	template <typename T = uintptr_t> T get_foregroundWidget() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F9099C))(this);
	}
	template <typename T = void> T set_foregroundWidget(uintptr_t value) {
		return ((T (*)(UIProgressBar*, uintptr_t))(Il2CppBase() + 0x2F909A4))(this, value);
	}
	template <typename T = uintptr_t> T get_backgroundWidget() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F90A68))(this);
	}
	template <typename T = void> T set_backgroundWidget(uintptr_t value) {
		return ((T (*)(UIProgressBar*, uintptr_t))(Il2CppBase() + 0x2F90A70))(this, value);
	}
	template <typename T = uintptr_t> T get_fillDirection() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F90B34))(this);
	}
	template <typename T = void> T set_fillDirection(uintptr_t value) {
		return ((T (*)(UIProgressBar*, uintptr_t))(Il2CppBase() + 0x2F90B3C))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F5EF14))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(UIProgressBar*, float))(Il2CppBase() + 0x2F90B6C))(this, value);
	}
	template <typename T = float> T get_alpha() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F90E04))(this);
	}
	template <typename T = void> T set_alpha(float value) {
		return ((T (*)(UIProgressBar*, float))(Il2CppBase() + 0x2F90F44))(this, value);
	}
	template <typename T = bool> T get_isHorizontal() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91404))(this);
	}
	template <typename T = bool> T get_isInverted() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91418))(this);
	}
	template <typename T = void> T Set(float val, bool notify) {
		return ((T (*)(UIProgressBar*, float, bool))(Il2CppBase() + 0x2F90B74))(this, val, notify);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F9142C))(this);
	}
	template <typename T = void> T Upgrade() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91688))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91720))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F917B8))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91874))(this);
	}
	template <typename T = float> T ScreenToValue(Il2CppVector2 screenPos) {
		return ((T (*)(UIProgressBar*, Il2CppVector2))(Il2CppBase() + 0x2F91AA8))(this, screenPos);
	}
	template <typename T = float> T LocalToValue(Il2CppVector2 localPos) {
		return ((T (*)(UIProgressBar*, Il2CppVector2))(Il2CppBase() + 0x2F91D50))(this, localPos);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(UIProgressBar*))(Il2CppBase() + 0x2F91F88))(this);
	}
	template <typename T = void> T SetThumbPosition(Il2CppVector3 worldPos) {
		return ((T (*)(UIProgressBar*, Il2CppVector3))(Il2CppBase() + 0x2F92B28))(this, worldPos);
	}
	template <typename T = void> T OnPan(Il2CppVector2 delta) {
		return ((T (*)(UIProgressBar*, Il2CppVector2))(Il2CppBase() + 0x2F92FA4))(this, delta);
	}
	template <typename T = Il2CppVector3> T Value2WorldPosition(float val) {
		return ((T (*)(UIProgressBar*, float))(Il2CppBase() + 0x2F9319C))(this, val);
	}

};

}

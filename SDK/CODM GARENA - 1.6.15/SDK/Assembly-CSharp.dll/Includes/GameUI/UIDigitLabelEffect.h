#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIDigitLabelEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIDigitLabelEffect"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mReset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mPlaying() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& mValid() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& mDelayPlay() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& DigitFormat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowAsInteger() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ShortClamp() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& PlayOnEnabled() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = Il2CppVector3> T& ScaleOnPlay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mStartNumber() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mTargetNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSampleNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDigit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDigitText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Debug4Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD4E3C))(this);
	}
	template <typename T = void> T AutoSampleNumber() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD4E44))(this);
	}
	template <typename T = void> T Play(float numberStart, float numberEnd, bool fromBeginning) {
		return ((T (*)(UIDigitLabelEffect*, float, float, bool))(Il2CppBase() + 0x3AD4FAC))(this, numberStart, numberEnd, fromBeginning);
	}
	template <typename T = void> T SetDigit(int32_t num) {
		return ((T (*)(UIDigitLabelEffect*, int32_t))(Il2CppBase() + 0x3AD50C4))(this, num);
	}
	template <typename T = Il2CppString*> T GetDigitText(float number) {
		return ((T (*)(UIDigitLabelEffect*, float))(Il2CppBase() + 0x3AD5210))(this, number);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD5604))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD58F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD5A44))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD5B38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD5C0C))(this);
	}
	template <typename T = void> T Debug4Play() {
		return ((T (*)(UIDigitLabelEffect*))(Il2CppBase() + 0x3AD5F28))(this);
	}

};

}

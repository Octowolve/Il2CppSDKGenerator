#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFadeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFadeEffect"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& kDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& kAlphaLazy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& kAlphaDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& kPosLazy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& kPosDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& mTwAlpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mTwPosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mActive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& mPositionRecord() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& kOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Capture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIFadeEffect*))(Il2CppBase() + 0x3AD72F8))(this);
	}
	template <typename T = void> T Capture() {
		return ((T (*)(UIFadeEffect*))(Il2CppBase() + 0x3AD75E0))(this);
	}
	template <typename T = void> T Configure(uintptr_t direction) {
		return ((T (*)(UIFadeEffect*, uintptr_t))(Il2CppBase() + 0x3AD76F8))(this, direction);
	}
	template <typename T = void> T ResetToBeginning(bool forward) {
		return ((T (*)(UIFadeEffect*, bool))(Il2CppBase() + 0x3AD7B20))(this, forward);
	}
	template <typename T = void> T Play(bool forward, uintptr_t direction) {
		return ((T (*)(UIFadeEffect*, bool, uintptr_t))(Il2CppBase() + 0x3AD7C48))(this, forward, direction);
	}
	template <typename T = void> T OnFinished() {
		return ((T (*)(UIFadeEffect*))(Il2CppBase() + 0x3AD7F08))(this);
	}

};

}

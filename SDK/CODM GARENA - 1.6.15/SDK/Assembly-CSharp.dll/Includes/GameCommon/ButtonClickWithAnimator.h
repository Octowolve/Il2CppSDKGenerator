#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ButtonClickWithAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ButtonClickWithAnimator"));
	}

	template <typename T = uintptr_t> T& animtor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CallBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bBegin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& sumTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bHasInited() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bClickHasCheck() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Set(uintptr_t callback) {
		return ((T (*)(ButtonClickWithAnimator*, uintptr_t))(Il2CppBase() + 0x49F0428))(this, callback);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(ButtonClickWithAnimator*, bool))(Il2CppBase() + 0x49F07DC))(this, isPressed);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(ButtonClickWithAnimator*))(Il2CppBase() + 0x49F090C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ButtonClickWithAnimator*))(Il2CppBase() + 0x49F09B0))(this);
	}

};

}

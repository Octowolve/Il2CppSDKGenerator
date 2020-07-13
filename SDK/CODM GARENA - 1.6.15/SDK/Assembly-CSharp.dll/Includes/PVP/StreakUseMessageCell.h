#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class StreakUseMessageCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "StreakUseMessageCell"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BackgroundRed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BackgroundBlue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ActionText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& StreakSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& StreakName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& kPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kFadeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& bCostTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& infoQueue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& curShowInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& bShowingTween() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B21500))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B21658))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(StreakUseMessageCell*, float))(Il2CppBase() + 0x2B21738))(this, dt);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B2165C))(this);
	}
	template <typename T = void> T ClearTweens() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B21A58))(this);
	}
	template <typename T = void> T PushData(uintptr_t info) {
		return ((T (*)(StreakUseMessageCell*, uintptr_t))(Il2CppBase() + 0x2B21B8C))(this, info);
	}
	template <typename T = void> T ResetToShow() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B217FC))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(StreakUseMessageCell*))(Il2CppBase() + 0x2B21C6C))(this);
	}
	template <typename T = void> T SetTween(bool isForward) {
		return ((T (*)(StreakUseMessageCell*, bool))(Il2CppBase() + 0x2B2191C))(this, isForward);
	}

};

}

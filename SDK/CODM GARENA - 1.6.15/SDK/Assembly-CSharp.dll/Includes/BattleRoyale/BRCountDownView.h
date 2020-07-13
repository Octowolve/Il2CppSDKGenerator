#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRCountDownView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRCountDownView"));
	}

	template <typename T = Il2CppString*> static T& AnimatorLowName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AnimatorMiddleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AnimatorHighName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDownLabel_High() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CountDownLabel_Middle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CountDownLabel_Low() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& WinningTimeLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WinningTimeTweenAlpha() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_TargetRoundEndTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_LastDisplayTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CountDownType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCountDownChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWinningTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCountDownType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCountLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRCountDownView*))(Il2CppBase() + 0x25127B8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRCountDownView*))(Il2CppBase() + 0x25127C0))(this);
	}
	template <typename T = void> T OnBRCountDownChanged(int32_t countDown) {
		return ((T (*)(BRCountDownView*, int32_t))(Il2CppBase() + 0x2512574))(this, countDown);
	}
	template <typename T = uintptr_t> T CloseWinningTime() {
		return ((T (*)(BRCountDownView*))(Il2CppBase() + 0x2512B20))(this);
	}
	template <typename T = void> T SetCountDownType(float countDown) {
		return ((T (*)(BRCountDownView*, float))(Il2CppBase() + 0x25129A0))(this, countDown);
	}
	template <typename T = void> T SetCountLabel(float time) {
		return ((T (*)(BRCountDownView*, float))(Il2CppBase() + 0x25127CC))(this, time);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRCountDownView*))(Il2CppBase() + 0x2512C08))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRCountDownView*, float))(Il2CppBase() + 0x2512C10))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRCountDownView*, float))(Il2CppBase() + 0x2512CFC))(this, P0);
	}

};

}

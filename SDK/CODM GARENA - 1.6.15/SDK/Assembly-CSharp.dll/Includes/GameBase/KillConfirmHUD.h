#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class KillConfirmHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "KillConfirmHUD"));
	}

	template <typename T = Il2CppString*> T& BlueIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& RedIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& widgetRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& labelInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CampIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& GoldObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& GoldInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& kPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& kFadeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mShow() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mShowStopper() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& kShowDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& RefreshTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mIsResetTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mRow() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Display() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowKillConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(KillConfirmHUD*))(Il2CppBase() + 0x2E23634))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(KillConfirmHUD*))(Il2CppBase() + 0x2E237A4))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(KillConfirmHUD*, float))(Il2CppBase() + 0x2E23A90))(this, dt);
	}
	template <typename T = void> T Display(bool show, bool instant, bool reset) {
		return ((T (*)(KillConfirmHUD*, bool, bool, bool))(Il2CppBase() + 0x2E23DD0))(this, show, instant, reset);
	}
	template <typename T = void> T ClearTweens() {
		return ((T (*)(KillConfirmHUD*))(Il2CppBase() + 0x2E23848))(this);
	}
	template <typename T = void> T SetRow(int32_t row, bool instant) {
		return ((T (*)(KillConfirmHUD*, int32_t, bool))(Il2CppBase() + 0x2E23F80))(this, row, instant);
	}
	template <typename T = void> T Fade(bool fadein) {
		return ((T (*)(KillConfirmHUD*, bool))(Il2CppBase() + 0x2E23BBC))(this, fadein);
	}
	template <typename T = void> T Bind(unsigned char killEvent, int16_t addGoldCount) {
		return ((T (*)(KillConfirmHUD*, unsigned char, int16_t))(Il2CppBase() + 0x2E241B4))(this, killEvent, addGoldCount);
	}
	template <typename T = void> T ShowKillConfirm(unsigned char killEvent, int16_t addGoldCount) {
		return ((T (*)(KillConfirmHUD*, unsigned char, int16_t))(Il2CppBase() + 0x2E2429C))(this, killEvent, addGoldCount);
	}

};

}

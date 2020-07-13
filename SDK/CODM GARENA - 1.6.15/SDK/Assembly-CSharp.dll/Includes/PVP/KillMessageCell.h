#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class KillMessageCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "KillMessageCell"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& kPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& NormalText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& KillerName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& WeaponSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DeadName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ThroughWall() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& HeadShot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& KillCountSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& KillCountLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& tweenPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Bg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& NormalBg() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> static T& kFadeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_messageHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mShow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& mShowStopper() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> static T& kShowDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& RefreshTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mIsResetTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mRow() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& kHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Display() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Bind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(KillMessageCell*))(Il2CppBase() + 0x3484DB0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(KillMessageCell*))(Il2CppBase() + 0x3484F24))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(KillMessageCell*, float))(Il2CppBase() + 0x34852F8))(this, dt);
	}
	template <typename T = void> T SetRow(int32_t row, bool instant, float msgPositionAdd) {
		return ((T (*)(KillMessageCell*, int32_t, bool, float))(Il2CppBase() + 0x3485638))(this, row, instant, msgPositionAdd);
	}
	template <typename T = void> T Display(bool show, bool instant, bool reset) {
		return ((T (*)(KillMessageCell*, bool, bool, bool))(Il2CppBase() + 0x34858A8))(this, show, instant, reset);
	}
	template <typename T = void> T ClearTweens() {
		return ((T (*)(KillMessageCell*))(Il2CppBase() + 0x34850A0))(this);
	}
	template <typename T = void> T Bind(uintptr_t data) {
		return ((T (*)(KillMessageCell*, uintptr_t))(Il2CppBase() + 0x3485A58))(this, data);
	}
	template <typename T = void> T BindJoin(uintptr_t data) {
		return ((T (*)(KillMessageCell*, uintptr_t))(Il2CppBase() + 0x3485B68))(this, data);
	}
	template <typename T = void> T BindKill(uintptr_t data) {
		return ((T (*)(KillMessageCell*, uintptr_t))(Il2CppBase() + 0x3485D54))(this, data);
	}
	template <typename T = void> T Fade(bool fadein) {
		return ((T (*)(KillMessageCell*, bool))(Il2CppBase() + 0x3485424))(this, fadein);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ADSButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ADSButtonView"));
	}

	template <typename T = uintptr_t> T& cachedTransform() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BGSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FrontSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AimSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpecialFrontSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& cachedTweenAlpha() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> static T& FADE_OUT_ALPHA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TWEEN_ALPHA_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenAimStateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66478))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66584))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66640))(this);
	}
	template <typename T = void> T InitFromConfig(uintptr_t btnConfig, uintptr_t type) {
		return ((T (*)(ADSButtonView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B6676C))(this, btnConfig, type);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B6683C))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66844))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ADSButtonView*, float))(Il2CppBase() + 0x3B668E8))(this, dt);
	}
	template <typename T = void> T SwitchOpenAimStateIcon() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66AA4))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66EF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitFromConfig(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ADSButtonView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B66F00))(this, P0, P1);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66F08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ADSButtonView*, float))(Il2CppBase() + 0x3B66F10))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(ADSButtonView*))(Il2CppBase() + 0x3B66F18))(this);
	}

};

}

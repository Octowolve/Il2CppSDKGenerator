#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SelfExplodingButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SelfExplodingButtonView"));
	}

	template <typename T = uintptr_t> T& cachedTransform() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ExplodingWidget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CloseWidget() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Container2() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_bExploding() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenAimStateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfExplodingButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFD9CC))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFDAD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFDAE4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFDD34))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFDD3C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SelfExplodingButtonView*, float))(Il2CppBase() + 0x2DFDDE0))(this, dt);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFD86C))(this);
	}
	template <typename T = void> T SwitchOpenAimStateIcon() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFDF9C))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE194))(this);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE234))(this);
	}
	template <typename T = void> T SelfExplodingButtonClick(uintptr_t obj) {
		return ((T (*)(SelfExplodingButtonView*, uintptr_t))(Il2CppBase() + 0x2DFE308))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE4F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE4F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SelfExplodingButtonView*, float))(Il2CppBase() + 0x2DFE500))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE508))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(SelfExplodingButtonView*))(Il2CppBase() + 0x2DFE510))(this);
	}

};

}

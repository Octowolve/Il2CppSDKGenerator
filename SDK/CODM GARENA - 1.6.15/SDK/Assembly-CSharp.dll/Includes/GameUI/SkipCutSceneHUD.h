#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SkipCutSceneHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SkipCutSceneHUD"));
	}

	template <typename T = uintptr_t> T& ThisWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FullScreenButton() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickShowSkipButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideSkipButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SkipCutSceneHUD*))(Il2CppBase() + 0x3C9E960))(this);
	}
	template <typename T = void> T OnSkipButtonClick() {
		return ((T (*)(SkipCutSceneHUD*))(Il2CppBase() + 0x3C9EC50))(this);
	}
	template <typename T = void> T OnClickShowSkipButton() {
		return ((T (*)(SkipCutSceneHUD*))(Il2CppBase() + 0x3C9EE24))(this);
	}
	template <typename T = void> T HideSkipButton() {
		return ((T (*)(SkipCutSceneHUD*))(Il2CppBase() + 0x3C9EF4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SkipCutSceneHUD*))(Il2CppBase() + 0x3C9F044))(this);
	}

};

}

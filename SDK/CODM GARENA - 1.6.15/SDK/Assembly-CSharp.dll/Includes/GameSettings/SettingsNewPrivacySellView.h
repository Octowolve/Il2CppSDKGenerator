#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewPrivacySellView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewPrivacySellView"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ParentWidget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& UrlBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& UrlLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& StatusLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ConfirmLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitInfo() {
		return ((T (*)(SettingsNewPrivacySellView*))(Il2CppBase() + 0x28930D8))(this);
	}
	template <typename T = void> T PlayCloseAnimation() {
		return ((T (*)(SettingsNewPrivacySellView*))(Il2CppBase() + 0x2892C80))(this);
	}

};

}

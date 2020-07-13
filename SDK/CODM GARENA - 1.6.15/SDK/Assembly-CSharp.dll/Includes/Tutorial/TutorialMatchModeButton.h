#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialMatchModeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialMatchModeButton"));
	}

	template <typename T = uintptr_t> T& SelectButton() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SelectedEffectGameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BgSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ArrowSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LockBgSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& MatchModeType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& SELECTED_BG_SPRITE_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UNSELECTED_BG_SPRITE_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& SELECTED_ARROW_SPRITE_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& UNSELECTED_ARROW_SPRITE_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectedEffectVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Selected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Canceled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TutorialMatchModeButton*))(Il2CppBase() + 0x4243994))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TutorialMatchModeButton*))(Il2CppBase() + 0x4243B00))(this);
	}
	template <typename T = void> T OnSelectButtonClick() {
		return ((T (*)(TutorialMatchModeButton*))(Il2CppBase() + 0x4243C6C))(this);
	}
	template <typename T = void> T SetSelectedEffectVisibility(bool visible) {
		return ((T (*)(TutorialMatchModeButton*, bool))(Il2CppBase() + 0x4243E2C))(this, visible);
	}
	template <typename T = void> T SetBgSprite(bool isSelected) {
		return ((T (*)(TutorialMatchModeButton*, bool))(Il2CppBase() + 0x4243F24))(this, isSelected);
	}
	template <typename T = void> T Selected() {
		return ((T (*)(TutorialMatchModeButton*))(Il2CppBase() + 0x4244190))(this);
	}
	template <typename T = void> T Canceled() {
		return ((T (*)(TutorialMatchModeButton*))(Il2CppBase() + 0x4244274))(this);
	}

};

}

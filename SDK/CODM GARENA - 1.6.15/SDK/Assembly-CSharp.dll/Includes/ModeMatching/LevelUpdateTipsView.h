#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class LevelUpdateTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "LevelUpdateTipsView"));
	}

	template <typename T = uintptr_t> T& m_OkButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_OldLevelLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_NewLevelLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_OldLevelNickLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_NewLevelNickLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_TitleSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_UnlockItemLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_OldTitleSprrite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_UnlockScrollView() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_UnlockSprite() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ItemPanel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_BgbackGround() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_BottomRightAnchor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelUpLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStaminaUpLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitleTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollViewWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LevelUpdateTipsView*))(Il2CppBase() + 0x3302E58))(this);
	}
	template <typename T = void> T SetLevelUpLabel(int32_t oldlevel, int32_t newlevel, Il2CppString* spritepath, Il2CppString* oldsprite) {
		return ((T (*)(LevelUpdateTipsView*, int32_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3303004))(this, oldlevel, newlevel, spritepath, oldsprite);
	}
	template <typename T = void> T SetStaminaUpLabel(int32_t olddata, int32_t newdata) {
		return ((T (*)(LevelUpdateTipsView*, int32_t, int32_t))(Il2CppBase() + 0x33031CC))(this, olddata, newdata);
	}
	template <typename T = void> T SetTitleTexture(Il2CppString* texturename, Il2CppString* titlename, Il2CppString* oldtitlename) {
		return ((T (*)(LevelUpdateTipsView*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3303280))(this, texturename, titlename, oldtitlename);
	}
	template <typename T = void> T HideItemView() {
		return ((T (*)(LevelUpdateTipsView*))(Il2CppBase() + 0x3303398))(this);
	}
	template <typename T = void> T SetScrollViewWidth(float width) {
		return ((T (*)(LevelUpdateTipsView*, float))(Il2CppBase() + 0x3303490))(this, width);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LevelUpdateTipsView*))(Il2CppBase() + 0x3303690))(this);
	}

};

}

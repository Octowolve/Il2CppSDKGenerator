#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIImageButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIImageButton"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& normalSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& hoverSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& pressedSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& disabledSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& pixelSnap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(UIImageButton*))(Il2CppBase() + 0x39F2470))(this);
	}
	template <typename T = void> T set_isEnabled(bool value) {
		return ((T (*)(UIImageButton*, bool))(Il2CppBase() + 0x39F2578))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIImageButton*))(Il2CppBase() + 0x39F2828))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIImageButton*))(Il2CppBase() + 0x39F294C))(this);
	}
	template <typename T = void> T UpdateImage() {
		return ((T (*)(UIImageButton*))(Il2CppBase() + 0x39F26A0))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(UIImageButton*, bool))(Il2CppBase() + 0x39F2D74))(this, isOver);
	}
	template <typename T = void> T OnPress(bool pressed) {
		return ((T (*)(UIImageButton*, bool))(Il2CppBase() + 0x39F2EB0))(this, pressed);
	}
	template <typename T = void> T SetSprite(Il2CppString* sprite) {
		return ((T (*)(UIImageButton*, Il2CppString*))(Il2CppBase() + 0x39F2BE4))(this, sprite);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UISpriteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISpriteData"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& x() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& y() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& borderLeft() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& borderRight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& borderTop() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& borderBottom() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& paddingLeft() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& paddingRight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& paddingTop() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& paddingBottom() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyBorderFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_hasBorder() {
		return ((T (*)(UISpriteData*))(Il2CppBase() + 0x2FA8970))(this);
	}
	template <typename T = bool> T get_hasPadding() {
		return ((T (*)(UISpriteData*))(Il2CppBase() + 0x2FAC128))(this);
	}
	template <typename T = void> T SetRect(int32_t x, int32_t y, int32_t width, int32_t height) {
		return ((T (*)(UISpriteData*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2FAC148))(this, x, y, width, height);
	}
	template <typename T = void> T SetPadding(int32_t left, int32_t bottom, int32_t right, int32_t top) {
		return ((T (*)(UISpriteData*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2FAC220))(this, left, bottom, right, top);
	}
	template <typename T = void> T SetBorder(int32_t left, int32_t bottom, int32_t right, int32_t top) {
		return ((T (*)(UISpriteData*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2FAC2F8))(this, left, bottom, right, top);
	}
	template <typename T = void> T CopyFrom(uintptr_t sd) {
		return ((T (*)(UISpriteData*, uintptr_t))(Il2CppBase() + 0x2FAC3D0))(this, sd);
	}
	template <typename T = void> T CopyBorderFrom(uintptr_t sd) {
		return ((T (*)(UISpriteData*, uintptr_t))(Il2CppBase() + 0x2FAC4EC))(this, sd);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIButton"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& dragHighlight() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& hoverSprite() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& pressedSprite() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& disabledSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& hoverSprite2D() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& pressedSprite2D() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& disabledSprite2D() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& pixelSnap() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onClick() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onClickForTLog() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& clickSound() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> static T& DisableClickSoundValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& mGo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mSprite2D() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& mNormalSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mNormalSprite2D() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& clickInterval() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableUIButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_cachedGameObject() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A6C9C))(this);
	}
	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A6D6C))(this);
	}
	template <typename T = void> T set_isEnabled(bool value) {
		return ((T (*)(UIButton*, bool))(Il2CppBase() + 0x39A6E98))(this, value);
	}
	template <typename T = Il2CppString*> T get_normalSprite() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A704C))(this);
	}
	template <typename T = void> T set_normalSprite(Il2CppString* value) {
		return ((T (*)(UIButton*, Il2CppString*))(Il2CppBase() + 0x39A7080))(this, value);
	}
	template <typename T = uintptr_t> T get_normalSprite2D() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A74D0))(this);
	}
	template <typename T = void> T set_normalSprite2D(uintptr_t value) {
		return ((T (*)(UIButton*, uintptr_t))(Il2CppBase() + 0x39A7504))(this, value);
	}
	template <typename T = void> T OnInit() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A78FC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A7F80))(this);
	}
	template <typename T = void> T OnDragOver() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A8468))(this);
	}
	template <typename T = void> T OnDragOut() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A8788))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A8AA8))(this);
	}
	template <typename T = void> T DisableClickSound() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A90A4))(this);
	}
	template <typename T = void> T SetState(uintptr_t state, bool immediate) {
		return ((T (*)(UIButton*, uintptr_t, bool))(Il2CppBase() + 0x39A91B0))(this, state, immediate);
	}
	template <typename T = void> T SetSprite(Il2CppString* sp) {
		return ((T (*)(UIButton*, Il2CppString*))(Il2CppBase() + 0x39A72A0))(this, sp);
	}
	template <typename T = void> T SetSprite_1(uintptr_t sp) {
		return ((T (*)(UIButton*, uintptr_t))(Il2CppBase() + 0x39A76D0))(this, sp);
	}
	template <typename T = void> T EnableUIButton() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A95A4))(this);
	}
	template <typename T = void> T PlayClickSound() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A8E78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnInit() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A9718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A971C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragOver() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A9A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragOut() {
		return ((T (*)(UIButton*))(Il2CppBase() + 0x39A9A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetState(uintptr_t P0, bool P1) {
		return ((T (*)(UIButton*, uintptr_t, bool))(Il2CppBase() + 0x39A9A24))(this, P0, P1);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIKeyBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIKeyBinding"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& mList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& keyCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& modifier() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mIgnoreUp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsInput() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& mPress() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModifierActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsModifierActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindingPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindingClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveModifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = Il2CppString*> T get_captionText() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F503C0))(this);
	}
	template <typename T = bool> static T IsBound(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F50590))(0, key);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F507E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F50920))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F50A60))(this);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F50C48))(this);
	}
	template <typename T = bool> T IsModifierActive() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F50D84))(this);
	}
	template <typename T = bool> static T IsModifierActive_1(uintptr_t modifier) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F50E7C))(0, modifier);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F51484))(this);
	}
	template <typename T = void> T OnBindingPress(bool pressed) {
		return ((T (*)(UIKeyBinding*, bool))(Il2CppBase() + 0x2F518C0))(this, pressed);
	}
	template <typename T = void> T OnBindingClick() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F51A3C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F51B90))(this);
	}
	template <typename T = Il2CppString*> static T GetString(uintptr_t keyCode, uintptr_t modifier) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F51C90))(0, keyCode, modifier);
	}
	template <typename T = bool> static T GetKeyCode(Il2CppString* text, uintptr_t* key, uintptr_t* modifier) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2F51E74))(0, text, key, modifier);
	}
	template <typename T = uintptr_t> static T GetActiveModifier() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F523EC))(0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(UIKeyBinding*))(Il2CppBase() + 0x2F527FC))(this);
	}

};

}

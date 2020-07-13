#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UITooltip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITooltip"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& uiCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tooltipRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& appearSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& scalingTransitions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTooltip() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mCurrent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& mPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& mSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mWidgets() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> static T get_isVisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x41FAE14))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UITooltip*))(Il2CppBase() + 0x41FAF2C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UITooltip*))(Il2CppBase() + 0x41FAFCC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITooltip*))(Il2CppBase() + 0x41FB070))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITooltip*))(Il2CppBase() + 0x41FB260))(this);
	}
	template <typename T = void> T SetAlpha(float val) {
		return ((T (*)(UITooltip*, float))(Il2CppBase() + 0x41FB5E4))(this, val);
	}
	template <typename T = void> T SetText(Il2CppString* tooltipText) {
		return ((T (*)(UITooltip*, Il2CppString*))(Il2CppBase() + 0x41FB7A8))(this, tooltipText);
	}
	template <typename T = void> static T ShowText(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x41FC70C))(0, text);
	}
	template <typename T = void> static T Show(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x41FC844))(0, text);
	}
	template <typename T = void> static T Hide() {
		return ((T (*)(void *))(Il2CppBase() + 0x41FC97C))(0);
	}

};

}

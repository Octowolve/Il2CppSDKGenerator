#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIStretch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIStretch"));
	}

	template <typename T = uintptr_t> T& uiCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& runOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& relativeSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& initialSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector2> T& borderPadding() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& widgetContainer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mRoot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mAnim() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppRect> T& mRect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& NumAnchorsWaiting() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bNeedRecursive() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& children() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenSizeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD004))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD340))(this);
	}
	template <typename T = void> T ScreenSizeChanged() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD594))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD65C))(this);
	}
	template <typename T = void> T DelayUpdateAnchor() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD918))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAD9E0))(this);
	}
	template <typename T = void> T ForceUpdate(bool recursive) {
		return ((T (*)(UIStretch*, bool))(Il2CppBase() + 0x2FAEFEC))(this, recursive);
	}
	template <typename T = void> T RunOnce() {
		return ((T (*)(UIStretch*))(Il2CppBase() + 0x2FAF0A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate(bool P0) {
		return ((T (*)(UIStretch*, bool))(Il2CppBase() + 0x2FAF158))(this, P0);
	}

};

}

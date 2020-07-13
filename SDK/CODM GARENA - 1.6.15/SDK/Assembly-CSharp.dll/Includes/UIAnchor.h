#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAnchor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAnchor"));
	}

	template <typename T = uintptr_t> T& uiCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& side() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& runOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& relativeOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& pixelOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& widgetContainer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mAnim() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppRect> T& mRect() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mRoot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> static T& uiAnchorAlwaysUpdateEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mUpdateAnchor() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = int32_t> T& NumAnchorsWaiting() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenSizeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateAnchor_Editor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUpdateAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAnchorOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425DD6C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425E01C))(this);
	}
	template <typename T = void> T ScreenSizeChanged() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425E2A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425F960))(this);
	}
	template <typename T = void> T ForceUpdateAnchor_Editor() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425FC2C))(this);
	}
	template <typename T = void> T ForceUpdateAnchor(bool bForce, bool bTryFindCamera) {
		return ((T (*)(UIAnchor*, bool, bool))(Il2CppBase() + 0x425FD10))(this, bForce, bTryFindCamera);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425FEFC))(this);
	}
	template <typename T = void> T DelayUpdateAnchor() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x4260028))(this);
	}
	template <typename T = void> T UpdateAnchorOnce() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x425E38C))(this);
	}
	template <typename T = void> T ForceUpdate(bool recursive) {
		return ((T (*)(UIAnchor*, bool))(Il2CppBase() + 0x4260338))(this, recursive);
	}
	template <typename T = void> T ResetUICamera() {
		return ((T (*)(UIAnchor*))(Il2CppBase() + 0x426041C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate(bool P0) {
		return ((T (*)(UIAnchor*, bool))(Il2CppBase() + 0x4260534))(this, P0);
	}

};

}

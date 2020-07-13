#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadingView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadingView"));
	}

	template <typename T = uintptr_t> T& m_Panel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_LabelTips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_SpriteBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_BoxColliderBg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_LoadingFX() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_ContainerTrans() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& m_DefaultMaskSpriteName() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_HideCallback() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderLoadingView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelayHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetRenderLoadingView(bool bIsShow) {
		return ((T (*)(LoadingView*, bool))(Il2CppBase() + 0x233E47C))(this, bIsShow);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadingView*))(Il2CppBase() + 0x2341118))(this);
	}
	template <typename T = void> T SetData(Il2CppString* tips, bool blockTouch, bool showMask) {
		return ((T (*)(LoadingView*, Il2CppString*, bool, bool))(Il2CppBase() + 0x233E9F8))(this, tips, blockTouch, showMask);
	}
	template <typename T = void> T DelayHide(uintptr_t callback, float seconds) {
		return ((T (*)(LoadingView*, uintptr_t, float))(Il2CppBase() + 0x233EC44))(this, callback, seconds);
	}
	template <typename T = void> T OnDelayHide() {
		return ((T (*)(LoadingView*))(Il2CppBase() + 0x23413A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LoadingView*))(Il2CppBase() + 0x2341460))(this);
	}

};

}

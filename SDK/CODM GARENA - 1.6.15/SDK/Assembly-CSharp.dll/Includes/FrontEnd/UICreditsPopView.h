#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class UICreditsPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "UICreditsPopView"));
	}

	template <typename T = uintptr_t> T& flowGrid() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& scrollViewPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& template() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& accelerateBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& targetVec() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& scrollSpeed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& normalSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& accelerateSpeed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& bSlerpScroll_() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tweenOnUpdateCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SlerpScrollTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyCreditsPopViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T UIInit() {
		return ((T (*)(UICreditsPopView*))(Il2CppBase() + 0x387E578))(this);
	}
	template <typename T = void> T StartFadeIn(float time) {
		return ((T (*)(UICreditsPopView*, float))(Il2CppBase() + 0x387FCF0))(this, time);
	}
	template <typename T = void> T StopFadeIn() {
		return ((T (*)(UICreditsPopView*))(Il2CppBase() + 0x387EC7C))(this);
	}
	template <typename T = void> T tweenOnUpdateCallBack(float value) {
		return ((T (*)(UICreditsPopView*, float))(Il2CppBase() + 0x3880498))(this, value);
	}
	template <typename T = void> T SlerpScrollTo(Il2CppVector3 TargetVec, float dt) {
		return ((T (*)(UICreditsPopView*, Il2CppVector3, float))(Il2CppBase() + 0x3880568))(this, TargetVec, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(UICreditsPopView*))(Il2CppBase() + 0x38808DC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(UICreditsPopView*, float))(Il2CppBase() + 0x38808E4))(this, dt);
	}
	template <typename T = void> T NotifyCreditsPopViewClose() {
		return ((T (*)(UICreditsPopView*))(Il2CppBase() + 0x38807F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UICreditsPopView*, float))(Il2CppBase() + 0x38809D4))(this, P0);
	}

};

}

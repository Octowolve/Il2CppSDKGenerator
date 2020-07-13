#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SelfExplodingProgressHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SelfExplodingProgressHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ExplodingProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsInExplodingProgress() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_TimeInExplodingProgress() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_SelfExplodingTotalTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenProgressBarValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExplodProgressCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = float> T get_SelfExplodingTotalTime() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFE5C4))(this);
	}
	template <typename T = void> T set_SelfExplodingTotalTime(float value) {
		return ((T (*)(SelfExplodingProgressHUD*, float))(Il2CppBase() + 0x2DFE5CC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFE5D4))(this);
	}
	template <typename T = void> T SetOpenProgressBarValue(float value) {
		return ((T (*)(SelfExplodingProgressHUD*, float))(Il2CppBase() + 0x2DFE740))(this, value);
	}
	template <typename T = bool> T IsNeedHide() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFE8AC))(this);
	}
	template <typename T = void> T Reset(bool bActive) {
		return ((T (*)(SelfExplodingProgressHUD*, bool))(Il2CppBase() + 0x2DFE98C))(this, bActive);
	}
	template <typename T = void> T ShowUI(bool bShow) {
		return ((T (*)(SelfExplodingProgressHUD*, bool))(Il2CppBase() + 0x2DFEAF0))(this, bShow);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFECE0))(this);
	}
	template <typename T = void> T ExplodProgressCompleted() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFEF9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SelfExplodingProgressHUD*))(Il2CppBase() + 0x2DFF050))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UITabPageSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UITabPageSwitch"));
	}

	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Curve() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PageCfg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mCurrentPage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mTargetPage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mEscapedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mIsSwitching() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mCachedPageName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCachedCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITabPageSwitch*))(Il2CppBase() + 0x49FF9E0))(this);
	}
	template <typename T = void> T FadeIn(Il2CppString* name, uintptr_t callback) {
		return ((T (*)(UITabPageSwitch*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x49FFC18))(this, name, callback);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITabPageSwitch*))(Il2CppBase() + 0x49FFF84))(this);
	}

};

}

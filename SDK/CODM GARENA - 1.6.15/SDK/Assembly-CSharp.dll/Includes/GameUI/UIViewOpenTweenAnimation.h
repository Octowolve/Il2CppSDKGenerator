#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIViewOpenTweenAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIViewOpenTweenAnimation"));
	}

	template <typename T = uintptr_t> T& tweenAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tweenScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIViewOpenTweenAnimation*))(Il2CppBase() + 0x2A1FC6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIViewOpenTweenAnimation*))(Il2CppBase() + 0x2A1FFBC))(this);
	}
	template <typename T = void> T PlayAnimation() {
		return ((T (*)(UIViewOpenTweenAnimation*))(Il2CppBase() + 0x2A20060))(this);
	}

};

}

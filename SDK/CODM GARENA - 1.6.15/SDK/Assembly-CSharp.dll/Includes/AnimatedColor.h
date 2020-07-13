#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatedColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatedColor"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AnimatedColor*))(Il2CppBase() + 0x22B4288))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimatedColor*))(Il2CppBase() + 0x22B4354))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatedWidget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatedWidget"));
	}

	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mWidget() {
		return *(T*)((uintptr_t)this + 0x14);
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
		return ((T (*)(AnimatedWidget*))(Il2CppBase() + 0x22B44DC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimatedWidget*))(Il2CppBase() + 0x22B45A8))(this);
	}

};

}

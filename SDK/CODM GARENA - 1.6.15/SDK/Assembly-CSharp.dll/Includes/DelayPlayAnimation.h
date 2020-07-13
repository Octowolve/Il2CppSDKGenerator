#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayPlayAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayPlayAnimation"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& delayTimeRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedPlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DelayPlayAnimation*))(Il2CppBase() + 0x4173FAC))(this);
	}
	template <typename T = void> T DelayedPlayAnimation() {
		return ((T (*)(DelayPlayAnimation*))(Il2CppBase() + 0x4174184))(this);
	}

};

}

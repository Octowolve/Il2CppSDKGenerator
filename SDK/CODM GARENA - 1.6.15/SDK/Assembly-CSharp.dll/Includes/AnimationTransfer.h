#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationTransfer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationTransfer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToAnimationCurves() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T ConvertToAnimationCurves(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22B5394))(0, data);
	}

};

}

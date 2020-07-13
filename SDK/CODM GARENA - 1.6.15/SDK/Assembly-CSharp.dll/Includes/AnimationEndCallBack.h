#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEndCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEndCallBack"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetPawnTarget() {
		return ((T (*)(AnimationEndCallBack*))(Il2CppBase() + 0x22B4AC4))(this);
	}
	template <typename T = uintptr_t> T GetRootObject() {
		return ((T (*)(AnimationEndCallBack*))(Il2CppBase() + 0x22B4E60))(this);
	}

};

}

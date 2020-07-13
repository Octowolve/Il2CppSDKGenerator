#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RealTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealTime"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T get_time() {
		return ((T (*)(void *))(Il2CppBase() + 0x382548C))(0);
	}
	template <typename T = float> static T get_deltaTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x3825498))(0);
	}

};

}

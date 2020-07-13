#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastEffectAdaptation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastEffectAdaptation"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ShirinkAdaptationMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T ShirinkAdaptationMethod() {
		return ((T (*)(void *))(Il2CppBase() + 0x35C39F8))(0);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class EnumExt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "EnumExt"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_HasFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T HasFlag(uintptr_t value, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x420D620))(0, value, flags);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance {

class PerformanceControlMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance", "PerformanceControlMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Automatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Manual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& System() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

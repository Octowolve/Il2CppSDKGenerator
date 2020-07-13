#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class MathfInternal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "MathfInternal"));
	}

	template <typename T = float> static T& FloatMinNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FloatMinDenormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& IsFlushToZeroEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}


};

}

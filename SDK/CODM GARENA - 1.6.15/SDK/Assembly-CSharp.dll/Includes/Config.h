#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Config"));
	}

	template <typename T = Il2CppVector2> T& fitRange() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& initSampleCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& estExtraSampleCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& maxIterationTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& drevWeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A0ED18))(0);
	}

};

}

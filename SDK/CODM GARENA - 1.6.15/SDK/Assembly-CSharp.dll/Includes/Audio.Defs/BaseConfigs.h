#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class BaseConfigs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "BaseConfigs"));
	}

	template <typename T = float> static T& GrenadeDetRanY1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& GrenadeDetRanXZ1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& GrenadeDetRanY3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& GrenadeDetRanXZ3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& kImpactSndPlayInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& Detect3PPawnWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}


};

}

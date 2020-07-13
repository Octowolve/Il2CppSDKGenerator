#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class CircleWaitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "CircleWaitConfig"));
	}

	template <typename T = float> T& CircleWaitTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CircleRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SpeedMultiplier() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

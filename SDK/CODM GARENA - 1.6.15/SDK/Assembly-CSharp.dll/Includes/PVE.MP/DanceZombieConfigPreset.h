#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DanceZombieConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DanceZombieConfigPreset"));
	}

	template <typename T = int32_t> T& IsInitiative() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& OriginalIdleAnim() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomDanceAnim() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

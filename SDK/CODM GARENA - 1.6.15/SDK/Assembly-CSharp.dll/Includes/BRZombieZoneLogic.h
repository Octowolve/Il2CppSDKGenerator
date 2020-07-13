#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRZombieZoneLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRZombieZoneLogic"));
	}

	template <typename T = int32_t> T& minActivation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& maxActivation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& waveLogicList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_ServerOnly() {
		return ((T (*)(BRZombieZoneLogic*))(Il2CppBase() + 0x52FC470))(this);
	}

};

}

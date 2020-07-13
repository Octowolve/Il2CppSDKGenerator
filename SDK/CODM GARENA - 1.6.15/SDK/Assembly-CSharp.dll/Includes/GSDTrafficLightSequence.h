#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDTrafficLightSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDTrafficLightSequence"));
	}

	template <typename T = bool> T& bLightMasterPath1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& iLightController() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& iLightSubcontroller() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& tTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T ToStringGSD() {
		return ((T (*)(GSDTrafficLightSequence*))(Il2CppBase() + 0x3E338E0))(this);
	}

};

}

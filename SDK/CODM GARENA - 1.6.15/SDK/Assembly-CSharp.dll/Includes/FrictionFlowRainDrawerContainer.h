#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrictionFlowRainDrawerContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrictionFlowRainDrawerContainer"));
	}

	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& initRnd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& posXDt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& rnd1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fluctuationRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& acceleration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& startPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& fallForce() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& TimeElapsed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& lifetime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsEnable() {
		return ((T (*)(FrictionFlowRainDrawerContainer*))(Il2CppBase() + 0x3CDFA3C))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Settings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "Settings"));
	}

	template <typename T = float> T& damperForSpring() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& maxForceMlp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& IMlp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& velocityF() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& copOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& torqueMlp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& maxTorqueMag() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}

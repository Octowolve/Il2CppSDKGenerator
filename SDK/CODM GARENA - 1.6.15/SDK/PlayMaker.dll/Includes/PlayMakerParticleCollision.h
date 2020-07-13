#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerParticleCollision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerParticleCollision"));
	}


	template <typename T = void> T OnParticleCollision(uintptr_t other) {
		return ((T (*)(PlayMakerParticleCollision*, uintptr_t))(Il2CppBase() + 0x5146E8C))(this, other);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerEnter2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerEnter2D"));
	}


	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerEnter2D*, uintptr_t))(Il2CppBase() + 0x514928C))(this, other);
	}

};

}

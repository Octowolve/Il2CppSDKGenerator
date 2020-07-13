#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerStay2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerStay2D"));
	}


	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerStay2D*, uintptr_t))(Il2CppBase() + 0x514958C))(this, other);
	}

};

}

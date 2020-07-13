#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerExit"));
	}


	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerExit*, uintptr_t))(Il2CppBase() + 0x514934C))(this, other);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerExit2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerExit2D"));
	}


	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerExit2D*, uintptr_t))(Il2CppBase() + 0x514940C))(this, other);
	}

};

}

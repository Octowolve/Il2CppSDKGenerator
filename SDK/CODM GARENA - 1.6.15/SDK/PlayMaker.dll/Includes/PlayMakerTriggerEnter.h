#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerEnter"));
	}


	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerEnter*, uintptr_t))(Il2CppBase() + 0x51491CC))(this, other);
	}

};

}

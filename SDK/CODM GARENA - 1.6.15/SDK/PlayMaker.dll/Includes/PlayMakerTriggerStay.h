#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerTriggerStay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerTriggerStay"));
	}


	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(PlayMakerTriggerStay*, uintptr_t))(Il2CppBase() + 0x51494CC))(this, other);
	}

};

}

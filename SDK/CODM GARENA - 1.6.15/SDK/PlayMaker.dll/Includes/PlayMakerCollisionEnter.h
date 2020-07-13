#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionEnter"));
	}


	template <typename T = void> T OnCollisionEnter(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionEnter*, uintptr_t))(Il2CppBase() + 0x513BCF8))(this, collisionInfo);
	}

};

}

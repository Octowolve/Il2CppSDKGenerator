#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionEnter2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionEnter2D"));
	}


	template <typename T = void> T OnCollisionEnter2D(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionEnter2D*, uintptr_t))(Il2CppBase() + 0x513BDB8))(this, collisionInfo);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionExit2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionExit2D"));
	}


	template <typename T = void> T OnCollisionExit2D(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionExit2D*, uintptr_t))(Il2CppBase() + 0x513BF38))(this, collisionInfo);
	}

};

}

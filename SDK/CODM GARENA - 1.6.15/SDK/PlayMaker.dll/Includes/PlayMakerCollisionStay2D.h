#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionStay2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionStay2D"));
	}


	template <typename T = void> T OnCollisionStay2D(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionStay2D*, uintptr_t))(Il2CppBase() + 0x513C0B8))(this, collisionInfo);
	}

};

}

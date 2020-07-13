#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionStay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionStay"));
	}


	template <typename T = void> T OnCollisionStay(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionStay*, uintptr_t))(Il2CppBase() + 0x513BFF8))(this, collisionInfo);
	}

};

}

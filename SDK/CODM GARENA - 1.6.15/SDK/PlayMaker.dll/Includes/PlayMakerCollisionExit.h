#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerCollisionExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerCollisionExit"));
	}


	template <typename T = void> T OnCollisionExit(uintptr_t collisionInfo) {
		return ((T (*)(PlayMakerCollisionExit*, uintptr_t))(Il2CppBase() + 0x513BE78))(this, collisionInfo);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerControllerColliderHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerControllerColliderHit"));
	}


	template <typename T = void> T OnControllerColliderHit(uintptr_t hitCollider) {
		return ((T (*)(PlayMakerControllerColliderHit*, uintptr_t))(Il2CppBase() + 0x513C178))(this, hitCollider);
	}

};

}

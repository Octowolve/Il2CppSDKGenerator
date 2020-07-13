#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraCarrierTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraCarrierTakeDamageComponent"));
	}


	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(CameraCarrierTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4190FE0))(this, pawn, damageInfo);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PlayerTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PlayerTakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(PlayerTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1709694))(this, pawn, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(PlayerTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1709A30))(this, pawn, damageInfo);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AITakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AITakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(AITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49B58A8))(this, pawn, damageInfo);
	}
	template <typename T = void> T PlayTakeDamageSound(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(AITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49B5CC0))(this, pawn, damageInfo);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AITakeDamageComponent*, float))(Il2CppBase() + 0x49B6290))(this, deltaTime);
	}

};

}

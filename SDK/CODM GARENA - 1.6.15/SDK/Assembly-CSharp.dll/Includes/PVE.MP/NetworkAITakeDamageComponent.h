#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAITakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAITakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA58C8))(this, pawn, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA5940))(this, pawn, damageInfo);
	}
	template <typename T = void> T PlayInstanceKillEffect(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA5D28))(this, pawn, damageInfo);
	}
	template <typename T = void> T PlayTakeDamageEffect(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EA5ED4))(this, pawn, damageInfo);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(NetworkAITakeDamageComponent*, float))(Il2CppBase() + 0x3EA60F0))(this, deltaTime);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossAITakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossAITakeDamageComponent"));
	}


	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(NetworkBossAITakeDamageComponent*, uintptr_t))(Il2CppBase() + 0x3EA9FC4))(this, pawn);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkBossAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EAA0A4))(this, pawn, damageInfo);
	}
	template <typename T = void> T UpdateBossHealthRatio(float rate) {
		return ((T (*)(NetworkBossAITakeDamageComponent*, float))(Il2CppBase() + 0x3EA9FE0))(this, rate);
	}

};

}

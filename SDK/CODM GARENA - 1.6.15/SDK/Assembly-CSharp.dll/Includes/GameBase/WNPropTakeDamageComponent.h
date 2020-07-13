#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNPropTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNPropTakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(WNPropTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x459478C))(this, pawn, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(WNPropTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45949B8))(this, pawn, damageInfo);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVETakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVETakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(PVETakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4050FB8))(this, pawn, damageInfo);
	}

};

}

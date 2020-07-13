#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkBossSantaTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkBossSantaTakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(NetworkBossSantaTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EB5474))(this, pawn, damageInfo);
	}

};

}

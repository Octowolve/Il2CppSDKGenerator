#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPTakeDamageComponent"));
	}


	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PVPTakeDamageComponent*, uintptr_t))(Il2CppBase() + 0x2B18014))(this, pawn);
	}

};

}

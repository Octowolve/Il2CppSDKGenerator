#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGTakeDamageComponent"));
	}


	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(SGTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F0E954))(this, pawn, damageInfo);
	}

};

}

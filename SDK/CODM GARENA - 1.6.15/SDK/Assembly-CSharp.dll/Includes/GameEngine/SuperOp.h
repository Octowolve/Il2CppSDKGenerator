#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SuperOp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SuperOp"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetFireAnimLenght() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T GetFireAnimLenght(uintptr_t inWeapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E76998))(0, inWeapon);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPartUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetComposePartType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetComposePartType(uintptr_t category) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2415A2C))(0, category);
	}

};

}

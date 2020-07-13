#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ModeTipsShowAnimHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ModeTipsShowAnimHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_AnimDuration() {
		return ((T (*)(ModeTipsShowAnimHUD*))(Il2CppBase() + 0x1FA40CC))(this);
	}

};

}

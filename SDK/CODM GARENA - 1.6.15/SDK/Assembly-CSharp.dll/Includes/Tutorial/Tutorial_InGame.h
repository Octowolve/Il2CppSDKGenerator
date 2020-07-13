#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialInGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "Tutorial_InGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InGame() {
		return ((T (*)(TutorialInGame*))(Il2CppBase() + 0x4B17AC4))(this);
	}

};

}

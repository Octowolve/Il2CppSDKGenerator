#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialOutGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "Tutorial_OutGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InGame() {
		return ((T (*)(TutorialOutGame*))(Il2CppBase() + 0x4B18BC4))(this);
	}

};

}

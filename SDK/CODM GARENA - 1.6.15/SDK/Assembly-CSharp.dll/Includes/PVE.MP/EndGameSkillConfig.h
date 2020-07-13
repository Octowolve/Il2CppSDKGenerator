#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class EndGameSkillConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "EndGameSkillConfig"));
	}

	template <typename T = bool> T& endGameWin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

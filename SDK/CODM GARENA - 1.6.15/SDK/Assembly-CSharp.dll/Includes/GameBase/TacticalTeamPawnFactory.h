#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTeamPawnFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTeamPawnFactory"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTacticalTeamPawnManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T GetTacticalTeamPawnManager(uintptr_t tacticalTopView) {
		return ((T (*)(TacticalTeamPawnFactory*, uintptr_t))(Il2CppBase() + 0x27AF89C))(this, tacticalTopView);
	}

};

}

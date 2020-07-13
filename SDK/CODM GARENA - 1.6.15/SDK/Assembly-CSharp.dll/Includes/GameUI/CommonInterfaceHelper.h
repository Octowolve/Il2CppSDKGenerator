#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonInterfaceHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonInterfaceHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetRankIconByScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankIconByLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetRankIconByScore(int32_t ladderScore, uintptr_t type, bool bSmallIcon) {
		return ((T (*)(void *, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3DF0E7C))(0, ladderScore, type, bSmallIcon);
	}
	template <typename T = Il2CppString*> static T GetRankIconByLevel(int32_t ladderlevel, uintptr_t type, bool bSmallIcon) {
		return ((T (*)(void *, int32_t, uintptr_t, bool))(Il2CppBase() + 0x3DF1048))(0, ladderlevel, type, bSmallIcon);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class KillStreakBasePawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "KillStreakBasePawn"));
	}


	template <typename T = uintptr_t> T get_PawnCategoryType() {
		return ((T (*)(KillStreakBasePawn*))(Il2CppBase() + 0x2E24770))(this);
	}

};

}

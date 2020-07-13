#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class ScoreStreakReplaceWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "ScoreStreakReplaceWindowView"));
	}

	template <typename T = uintptr_t> T& ContentDesc() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& StreakListRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}


};

}

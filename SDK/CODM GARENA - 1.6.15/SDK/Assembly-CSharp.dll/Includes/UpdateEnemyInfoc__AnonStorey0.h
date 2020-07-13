#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateEnemyInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateEnemyInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& inNewEnemy() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(UpdateEnemyInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x404F5A8))(this, e);
	}

};

}

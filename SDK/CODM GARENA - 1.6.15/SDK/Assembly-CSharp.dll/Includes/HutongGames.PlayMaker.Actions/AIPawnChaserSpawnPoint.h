#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIPawnChaserSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIPawnChaserSpawnPoint"));
	}

	template <typename T = uintptr_t> T& MPSpecialMove() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(AIPawnChaserSpawnPoint*))(Il2CppBase() + 0x4F297DC))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIPawnWanderSpawnPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIPawnWanderSpawnPoint"));
	}

	template <typename T = uintptr_t> T& InitAction() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& InitAnim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AnimNames() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AIPawnWanderSpawnPoint*))(Il2CppBase() + 0x4F29CC0))(this);
	}
	template <typename T = uintptr_t> T InitializePawnData() {
		return ((T (*)(AIPawnWanderSpawnPoint*))(Il2CppBase() + 0x4F29FE0))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SpawnAIAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SpawnAIAction"));
	}

	template <typename T = uintptr_t> T& spawnChecker() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& spawnPoint() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& aiIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& spawnCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SpawnAIAction*))(Il2CppBase() + 0x5030F54))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(SpawnAIAction*))(Il2CppBase() + 0x5030F58))(this);
	}

};

}

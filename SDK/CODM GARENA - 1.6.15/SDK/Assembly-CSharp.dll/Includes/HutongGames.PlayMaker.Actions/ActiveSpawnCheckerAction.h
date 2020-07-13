#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ActiveSpawnCheckerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ActiveSpawnCheckerAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnerVolume() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& IsDeactive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ActiveSpawnCheckerAction*))(Il2CppBase() + 0x476B9F8))(this);
	}

};

}

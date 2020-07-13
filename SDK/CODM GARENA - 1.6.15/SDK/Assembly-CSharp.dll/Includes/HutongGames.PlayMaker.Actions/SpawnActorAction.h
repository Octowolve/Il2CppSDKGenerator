#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SpawnActorAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SpawnActorAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SpawnerObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SpawnActorAction*))(Il2CppBase() + 0x5030D84))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetPlayerSpawnGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_SetPlayerSpawnGroup"));
	}

	template <typename T = int32_t> T& group() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetPlayerSpawnGroup*))(Il2CppBase() + 0x4FCFFEC))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetPlayerSpawnGroup*))(Il2CppBase() + 0x4FD0064))(this);
	}

};

}

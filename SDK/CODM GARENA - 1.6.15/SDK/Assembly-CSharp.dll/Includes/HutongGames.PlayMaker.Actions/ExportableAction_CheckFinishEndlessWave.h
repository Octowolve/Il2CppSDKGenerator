#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionCheckFinishEndlessWave
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_CheckFinishEndlessWave"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionCheckFinishEndlessWave*))(Il2CppBase() + 0x4FCE048))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionCheckFinishEndlessWave*))(Il2CppBase() + 0x4FCE050))(this);
	}

};

}

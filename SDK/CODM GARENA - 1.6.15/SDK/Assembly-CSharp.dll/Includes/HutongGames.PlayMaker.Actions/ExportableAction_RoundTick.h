#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionRoundTick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_RoundTick"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionRoundTick*))(Il2CppBase() + 0x4FCFBA8))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionRoundTick*))(Il2CppBase() + 0x4FCFBB0))(this);
	}

};

}

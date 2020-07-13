#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionCheckStartRound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_CheckStartRound"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionCheckStartRound*))(Il2CppBase() + 0x4FCE294))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionCheckStartRound*))(Il2CppBase() + 0x4FCE29C))(this);
	}

};

}

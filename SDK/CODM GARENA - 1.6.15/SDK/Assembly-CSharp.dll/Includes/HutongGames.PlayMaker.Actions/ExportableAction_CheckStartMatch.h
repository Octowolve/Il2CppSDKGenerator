#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionCheckStartMatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_CheckStartMatch"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionCheckStartMatch*))(Il2CppBase() + 0x4FCE20C))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionCheckStartMatch*))(Il2CppBase() + 0x4FCE214))(this);
	}

};

}

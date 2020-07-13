#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionCheckEnterPreparing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_CheckEnterPreparing"));
	}


	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionCheckEnterPreparing*))(Il2CppBase() + 0x4FCDFC0))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionCheckEnterPreparing*))(Il2CppBase() + 0x4FCDFC8))(this);
	}

};

}

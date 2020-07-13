#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionRemoveCurrentProcessBranch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_RemoveCurrentProcessBranch"));
	}


	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionRemoveCurrentProcessBranch*))(Il2CppBase() + 0x4FCFAA8))(this);
	}

};

}

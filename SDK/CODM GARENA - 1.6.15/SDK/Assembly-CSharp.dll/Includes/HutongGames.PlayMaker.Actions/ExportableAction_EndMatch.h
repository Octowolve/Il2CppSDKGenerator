#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionEndMatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_EndMatch"));
	}


	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionEndMatch*))(Il2CppBase() + 0x4FCEF84))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionDisableScoreStreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Disable_ScoreStreak"));
	}


	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionDisableScoreStreak*))(Il2CppBase() + 0x4FCE978))(this);
	}

};

}

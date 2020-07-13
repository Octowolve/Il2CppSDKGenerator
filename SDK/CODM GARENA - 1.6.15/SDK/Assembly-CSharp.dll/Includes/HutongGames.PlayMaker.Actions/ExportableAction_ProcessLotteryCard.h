#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionProcessLotteryCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_ProcessLotteryCard"));
	}


	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionProcessLotteryCard*))(Il2CppBase() + 0x4FCFA28))(this);
	}

};

}

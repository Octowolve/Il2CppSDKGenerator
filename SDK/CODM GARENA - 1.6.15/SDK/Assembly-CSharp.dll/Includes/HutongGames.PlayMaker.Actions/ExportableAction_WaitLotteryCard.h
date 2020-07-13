#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionWaitLotteryCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_WaitLotteryCard"));
	}

	template <typename T = int32_t> T& TimeoutSeconds() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionWaitLotteryCard*))(Il2CppBase() + 0x504DE4C))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionWaitLotteryCard*))(Il2CppBase() + 0x504DE54))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionWaitLotteryCard*))(Il2CppBase() + 0x504DECC))(this);
	}

};

}

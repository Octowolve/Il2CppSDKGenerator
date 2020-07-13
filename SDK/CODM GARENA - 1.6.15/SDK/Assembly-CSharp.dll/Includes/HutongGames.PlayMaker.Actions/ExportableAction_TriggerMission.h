#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionTriggerMission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_TriggerMission"));
	}

	template <typename T = float> T& triggerBaseProbability() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& triggerAdditiveProbability() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionTriggerMission*))(Il2CppBase() + 0x504DC9C))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionTriggerMission*))(Il2CppBase() + 0x504DD14))(this);
	}

};

}

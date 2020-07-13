#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetTotalMissionCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_SetTotalMissionCount"));
	}

	template <typename T = int32_t> T& missionCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetTotalMissionCount*))(Il2CppBase() + 0x4FD0318))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetTotalMissionCount*))(Il2CppBase() + 0x4FD0390))(this);
	}

};

}

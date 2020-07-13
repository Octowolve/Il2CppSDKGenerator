#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupMission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_Mission"));
	}

	template <typename T = int32_t> T& missionCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& subtaskCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& missionDescID() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupMission*))(Il2CppBase() + 0x504B24C))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupMission*))(Il2CppBase() + 0x504B3D4))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupMission*))(Il2CppBase() + 0x504B538))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionCheckSetActiveBuffMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_CheckSetActiveBuffMachine"));
	}

	template <typename T = bool> T& isEnable() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionCheckSetActiveBuffMachine*))(Il2CppBase() + 0x4FCE0D0))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionCheckSetActiveBuffMachine*))(Il2CppBase() + 0x4FCE0D8))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionCheckSetActiveBuffMachine*))(Il2CppBase() + 0x4FCE150))(this);
	}

};

}

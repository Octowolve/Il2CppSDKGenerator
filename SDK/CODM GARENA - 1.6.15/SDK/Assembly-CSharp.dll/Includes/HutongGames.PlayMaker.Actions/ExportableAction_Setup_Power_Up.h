#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupPowerUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_Power_Up"));
	}

	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& powerUpID() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupPowerUp*))(Il2CppBase() + 0x504B5B8))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupPowerUp*))(Il2CppBase() + 0x504B6C0))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupPowerUp*))(Il2CppBase() + 0x504B738))(this);
	}

};

}

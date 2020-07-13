#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionDropPowerup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_DropPowerup"));
	}

	template <typename T = uintptr_t> T& Point() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& PowerUpId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionDropPowerup*))(Il2CppBase() + 0x4FCEBF8))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionDropPowerup*))(Il2CppBase() + 0x4FCEC00))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionDropPowerup*))(Il2CppBase() + 0x4FCEC78))(this);
	}

};

}

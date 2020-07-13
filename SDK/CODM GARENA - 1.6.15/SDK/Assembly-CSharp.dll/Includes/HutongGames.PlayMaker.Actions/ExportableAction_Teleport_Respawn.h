#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionTeleportRespawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Teleport_Respawn"));
	}

	template <typename T = int32_t> T& spawnGroupId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionTeleportRespawn*))(Il2CppBase() + 0x504DB30))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionTeleportRespawn*))(Il2CppBase() + 0x504DB5C))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionTeleportRespawn*))(Il2CppBase() + 0x504DBD4))(this);
	}

};

}

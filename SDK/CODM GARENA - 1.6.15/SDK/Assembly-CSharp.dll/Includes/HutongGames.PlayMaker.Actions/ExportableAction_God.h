#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionGod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_God"));
	}

	template <typename T = uintptr_t> T& excludeCamp() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionGod*))(Il2CppBase() + 0x4FCF2A8))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionGod*))(Il2CppBase() + 0x4FCF320))(this);
	}

};

}

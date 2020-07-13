#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionWaitTick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_WaitTick"));
	}

	template <typename T = int32_t> T& time_secends() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& freezeTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionWaitTick*))(Il2CppBase() + 0x504DFD0))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionWaitTick*))(Il2CppBase() + 0x504DFD8))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionWaitTick*))(Il2CppBase() + 0x504E050))(this);
	}

};

}

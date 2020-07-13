#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSceneEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_SceneEvent"));
	}

	template <typename T = Il2CppString*> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& needNotifyWhenMidJoin() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSceneEvent*))(Il2CppBase() + 0x4FCFC30))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSceneEvent*))(Il2CppBase() + 0x4FCFD80))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSceneEvent*))(Il2CppBase() + 0x4FCFDF8))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionForbidJoinRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_ForbidJoinRoom"));
	}


	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionForbidJoinRoom*))(Il2CppBase() + 0x4FCF184))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionForbidJoinRoom*))(Il2CppBase() + 0x4FCF1A8))(this);
	}

};

}

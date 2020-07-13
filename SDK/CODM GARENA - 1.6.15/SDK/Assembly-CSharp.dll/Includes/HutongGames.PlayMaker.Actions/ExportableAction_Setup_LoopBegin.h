#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupLoopBegin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_LoopBegin"));
	}

	template <typename T = int32_t> T& LoopCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupLoopBegin*))(Il2CppBase() + 0x504A480))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupLoopBegin*))(Il2CppBase() + 0x504A518))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupLoopBegin*))(Il2CppBase() + 0x504A590))(this);
	}

};

}

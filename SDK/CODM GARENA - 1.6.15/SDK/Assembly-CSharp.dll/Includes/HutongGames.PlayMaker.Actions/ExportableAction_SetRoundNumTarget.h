#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetRoundNumTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_SetRoundNumTarget"));
	}

	template <typename T = int32_t> T& totalNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& targetNum() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetRoundNumTarget*))(Il2CppBase() + 0x4FD0168))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetRoundNumTarget*))(Il2CppBase() + 0x4FD01E0))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionShowUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_ShowUI"));
	}

	template <typename T = uintptr_t> T& uiType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& displayDuration() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& hide() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionShowUI*))(Il2CppBase() + 0x504CEDC))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionShowUI*))(Il2CppBase() + 0x504CF54))(this);
	}

};

}

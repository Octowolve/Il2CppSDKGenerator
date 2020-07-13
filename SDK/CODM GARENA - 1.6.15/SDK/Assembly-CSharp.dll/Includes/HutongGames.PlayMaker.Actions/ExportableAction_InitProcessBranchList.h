#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionInitProcessBranchList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_InitProcessBranchList"));
	}

	template <typename T = int32_t> T& branch_count() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionInitProcessBranchList*))(Il2CppBase() + 0x4FCF430))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionInitProcessBranchList*))(Il2CppBase() + 0x4FCF4A8))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionInitProcessBranchList*))(Il2CppBase() + 0x4FCF53C))(this);
	}

};

}

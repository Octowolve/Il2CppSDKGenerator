#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionChooseProcessBranch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_ChooseProcessBranch"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& excludeBranchList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionChooseProcessBranch*))(Il2CppBase() + 0x4FCE31C))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionChooseProcessBranch*))(Il2CppBase() + 0x4FCE394))(this);
	}
	template <typename T = Il2CppString*> static T GetCustomParametersm__0(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FCE658))(0, i);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionAddScoreStreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Add_ScoreStreak"));
	}

	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionAddScoreStreak*))(Il2CppBase() + 0x4FCDD7C))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionAddScoreStreak*))(Il2CppBase() + 0x4FCDDF4))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionAddScoreStreak*))(Il2CppBase() + 0x4FCDE88))(this);
	}

};

}

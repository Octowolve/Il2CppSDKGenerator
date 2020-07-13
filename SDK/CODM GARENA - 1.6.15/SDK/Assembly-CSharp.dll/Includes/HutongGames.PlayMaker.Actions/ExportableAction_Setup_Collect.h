#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupCollect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_Collect"));
	}

	template <typename T = int32_t> T& number() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& powerUpID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& interval() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupCollect*))(Il2CppBase() + 0x504A110))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupCollect*))(Il2CppBase() + 0x504A214))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupCollect*))(Il2CppBase() + 0x504A28C))(this);
	}

};

}

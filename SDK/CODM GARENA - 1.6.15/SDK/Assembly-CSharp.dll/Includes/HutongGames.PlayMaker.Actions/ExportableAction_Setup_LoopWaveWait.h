#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupLoopWaveWait
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_LoopWaveWait"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& waveWaitTimes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(ExportableActionSetupLoopWaveWait*))(Il2CppBase() + 0x504AB48))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupLoopWaveWait*))(Il2CppBase() + 0x504AB50))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupLoopWaveWait*))(Il2CppBase() + 0x504ACEC))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupLoopWaveWait*))(Il2CppBase() + 0x504AD64))(this);
	}
	template <typename T = bool> static T ErrorCheckm__0(int32_t e) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x504AFB8))(0, e);
	}

};

}

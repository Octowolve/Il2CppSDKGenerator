#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ExportableActionSetupLoopWaveID
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ExportableAction_Setup_LoopWaveID"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& waveSequenceIDs() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ExportableActionSetupLoopWaveID*))(Il2CppBase() + 0x504A6D0))(this);
	}
	template <typename T = Il2CppString*> T GetActionName() {
		return ((T (*)(ExportableActionSetupLoopWaveID*))(Il2CppBase() + 0x504A86C))(this);
	}
	template <typename T = Il2CppString*> T GetCustomParameters() {
		return ((T (*)(ExportableActionSetupLoopWaveID*))(Il2CppBase() + 0x504A8E4))(this);
	}
	template <typename T = bool> static T ErrorCheckm__0(int32_t e) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x504AB38))(0, e);
	}

};

}

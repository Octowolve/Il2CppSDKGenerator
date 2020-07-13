#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmDebugUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmDebugUtility"));
	}


	template <typename T = void> static T Log(uintptr_t fsm, Il2CppString* text, bool frameCount) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2F06218))(0, fsm, text, frameCount);
	}
	template <typename T = void> static T Log_1(Il2CppString* text, bool frameCount) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x2F06538))(0, text, frameCount);
	}
	template <typename T = void> static T Log_2(uintptr_t obj, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F06690))(0, obj, text);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class KillDelayedEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "KillDelayedEvents"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(KillDelayedEvents*))(Il2CppBase() + 0x4D745A8))(this);
	}

};

}

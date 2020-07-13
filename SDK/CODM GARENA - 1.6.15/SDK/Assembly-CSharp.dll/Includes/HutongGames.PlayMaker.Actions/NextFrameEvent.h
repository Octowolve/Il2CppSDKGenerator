#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class NextFrameEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "NextFrameEvent"));
	}

	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(NextFrameEvent*))(Il2CppBase() + 0x4D7BA74))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(NextFrameEvent*))(Il2CppBase() + 0x4D7BA80))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(NextFrameEvent*))(Il2CppBase() + 0x4D7BA84))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class DelayedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "DelayedEvent"));
	}

	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fsmEvent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& eventTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& eventData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& eventFired() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_FsmEvent() {
		return ((T (*)(DelayedEvent*))(Il2CppBase() + 0x2EEBDD4))(this);
	}
	template <typename T = float> T get_Timer() {
		return ((T (*)(DelayedEvent*))(Il2CppBase() + 0x2EEBDDC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayedEvent*))(Il2CppBase() + 0x2EEC41C))(this);
	}
	template <typename T = bool> static T WasSent(uintptr_t delayedEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EECC0C))(0, delayedEvent);
	}
	template <typename T = bool> T get_Finished() {
		return ((T (*)(DelayedEvent*))(Il2CppBase() + 0x2EECC28))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ForwardEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ForwardEvent"));
	}

	template <typename T = uintptr_t> T& forwardTo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eventsToForward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& eatEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ForwardEvent*))(Il2CppBase() + 0x5052330))(this);
	}
	template <typename T = bool> T Event(uintptr_t fsmEvent) {
		return ((T (*)(ForwardEvent*, uintptr_t))(Il2CppBase() + 0x50523E8))(this, fsmEvent);
	}

};

}

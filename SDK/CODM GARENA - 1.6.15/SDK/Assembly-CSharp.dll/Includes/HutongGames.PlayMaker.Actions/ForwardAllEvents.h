#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ForwardAllEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ForwardAllEvents"));
	}

	template <typename T = uintptr_t> T& forwardTo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& exceptThese() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& eatEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ForwardAllEvents*))(Il2CppBase() + 0x505211C))(this);
	}
	template <typename T = bool> T Event(uintptr_t fsmEvent) {
		return ((T (*)(ForwardAllEvents*, uintptr_t))(Il2CppBase() + 0x505228C))(this, fsmEvent);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendRandomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendRandomEvent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& events() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& delayedEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SendRandomEvent*))(Il2CppBase() + 0x4FAFC0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendRandomEvent*))(Il2CppBase() + 0x4FAFDE4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SendRandomEvent*))(Il2CppBase() + 0x4FAFF04))(this);
	}

};

}

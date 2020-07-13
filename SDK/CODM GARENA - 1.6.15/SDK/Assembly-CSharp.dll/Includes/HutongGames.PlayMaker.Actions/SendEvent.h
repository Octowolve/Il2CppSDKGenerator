#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendEvent"));
	}

	template <typename T = uintptr_t> T& eventTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& delayedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SendEvent*))(Il2CppBase() + 0x4FAEC10))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendEvent*))(Il2CppBase() + 0x4FAEC28))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SendEvent*))(Il2CppBase() + 0x4FAED14))(this);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendEventByName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendEventByName"));
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
		return ((T (*)(SendEventByName*))(Il2CppBase() + 0x4FAED90))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendEventByName*))(Il2CppBase() + 0x4FAEDA8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SendEventByName*))(Il2CppBase() + 0x4FAEF48))(this);
	}

};

}

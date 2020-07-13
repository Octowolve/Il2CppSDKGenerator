#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WakeUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WakeUp"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WakeUp*))(Il2CppBase() + 0x4F20628))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WakeUp*))(Il2CppBase() + 0x4F20634))(this);
	}
	template <typename T = void> T DoWakeUp() {
		return ((T (*)(WakeUp*))(Il2CppBase() + 0x4F20654))(this);
	}

};

}

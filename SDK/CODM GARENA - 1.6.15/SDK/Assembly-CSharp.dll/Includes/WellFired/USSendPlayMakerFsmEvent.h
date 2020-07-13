#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSendPlayMakerFsmEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSendPlayMakerFsmEvent"));
	}

	template <typename T = Il2CppString*> T& fsmEventName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USSendPlayMakerFsmEvent*))(Il2CppBase() + 0x4A460CC))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSendPlayMakerFsmEvent*, float))(Il2CppBase() + 0x4A461EC))(this, deltaTime);
	}

};

}

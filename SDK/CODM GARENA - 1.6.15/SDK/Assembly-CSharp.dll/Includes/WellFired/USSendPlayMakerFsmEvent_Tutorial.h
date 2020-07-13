#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSendPlayMakerFsmEventTutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSendPlayMakerFsmEvent_Tutorial"));
	}

	template <typename T = Il2CppString*> T& fsmEventName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USSendPlayMakerFsmEventTutorial*))(Il2CppBase() + 0x4A461F8))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSendPlayMakerFsmEventTutorial*, float))(Il2CppBase() + 0x4A46318))(this, deltaTime);
	}

};

}

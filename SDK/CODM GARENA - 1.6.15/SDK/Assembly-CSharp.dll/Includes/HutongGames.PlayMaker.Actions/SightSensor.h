#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SightSensor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SightSensor"));
	}

	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SensorObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TargetPlayer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& OwnerPawn() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SightSensor*))(Il2CppBase() + 0x502F158))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SightSensor*))(Il2CppBase() + 0x502F15C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SightSensor*))(Il2CppBase() + 0x502F24C))(this);
	}
	template <typename T = bool> T IsInSide(uintptr_t CheckObject) {
		return ((T (*)(SightSensor*, uintptr_t))(Il2CppBase() + 0x502F5FC))(this, CheckObject);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(SightSensor*))(Il2CppBase() + 0x502F6C4))(this);
	}

};

}

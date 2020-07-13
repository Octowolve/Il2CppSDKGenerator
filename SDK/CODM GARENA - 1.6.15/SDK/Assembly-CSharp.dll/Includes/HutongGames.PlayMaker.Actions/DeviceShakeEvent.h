#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DeviceShakeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DeviceShakeEvent"));
	}

	template <typename T = uintptr_t> T& shakeThreshold() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DeviceShakeEvent*))(Il2CppBase() + 0x4FC675C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(DeviceShakeEvent*))(Il2CppBase() + 0x4FC678C))(this);
	}

};

}

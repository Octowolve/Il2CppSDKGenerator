#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DeviceOrientationEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DeviceOrientationEvent"));
	}

	template <typename T = uintptr_t> T& orientation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DeviceOrientationEvent*))(Il2CppBase() + 0x4FC6498))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DeviceOrientationEvent*))(Il2CppBase() + 0x4FC64B0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(DeviceOrientationEvent*))(Il2CppBase() + 0x4FC65B8))(this);
	}
	template <typename T = void> T DoDetectDeviceOrientation() {
		return ((T (*)(DeviceOrientationEvent*))(Il2CppBase() + 0x4FC64DC))(this);
	}

};

}

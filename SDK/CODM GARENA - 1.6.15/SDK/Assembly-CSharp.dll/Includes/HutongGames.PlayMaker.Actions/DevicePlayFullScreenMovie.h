#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DevicePlayFullScreenMovie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DevicePlayFullScreenMovie"));
	}

	template <typename T = uintptr_t> T& moviePath() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fadeColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& movieControlMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& movieScalingMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DevicePlayFullScreenMovie*))(Il2CppBase() + 0x4FC65C4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DevicePlayFullScreenMovie*))(Il2CppBase() + 0x4FC66CC))(this);
	}

};

}

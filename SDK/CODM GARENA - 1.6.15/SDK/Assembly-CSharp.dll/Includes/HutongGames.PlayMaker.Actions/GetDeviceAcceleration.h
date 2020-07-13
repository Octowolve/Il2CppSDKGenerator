#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetDeviceAcceleration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetDeviceAcceleration"));
	}

	template <typename T = uintptr_t> T& storeVector() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeZ() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& multiplier() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetDeviceAcceleration*))(Il2CppBase() + 0x50882B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetDeviceAcceleration*))(Il2CppBase() + 0x50882E8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetDeviceAcceleration*))(Il2CppBase() + 0x5088510))(this);
	}
	template <typename T = void> T DoGetDeviceAcceleration() {
		return ((T (*)(GetDeviceAcceleration*))(Il2CppBase() + 0x5088314))(this);
	}

};

}

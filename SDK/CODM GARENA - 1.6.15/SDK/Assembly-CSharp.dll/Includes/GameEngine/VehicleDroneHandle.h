#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VehicleDroneHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VehicleDroneHandle"));
	}

	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& FlyVector() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FlyRiseSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_Enable() {
		return ((T (*)(VehicleDroneHandle*))(Il2CppBase() + 0x2E7ED24))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(VehicleDroneHandle*, bool))(Il2CppBase() + 0x2E7ED2C))(this, value);
	}
	template <typename T = void> T Init(uintptr_t btnCfg) {
		return ((T (*)(VehicleDroneHandle*, uintptr_t))(Il2CppBase() + 0x2E7ED34))(this, btnCfg);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VehicleDroneHandle*))(Il2CppBase() + 0x2E7EDD4))(this);
	}
	template <typename T = void> T ProcessInput(uintptr_t moveInput) {
		return ((T (*)(VehicleDroneHandle*, uintptr_t))(Il2CppBase() + 0x2E7EE9C))(this, moveInput);
	}

};

}

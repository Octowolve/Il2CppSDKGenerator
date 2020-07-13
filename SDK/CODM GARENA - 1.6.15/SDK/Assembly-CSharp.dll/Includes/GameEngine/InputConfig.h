#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InputConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InputConfig"));
	}

	template <typename T = uintptr_t> T& MovementJoystick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& FireButton() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MovementSensitivity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RotationSensitivity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RotationExponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowAimButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RotationInputHoldTimeForFire() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& RotationMoveRangeForFire() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init(uintptr_t config) {
		return ((T (*)(InputConfig*, uintptr_t))(Il2CppBase() + 0x24401C8))(this, config);
	}

};

}

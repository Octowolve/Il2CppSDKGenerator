#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RotateSensitiveInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RotateSensitiveInfoConfig"));
	}

	template <typename T = float> T& CocussionRotateSensitive() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RotateSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RotateSensitive_3PFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& AimRotateSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SniperRotateSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RotateSensitive3XFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RotateSensitive4XFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& RotateSensitiveAcogFactor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& GyroscopeFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RotateStandard() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& GamepadRotateSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& GamepadAimRotateSensitiveFactor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& GamepadJoystickDeadValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RotateSensitiveList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

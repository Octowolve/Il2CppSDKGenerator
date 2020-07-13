#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraControlParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraControlParam"));
	}

	template <typename T = float> T& MaxOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Accel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RecoverSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& EnableTilt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxTiltAngle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ActiveTiltSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& IdleTiltSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

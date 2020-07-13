#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TonemappingSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TonemappingSetting"));
	}

	template <typename T = Il2CppVector2> T& toe() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& shoulderAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& shoulderShoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& toeStrength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& toeLift() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& shoulderStrength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shoulderLift() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& whitePoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& gamma() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ConstrainParameter() {
		return ((T (*)(TonemappingSetting*))(Il2CppBase() + 0x1D1E3C8))(this);
	}

};

}

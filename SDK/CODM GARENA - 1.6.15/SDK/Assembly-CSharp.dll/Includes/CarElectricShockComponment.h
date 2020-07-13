#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CarElectricShockComponment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CarElectricShockComponment"));
	}

	template <typename T = int32_t> static T& ElectricShockDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Wheel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Body() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Wheels() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_OrignBodyPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_OrignWheelPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsElectricShock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ShockTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ShockCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& m_RotateAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_Angle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetElectricShockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartElectricShock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndElectricShock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CarElectricShockComponment*))(Il2CppBase() + 0x1D18FC4))(this);
	}
	template <typename T = void> T SetElectricShockState(bool electricShock) {
		return ((T (*)(CarElectricShockComponment*, bool))(Il2CppBase() + 0x1D191FC))(this, electricShock);
	}
	template <typename T = void> T StartElectricShock() {
		return ((T (*)(CarElectricShockComponment*))(Il2CppBase() + 0x1D1931C))(this);
	}
	template <typename T = void> T EndElectricShock() {
		return ((T (*)(CarElectricShockComponment*))(Il2CppBase() + 0x1D193D0))(this);
	}
	template <typename T = void> T StartTween(uintptr_t tween) {
		return ((T (*)(CarElectricShockComponment*, uintptr_t))(Il2CppBase() + 0x1D195A4))(this, tween);
	}
	template <typename T = void> T EndTween(uintptr_t tween) {
		return ((T (*)(CarElectricShockComponment*, uintptr_t))(Il2CppBase() + 0x1D196CC))(this, tween);
	}
	template <typename T = void> T UpdateMove(uintptr_t soundEmitter, Il2CppVector3 velocity) {
		return ((T (*)(CarElectricShockComponment*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1D197F4))(this, soundEmitter, velocity);
	}

};

}

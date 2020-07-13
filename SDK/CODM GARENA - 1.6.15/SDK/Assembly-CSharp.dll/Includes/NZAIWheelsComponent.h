#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NZAIWheelsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NZAIWheelsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Wheels() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& WheelRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxSuspensionCompression() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxSuspensionDroop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& ChassisSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Mass() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SuspensionRatio() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& linearSpeedDamping() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& angularSpeedDamping() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& physicsTickDist() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& currentLinearSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& currentAngleSpeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& lastAngle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppQuaternion> T& serverQ() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& initWheelsLocalPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& suspensionLengths() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& wheelsLocalAngle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& wheelNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& inertiaTensor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& currentDownSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& currentRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& currentSteerAngle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& groundHeight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& isEnablePhysicsTick() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& speedRefreshTime() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGroundHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWheelSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSuspension() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE2330))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE2824))(this);
	}
	template <typename T = void> T RefreshGroundHeight() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE260C))(this);
	}
	template <typename T = void> T RefreshSpeed() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE2A5C))(this);
	}
	template <typename T = void> T UpdateWheelSpeed() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE3B68))(this);
	}
	template <typename T = void> T UpdateSuspension() {
		return ((T (*)(NZAIWheelsComponent*))(Il2CppBase() + 0x3EE2DE0))(this);
	}

};

}
